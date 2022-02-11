function OutData_FB = run_MoWiTO_fb_simulation(wind_profile, wind_time)
% Run the MoWiTO turbine model (FAST8 version) with FBFF gains.
% Based on script from 2018 FBFF tests.

% M. Sinner 11/22/19

FBFFdir = '../MoWiTO_fbff';
currentdir = pwd; % Obtain current directory

% **** NEED TO BE CHANGED TO WORK ON THE USER'S SYSTEM *****
% addpath to FAST8 executable
rmpath([currentdir, '/FAST8/bin']);
rmpath([currentdir, '/linear_models']);
rmpath([currentdir, '/controllers']);
rmpath([currentdir, '/functions']);

cd(FBFFdir) % Change to current directory
addpath('FAST8/bin/');
addpath('linear_models/');
addpath('controllers/');
addpath('functions/');
% ************************************************************

FAST_InputFileName = 'FAST8model\MoWiTO_complex.fst';

% Simulation parameters
DT = 0.0001; % Simulation discrete time step [sec] 
TMax = wind_time(end); % Simulation length [sec] 
Nominal.WS = 7; % Nominal wind speed for simulation [m/s]
TurbParams.RatedTq = 5.0; %4.027; % Region 3 constant torque (downrated) [Nm]
Nominal.CPangle = 6.16; % Nominal blade pitch for nominal wind speed [deg]
Nominal.GS = 480; % Region 3 rated generator speed [rpm]
TurbParams.PitchRateLimit = 1.5; % Slightly conservative pitch 
% rate limit [rad/s]

% Create linear model and controller
DT_control = 0.01;
load(['MoWiTO_ss_model_' num2str(Nominal.WS) 'mps.mat']);
mdl = MoWiTO_mdl(a, b, b_d, c, d, d_d); % Create model instance
IntegralPlant_DT = mdl.plant_DT(DT_control, 'augmented'); % Create DT model
% of the plant with integral state added
MdlForControl = mdl.augment_invel_DT(IntegralPlant_DT); % Alter model so
% that the input is the change in blade pitch (rather than the blade pitch
% itself).

N = 20;
L = [1, 0; 0, 1]; % Penalizes outputs: 1 - GS error; 2 - integral of GS
% error
r = 100000; % Quadratic weight on control input Delta_u [rad] (per samp.)
[K_fbff, K_fb] = unconstrained_MPC_gain(MdlForControl, N, L, r);

% Build preview filter (UNNEEDED)
HWupstreamdist = 1.5*1.8; % Distance upstream of the turbine that the
% hotwire anemometer is placed
N_avail = round(HWupstreamdist/Nominal.WS/DT_control);
N_filt = 35; 
N_delay = round(N_avail - N - N_filt/2);
if N_delay < 0
    warning('Filter order and prediction horizon incompatible');
end

% Create wind input file
make_hh_wind('FAST8Model\WindData', 'complex', wind_profile, wind_time);

% Initialize preview measurements for simulation
DT_hw = 0.0002; % Sampling time for the hotwire anemometer
PreviewMeas_FASTSim = timeseries(Nominal.WS*ones(1,round(TMax/DT_hw)+1),...
                                 0:DT_hw:TMax);

FAST_SimulinkModel = 'simulink_models/MoWiTO_fbff_FAST_deltainpt.slx';
load('data_store/OutList_initialize');
open(FAST_SimulinkModel) % This step is unnecessary, but useful if you want
% to look at outputs in real time REMOVE ONCE WORKING.

% Run the simulation (FB only case)
%============================
FBonly = 1; % Limit the controller to only feedback
options = simset('SrcWorkspace','current');
disp(['Simulating ' FAST_SimulinkModel ' for ' num2str(TMax) ' seconds.']);
sim(FAST_SimulinkModel,[0,TMax],options); % Run simulation
OutData_FB = OutData; % Save simulation OutData
%============================
rmpath('FAST8/bin/');
rmpath('linear_models/');
rmpath('controllers/');
rmpath('functions/');
cd('../MoWiTO_mpc')
end

