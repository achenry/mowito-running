classdef MPC_qpOASEShotstart < handle
    % Class for initialization, execution, and termination of LTI MPC using
    % qpOASES.
    %
    % Notation base on Jerez, Kerrigan, & Constantinides (2011)
    %
    % M. Sinner 9/20/19
    
    
    %% properties
    properties
        
        QP;     % Pointer(?) to quadratic program object for use by qpOASES
        N;      % MPC prediction horizon length 
        Mdl;    % DT LTI plant model
        
        H;      % Condensed problem Hessian matrix
        h_pre;  % h = h_pre*[x_k; d_vec]
        G;
        g_pre;  % g = l_g_pre + u_km1*1_N + g_pre*[x_k; d_vec]
        l_g_pre;% "
        lb;
        ub;
        
        t_tot;
        t_max;
        
        verbose;
    end % properties
    
    %% methods
    methods
        function self = MPC_qpOASEShotstart(Mdl, L, R, N, varargin)
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
            if isempty(p_ipt.Results.J_G)
                J_G = kron(eye(self.N), p_ipt.Results.J);
            else
                J_G = p_ipt.Results.J_G;
            end
            if isempty(p_ipt.Results.l_g)
                l_g = kron(ones(self.N,1), p_ipt.Results.l);
            else
                l_g = p_ipt.Results.l_g;
            end
            
            % Build sparse upper and lower bounds
            lb = kron(ones(self.N,1), p_ipt.Results.lb_1);
            ub = kron(ones(self.N,1), p_ipt.Results.ub_1);
            
            % Initialize MPC problem, assign to self
            AO = self.initialize_mpc(L, R, E_G, J_G, l_g, lb, ub);
            disp(['Initial problem took ', num2str(AO.cpuTime*1000), ...
                  ' ms to solve']);
            
            % Timing
            self.t_tot = 0;
            self.t_max = 0;
            
            self.verbose = p_ipt.Results.verbose;
        end % Constructor
        
        function u_vec = solve_mpc(self, x_k, d_vec_k, u_km1)
            tic;
            % Changed elements in MPC problem
            h = self.h_pre*[x_k; d_vec_k];
            g = self.l_g_pre + kron(ones(self.N,1), u_km1) + ...
                self.g_pre*[x_k; d_vec_k];
            
            % More likely to want options in here
            % options = qpOASES_options('maxIter', 10); % Removed for now
            [u_vec,~,~,~,lambda,~] = qpOASES_sequence('h',...
                self.QP, h, self.lb, self.ub, [], g);
            
            % Timing
            t = toc;
            self.t_tot = self.t_tot + t;
            self.t_max = max(self.t_max, t);
            
            if self.verbose
                if nnz(lambda) > 0 || ...
                   any((u_vec<=self.lb(1)+0.001)&(u_vec>=self.ub(1)-0.001))
                    disp('Constraint active!')
                end
            end
        end % solve_mpc
        
        function AuxOut = initialize_mpc(self, L, R, E_G, J_G, l_g, lb, ub)
            % Establish mpc problem for LTI case (where Hessian is constant)
            
            % Single step costs
            Q = self.Mdl.C'*L*self.Mdl.C;
            S = self.Mdl.C'*L*self.Mdl.D;
            R = self.Mdl.D'*L*self.Mdl.D + R;
            T = self.Mdl.C'*L*self.Mdl.D_d;
            U = self.Mdl.D'*L*self.Mdl.D_d;
            
            P = dare(self.Mdl.A, self.Mdl.B, Q, R, S);
            
            % Sparse problem cost matrices
            Q_H = kron(eye(self.N+1), Q);
            Q_H(self.N*self.Mdl.n+1:end, self.N*self.Mdl.n+1:end) = P;
            R_H = kron(eye(self.N), R);
            S_H = [kron(eye(self.N),S); zeros(self.Mdl.n,self.N*self.Mdl.m)];
            T_h = [kron(eye(self.N),T); zeros(self.Mdl.n,self.N*self.Mdl.m_d)];
            U_h = kron(eye(self.N),U);
            
            % Sparse problem model
            A_H = zeros((self.N+1)*self.Mdl.n, self.Mdl.n);
            A_H(1:self.Mdl.n, 1:self.Mdl.n) = eye(self.Mdl.n);
            B_H = zeros((self.N+1)*self.Mdl.n, self.N*self.Mdl.m);
            Bd_h = zeros((self.N+1)*self.Mdl.n, self.N*self.Mdl.m);
            for i = 1:self.N
                A_H(self.Mdl.n*i+1:self.Mdl.n*(i+1), :) = ...
                    self.Mdl.A*A_H(self.Mdl.n*(i-1)+1:self.Mdl.n*i,:);
                
                B_H(self.Mdl.n*i+1:self.Mdl.n*(i+1), :) = ...
                    self.Mdl.A*B_H(self.Mdl.n*(i-1)+1:self.Mdl.n*i,:);
                B_H(self.Mdl.n*i+1:self.Mdl.n*(i+1), ...
                    (i-1)*self.Mdl.m+1: i*self.Mdl.m) = self.Mdl.B;
                
                Bd_h(self.Mdl.n*i+1:self.Mdl.n*(i+1), :) = ...
                    self.Mdl.A*Bd_h(self.Mdl.n*(i-1)+1:self.Mdl.n*i,:);
                Bd_h(self.Mdl.n*i+1:self.Mdl.n*(i+1), ...
                    (i-1)*self.Mdl.m_d+1: i*self.Mdl.m_d) = self.Mdl.B_d;
            end
            
            % Sparse constraints built in constructor
            
            % Condense problem
            H_ = B_H'*Q_H*B_H + R_H + B_H'*S_H + S_H'*B_H;
            self.H = (H_ + H_')/2; % Ensure symmetry
            
            self.h_pre = [(B_H'*Q_H + S_H')*A_H, ...
                (B_H'*Q_H + S_H')*Bd_h + B_H'*T_h + U_h];
            
            self.G = J_G*B_H(1:self.N*self.Mdl.n,:) + E_G;
            
            self.g_pre = -J_G*[A_H(1:self.N*self.Mdl.n,:), ...
                               Bd_h(1:self.N*self.Mdl.n,:)];
            self.l_g_pre = l_g;
                           
            % Box constraint
            self.lb = lb;
            self.ub = ub;
            
            % Solve initial problem to initialize qpOASES
            x_0 = zeros(self.Mdl.n, 1);
            d_vec_0 = zeros(self.N*self.Mdl.m_d, 1);
            
            h = self.h_pre*[x_0; d_vec_0];
            g = self.l_g_pre + self.g_pre*[x_0; d_vec_0];
            
            % options = qpOASES_options('maxIter', 10); % Removed for now
            [self.QP,x,fval,exitflag,iter,~,AuxOut] = qpOASES_sequence(...
                'i', self.H, h, self.G, self.lb, self.ub, [], g);
            self.QP;
            
        end % initialize_mpc
        
        function terminate_mpc(self)
            qpOASES_sequence('c',self.QP);
        end % terminate_mpc
        
    end % methods
    
end % class

