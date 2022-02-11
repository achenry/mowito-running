function [K_fbff, K_fb] = unconstrained_MPC_gain(Mdl, N, L, R)
% -----------------------------------------------------------------------
% Function finds a linear feedback feedforward gain for the control law 
% u = -K[x; d] where d is a vector of future disturbances.

% Inputs:
%   Mdl - discrete-time model of the plant (with sample time Ts)
%   N - finite prediction horizon length for MPC
%   L - (scalar or matrix) weights on outputs, >= 0
%   R - (scalar or matrix) weights in inputs, > 0.
%
% Outpts:
%   K_fbff - linear feedback feedforward gain
%   K_fb - linear feedback gain only

% M. Sinner 4 Sep. 2018
% Terminology based on Jerez, Kerrigan, and Constantinides (2011)
% ------------------------------------------------------------------------


%% Initial parts
% Extract model elements for easier use
A = Mdl.A;
B = Mdl.B;
B_d = Mdl.B_d;
C = Mdl.C;
D = Mdl.D;
D_d = Mdl.D_d;

n = size(A, 1); % State size
m = size(B, 2); % Control input size
m_d = size(B_d, 2); % Disturbance input size
p = size(C, 1); % Output size

%% Construct single cost function terms
Q = C'*L*C;
R = D'*L*D + R; % Cost due to output plus input cost
S = C'*L*D;
T = C'*L*D_d;
U = D'*L*D_d;

%% Build sparse problem
            
% *** Model matrices (for sparse equality constraint) ***
A_H = zeros((N+1)*n, n); 
A_H(1:n,1:n) = eye(n); % Puts identity in first location
B_H = zeros((N+1)*n, N*m); % Leave zeros in first location
Bd_h = zeros((N+1)*n, N*m_d); % Leave zeros in first location

for i = 1:N % Loop to build the model matrices
    A_H(i*n+1:(i+1)*n, :) = A*A_H((i-1)*n+1:i*n, :);
    
    B_H(i*n+1:(i+1)*n, :) = A*B_H((i-1)*n+1:i*n, :);
    B_H(i*n+1:(i+1)*n, (i-1)*m+1: i*m) = B;
    
    Bd_h(i*n+1:(i+1)*n, :) = A*Bd_h((i-1)*n+1:i*n, :);
    Bd_h(i*n+1:(i+1)*n, (i-1)*m_d+1: i*m_d) = B_d;   
end

% *** Cost function matrices ***
Q_H = zeros((N+1)*n, (N+1)*n); % Terminal cost will go in last entry
Q_H(1:N*n, 1:N*n) = kron(eye(N), Q); 

R_H = kron(eye(N), R);

S_H = zeros((N+1)*n, N*m); % Last block row will remain zero
S_H(1:N*n, 1:N*m) = kron(eye(N), S);

T_h = zeros((N+1)*n, N*m_d); % Last block row will remain zero
T_h(1:N*n, 1:N*m_d) = kron(eye(N), T);

U_h = kron(eye(N), U);

% Calculate terminal cost (and LQR gain K_fb)
[Q_term, ~, K_fb] = dare(A, B, Q, R, S);
Q_H(N*n+1:(N+1)*n, N*n+1:(N+1)*n) = Q_term;

%% Condense problem
% Terminology based on Jerez, Kerrigan, and Constantinides (2011)
H1 = B_H'*Q_H*B_H + R_H + 2*B_H'*S_H;
H1 = (H1+H1')/2; % Ensure symmetry
H2 = [B_H'*Q_H*A_H + S_H'*A_H, B_H'*Q_H*Bd_h + S_H'*Bd_h + B_H'*T_h + U_h];
%    ^^^^^^^^^^^^^^^^^^^^^^^^  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
%         Feedback part                      Feedforward part

%% Solve condensed problem
full_linfbff = H1\H2; % Solution to unconstrained quadratic program (when
% postmultiplied by [x_k; d])
K_fbff = full_linfbff(1:m, :); % Reduces the controller output to u_k
% rather than u_k, u_k+1, ... u_k+N
end

