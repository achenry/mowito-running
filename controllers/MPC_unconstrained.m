classdef MPC_unconstrained < handle
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
        N;      % MPC prediction horizon length 
        Mdl;    % DT LTI plant model
        K_fbff; % Optimal unconstrained feedback-feedforward gain
        K_fb;   % Optimal unconstrained feedback gain (LQR gain)
    end % properties
    
    %% methods
    methods
        function self = MPC_unconstrained(Mdl, L, R, N)
            % This function is the Constructor (runs on instantiation)
            
            self.Mdl = Mdl;
            self.N = N;
            
            % Find optimal gains, assign to self
            self.initialize_mpc(L, R);
        end % Constructor
        
        function u_vec = solve_mpc(self, x_k, d_vec_k, u_km1)
            u = -self.K_fbff*[x_k; d_vec_k];
            u_vec = [u; zeros(self.N-1,1)]; % Pad for compatibility
        end % solve_mpc
        
        function initialize_mpc(self, L, R)
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
            H = (H_ + H_')/2; % Ensure symmetry
            
            h_pre = [(B_H'*Q_H + S_H')*A_H, ...
                     (B_H'*Q_H + S_H')*Bd_h + B_H'*T_h + U_h];
            
            % Solve condensed problem
            full_linfbff = H\h_pre; % Solution to unconstrained quadratic 
            % program (when postmultiplied by [x_k; d])
            self.K_fbff = full_linfbff(1:self.Mdl.m, :); % Reduces the 
            % controller output to u_k rather than u_k, u_k+1, ... u_k+N
            self.K_fb = self.K_fbff(1:self.Mdl.n);
        end % initialize_mpc
        
        function terminate_mpc(self)
            % Nothing to terminate here.
        end % terminate_mpc
        
    end % methods
    
end % class

