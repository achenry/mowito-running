classdef MPC_fbStabwarmstart_test < handle
    % Class for initialization, execution, and termination of LTI MPC using
    % qpOASES.
    % This version uses a `manual' warmstart, as opposed to qpOASES's 
    % in-built warmstart.
    %
    % Notation base on Jerez, Kerrigan, & Constantinides (2011)
    %
    % M. Sinner 9/27/19
    
    
    %% properties
    properties
        
        fb_mpc;
        fb_x0;
        fb_out;
        Bd_h;
        opts2;
        
        N;      % MPC prediction horizon length 
        Mdl;    % DT LTI plant model
        
        H;      % Condensed problem Hessian matrix
        h_pre;  % h = h_pre*[x_k; d_vec]
        G;
        g_pre;  % g = l_g_pre + u_km1*1_N + g_pre*[x_k; d_vec]
        l_g_pre;% "
        lb;
        ub;
        
        u_opts; % Solution to the (previous) MPC problem
        
        t_tot;
        t_max;
        
        verbose;
    end % properties
    
    %% methods
    methods
        function self = MPC_fbStabwarmstart_test(Mdl, L, R, N, varargin)
            % This function is the Constructor (runs on instantiation)
            
            % Parse inputs
            p_ipt = inputParser;
            p_ipt.CaseSensitive = true;
            addRequired(p_ipt, 'Mdl');
            addRequired(p_ipt, 'L');
            addRequired(p_ipt, 'R');
            addRequired(p_ipt, 'N');
            
            addParameter(p_ipt, 'E', []);
            addParameter(p_ipt, 'J', []);
            addParameter(p_ipt, 'l', []);
            addParameter(p_ipt, 'E_G', []);
            addParameter(p_ipt, 'J_G', []);
            addParameter(p_ipt, 'l_g', []);
            addParameter(p_ipt, 'lb_1', []);
            addParameter(p_ipt, 'ub_1', []);
            
            addParameter(p_ipt, 'verbose', true);
            
            parse(p_ipt, Mdl, L, R, N, varargin{:});
            
            % Assing simple pieces
            self.Mdl = Mdl;
            self.N = N;
            
            % Build sparse matrix constraint
            if isempty(p_ipt.Results.E_G)
                E_G = kron(eye(self.N), p_ipt.Results.E);
            else
                E_G = p_ipt.Results.E_G;
            end
            E = p_ipt.Results.E;
            if isempty(p_ipt.Results.J_G)
                J_G = kron(eye(self.N), p_ipt.Results.J);
            else
                J_G = p_ipt.Results.J_G;
            end
            J = p_ipt.Results.J;
            if isempty(p_ipt.Results.l_g)
                l_g = kron(ones(self.N,1), p_ipt.Results.l);
            else
                l_g = p_ipt.Results.l_g;
            end
            l = p_ipt.Results.l;
            
            % Build sparse upper and lower bounds
            lb = p_ipt.Results.lb_1;
            ub = p_ipt.Results.ub_1;
            
            % Set up MPC problem, assign to self
            self.initialize_mpc(L, R, E, J, l, lb, ub);
            
            % Timing
            self.t_tot = 0;
            self.t_max = 0;
            
            self.verbose = p_ipt.Results.verbose;
        end % Constructor
        
        function [u_vec,mpc_res] = solve_mpc(self, x_k, d_vec_k, u_km1)


            % Changed elements in MPC problem
%             making_c = self.Bd_h*d_vec_k;
%             for ii = self.N
%                 ci(:,ii) = making_c((ii-1)*self.Mdl.n+1:ii*self.Mdl.n);
%             end
%             self.fb_mpc.c = ci;d
            making_c = [];
            for ii = 1:self.N
                making_c = [making_c, self.Mdl.B_d*d_vec_k(ii)];
            end
            
            self.fb_mpc.c = making_c;
            self.fb_mpc.x0 = x_k;
                     
            self.opts2.linear_solver = 'ricatti';
%             self.opts2.linear_solver = 'pcg';
            self.opts2.display_level = 1;
            % FBSTAB STUFF

            
            tic;
            [fb_x,fb_u,fb_out] = fbstab_mpc(self.fb_x0, self.fb_mpc,self.opts2);
            t = toc;  
            %Build fbstab_mpc mex file (currently a lazy approach)
%             gendir = 'fbstab-matlab-master/src/bin/';
%             mkdir(gendir);
%             addpath(gendir);
% 
%             args = {self.fb_x0,self.fb_mpc,self.opts2};
%             codegen('fbstab_mpc','-config:mex','-o',[gendir 'fbstab_mpc_mex'],'-args',args);

%             mpc_res = fb_out.res;

%             tic;
%             [fb_x,fb_u] = fbstab_mpc_mex(self.fb_x0, self.fb_mpc, self.opts2);
%             t = toc;          
            
            v_vec = [];
            for ii = 1:self.N
                v_vec = [v_vec; fb_x.z((ii*self.Mdl.n)+1:(ii*self.Mdl.n)+ self.Mdl.m)];
            end
            u_vec = v_vec;
            self.fb_x0.z = fb_x.z;
            self.fb_x0.l = fb_x.l;
%             self.fb_x0.v = fb_x.v;  %Inequality multipliers

            
            % Timing

            self.t_tot = self.t_tot + t;
            self.t_max = max(self.t_max, t);
            
%             if self.verbose
%                 if nnz(lambda) > 0 || ...
%                    any((u_vec<=self.lb(1)+0.001)&(u_vec>=self.ub(1)-0.001))
%                     disp('Constraint active!')
%                 end
%             end
        end % solve_mpc
        
        function initialize_mpc(self, L, R, E, J, l, lb, ub)
            % Establish mpc problem for LTI case (where Hessian is constant)
            
            % Single step costs
            Q = self.Mdl.C'*L*self.Mdl.C;
            S = self.Mdl.C'*L*self.Mdl.D;
            R = self.Mdl.D'*L*self.Mdl.D + R;
%             T = self.Mdl.C'*L*self.Mdl.D_d;
%             U = self.Mdl.D'*L*self.Mdl.D_d;
            
            P = dare(self.Mdl.A, self.Mdl.B, Q, R, S);
            
            %Fbstab cost matrices
            self.fb_mpc.Q = repmat(Q,[1,1,self.N+1]);
            self.fb_mpc.Q(:,:,self.N+1) = P;
            self.fb_mpc.R = repmat(R,[1,1,self.N+1]);
%             self.fb_mpc.R(:,:,self.N+1) = 0.*R;
            self.fb_mpc.S = repmat(S',[1,1,self.N+1]);
            
            %Fbstab reference costs
            self.fb_mpc.q = zeros(self.Mdl.n,self.N+1);
            self.fb_mpc.r = zeros(self.Mdl.m,self.N+1);
            
            %Fbstab dynamics
            self.fb_mpc.A = repmat(self.Mdl.A,[1,1,self.N]);
            self.fb_mpc.B = repmat(self.Mdl.B,[1,1,self.N]);
            self.fb_mpc.c = repmat(zeros(self.Mdl.n,1),[1,self.N]);
            self.fb_mpc.x0 = zeros(self.Mdl.n,1);
            
            %FBstab ineq Constraints
%             self.fb_mpc.E = repmat([J_G(:,1:self.Mdl.n);zeros(2*self.Mdl.m,self.Mdl.n)],[1,1,self.N+1]);
%             L_temp = [];
%             for ii = 1:self.N
%                 L_temp(:,:,ii) = [E_G(:,ii); eye(self.Mdl.m); -eye(self.Mdl.m)];
%             end
%             L_temp(:,:,self.N+1) = [0.*E_G(:,1) ; eye(self.Mdl.m); -eye(self.Mdl.m)];
%             
%             self.fb_mpc.L = L_temp;
%             
%             l_g = [l_g;ub;-lb];
%             
%             self.fb_mpc.d = repmat(-l_g,[1,self.N+1]);
            J = [J;[1 0 0]];
            E = [E; 0 ];
            self.fb_mpc.E = repmat(J,[1,1,self.N+1]);
            self.fb_mpc.E(:,:,self.N+1) = J;
            self.fb_mpc.L = repmat(E,[1,1,self.N+1]);
            self.fb_mpc.L(:,:,self.N+1) = E;
            self.fb_mpc.d = repmat([-ub; -ub; -l; -1],[1,self.N+1]);
            
            %FBstab box constraints

            
          
            
            fb_data = MpcData(self.fb_mpc.Q,self.fb_mpc.R,self.fb_mpc.S,self.fb_mpc.q,self.fb_mpc.r,self.fb_mpc.A,self.fb_mpc.B,self.fb_mpc.c,self.fb_mpc.x0,self.fb_mpc.E,self.fb_mpc.L,self.fb_mpc.d);
            [nz,nl,nv] = fb_data.ProblemSize();
            
            %FBstab initial conditions
            self.fb_x0.z = zeros(nz,1);
            self.fb_x0.l = zeros(nl,1);
            self.fb_x0.v = zeros(nv,1);
            
            % Sparse problem cost matrices
%             Q_H = kron(eye(self.N+1), Q);
%             Q_H(self.N*self.Mdl.n+1:end, self.N*self.Mdl.n+1:end) = P;
%             R_H = kron(eye(self.N), R);
%             S_H = [kron(eye(self.N),S); zeros(self.Mdl.n,self.N*self.Mdl.m)];
%             T_h = [kron(eye(self.N),T); zeros(self.Mdl.n,self.N*self.Mdl.m_d)];
%             U_h = kron(eye(self.N),U);
            
            % Sparse problem model
%             A_H = zeros((self.N+1)*self.Mdl.n, self.Mdl.n);
%             A_H(1:self.Mdl.n, 1:self.Mdl.n) = eye(self.Mdl.n);
%             B_H = zeros((self.N+1)*self.Mdl.n, self.N*self.Mdl.m);
%             self.Bd_h = zeros((self.N+1)*self.Mdl.n, self.N*self.Mdl.m);
%             for i = 1:self.N
%                 A_H(self.Mdl.n*i+1:self.Mdl.n*(i+1), :) = ...
%                     self.Mdl.A*A_H(self.Mdl.n*(i-1)+1:self.Mdl.n*i,:);
%                 
%                 B_H(self.Mdl.n*i+1:self.Mdl.n*(i+1), :) = ...
%                     self.Mdl.A*B_H(self.Mdl.n*(i-1)+1:self.Mdl.n*i,:);
%                 B_H(self.Mdl.n*i+1:self.Mdl.n*(i+1), ...
%                     (i-1)*self.Mdl.m+1: i*self.Mdl.m) = self.Mdl.B;
%                 
%                 self.Bd_h(self.Mdl.n*i+1:self.Mdl.n*(i+1), :) = ...
%                     self.Mdl.A*self.Bd_h(self.Mdl.n*(i-1)+1:self.Mdl.n*i,:);
%                 self.Bd_h(self.Mdl.n*i+1:self.Mdl.n*(i+1), ...
%                     (i-1)*self.Mdl.m_d+1: i*self.Mdl.m_d) = self.Mdl.B_d;
%             end
            
            % Sparse constraints built in constructor
            
            % Condense problem
%             H_ = B_H'*Q_H*B_H + R_H + B_H'*S_H + S_H'*B_H;
%             self.H = (H_ + H_')/2; % Ensure symmetry
%             
%             self.h_pre = [(B_H'*Q_H + S_H')*A_H, ...
%                 (B_H'*Q_H + S_H')*Bd_h + B_H'*T_h + U_h];
%             
%             self.G = J_G*B_H(1:self.N*self.Mdl.n,:) + E_G;
%             
%             self.g_pre = -J_G*[A_H(1:self.N*self.Mdl.n,:), ...
%                                Bd_h(1:self.N*self.Mdl.n,:)];
%             self.l_g_pre = l_g;
                           
            % Box constraint
            self.lb = lb;
            self.ub = ub;
            
            % Initialize previous solution storage
            self.u_opts = zeros(self.N*self.Mdl.m, 1);
            
        end % initialize_mpc
        
        function terminate_mpc(self)
            % Nothing to terminate here.
        end % terminate_mpc
        
    end % methods
    
end % class

