function v_est = estimate_wind_speed(omega, pitch, tau_gen, Cp_file, properties)
% Calculate time taken for wind speed read at upstream device to travel to
% turbine rotor.
% Inputs:
%   time_data - MATRIX. WHAT CHANNELS?
%  
%
% Outputs:
%   T - time for wind to travel to rotor
% 
% M. Sinner 11/19/19

% Copy properties for easy calling
rho = properties.rho;
R = properties.BladeLength; 
A = pi*R^2;
J = properties.inertia;
v_mean = properties.NominalWS;

% Prepare various quantities for use in main loop
load(Cp_file);
[BPs_mesh,TSRs_mesh] = meshgrid(BladePitches,TSRs);
omega_dot = [diff(omega); 0];
v_est = zeros(1,length(omega));

options = optimoptions('fsolve', 'Display', 'off');

% MAIN LOOP
for k = 1:length(omega)
    tau_rot_k = J*omega_dot(k) + tau_gen(k); % Calculate aerodynamic torque
    omega_k = omega(k); % Extract current speed for later use
    a = tau_rot_k*2*omega_k/(rho*A); % = C_p.v^3 (turbine physical model)
    Cp_vs_TSR = interp2(BPs_mesh, TSRs_mesh, Cp_vals,...
                        pitch(k)*ones(1,length(TSRs)), TSRs);
                    % Reduce lookup table based on blade pitch 
    
    % Solve nonlinear expression to find wind speed                
    func = @(v) Cpv3_minus_a(v, omega_k, R, a, Cp_vs_TSR, TSRs);
    
    v_est(k) = fsolve(func, v_mean, options);
    if (k-1)/1000 == round((k-1)/1000)
        disp(['Time step ',num2str(k),' of ',num2str(length(omega)),'.'])
    end
end

c = 0.9; % Filter constant
v_est = filtfilt(1-c, [1 -c], v_est);
end


function f = Cpv3_minus_a(v, omega, r, a, Cp_1d, lambda_points)
    % Function for nonlinear solver to find root of    
    lambda = omega*r/v;
    Cp = interp1(lambda_points, Cp_1d, lambda);
    f = Cp*v^3 - a;
end    


