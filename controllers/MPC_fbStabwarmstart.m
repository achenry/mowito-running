classdef MPC_fbStabwarmstart < handle
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
        
        Q;
        R;

        H;      % Condensed problem Hessian matrix
        h_pre;  % h = h_pre*[x_k; d_vec]
        G;
        g_pre;  % g = l_g_pre + u_km1*1_N + g_pre*[x_k; d_vec]
        l_g_pre;% "
        lb;
        ub;
        
        u_opts; % Solution to the (previous) MPC problem
        
        k; % time-step
        x_hist; % state at each time-step
        u_hist; % optimized control input at each time-step
        cost; % x'Qx + u'Ru at each time-step
        
        t_tot;
        t_max;
        
        verbose;
    end % properties
    
    %% methods
    methods
        function self = MPC_fbStabwarmstart(Mdl, L, R, N, varargin)
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
            
                        
            % States and control inputs
            self.k = 0;
            self.x_hist = zeros([self.Mdl.n 0]);
            self.u_hist = zeros([self.Mdl.m 0]);
            self.cost = zeros(0);
            
            % Set up MPC problem, assign to self
            self.initialize_mpc(L, R, E, J, l, lb, ub);

            % Timing
            self.t_tot = 0;
            self.t_max = 0;
            
            self.verbose = p_ipt.Results.verbose;
        end % Constructor

        function [u_vec,mpc_res] = solve_mpc(self, x_k, d_vec_k, u_km1)


            % Changed elements in MPC problem
            making_c = [];
            for ii = 1:self.N
                making_c = [making_c, self.Mdl.B_d*d_vec_k(ii)];
            end
            
            self.fb_mpc.c = making_c;
            self.fb_mpc.x0 = x_k;
                

            % FBSTAB STUFF
            self.opts2.linear_solver = 'ricatti';
%             self.opts2.linear_solver = 'pcg';
            self.opts2.display_level = 0;
            
            tic;
            [fb_x,fb_u,fb_out] = fbstab_mpc(self.fb_x0, self.fb_mpc,self.opts2);
            t = toc;  
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%       
            %Build fbstab_mpc mex file (currently a lazy approach)
%             gendir = 'fbstab-matlab-master/src/bin/';
%             mkdir(gendir);
%             addpath(gendir);
% 
%             args = {self.fb_x0,self.fb_mpc,self.opts2};
%             codegen('fbstab_mpc','-config:mex','-o',[gendir 'fbstab_mpc_mex'],'-args',args);

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  
%%%%%%%%%%%%%%% Uncomment the next three lines and comment 122-124 to
%%%%%%%%%%%%%%% switch to compiled version of fbstab
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
%             self.fb_x0.v = fb_x.v;  %Inequality multipliers are currently
%             casuing issues. Leave the commented out (so the initial
%             conditions are always zeros

            
            % Timing
            self.t_tot = self.t_tot + t;
            self.t_max = max(self.t_max, t);
            
            % States and control inputs at time-step k
            u_k = u_vec(1:self.Mdl.m);
            self.x_hist(:, self.k + 1) = x_k;
            self.u_hist(:, self.k + 1) = u_k;
            self.cost = (x_k' * self.Q * x_k) + (u_k' * self.R * u_k);
            self.k = self.k + 1;
            
        end % solve_mpc
        
        function initialize_mpc(self, L, R, E, J, l, lb, ub)
            % Establish mpc problem for LTI case (where Hessian is constant)
            
            % Single step costs
            self.Q = self.Mdl.C'*L*self.Mdl.C;
            S = self.Mdl.C'*L*self.Mdl.D;
            self.R = self.Mdl.D'*L*self.Mdl.D + R;
            
            P = dare(self.Mdl.A, self.Mdl.B, self.Q, self.R, S);
            
            %Fbstab cost matrices
            self.fb_mpc.Q = repmat(self.Q,[1,1,self.N+1]);
            self.fb_mpc.Q(:,:,self.N+1) = P;
            self.fb_mpc.R = repmat(self.R,[1,1,self.N+1]);
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
            self.fb_mpc.E = repmat(J,[1,1,self.N+1]);
            self.fb_mpc.E(:,:,self.N+1) = J;
            self.fb_mpc.L = repmat(E,[1,1,self.N+1]);
            self.fb_mpc.L(:,:,self.N+1) = E;
            self.fb_mpc.d = repmat([-ub; -ub; -l],[1,self.N+1]);
            
            
            % Get sizes of vectors for initialization
            fb_data = MpcData(self.fb_mpc.Q,self.fb_mpc.R,self.fb_mpc.S,self.fb_mpc.q,self.fb_mpc.r,self.fb_mpc.A,self.fb_mpc.B,self.fb_mpc.c,self.fb_mpc.x0,self.fb_mpc.E,self.fb_mpc.L,self.fb_mpc.d);
            [nz,nl,nv] = fb_data.ProblemSize();
            
            %FBstab initial conditions
            self.fb_x0.z = zeros(nz,1);
            self.fb_x0.l = zeros(nl,1);
            self.fb_x0.v = zeros(nv,1);
                           
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

