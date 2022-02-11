% This script is designed to run the MoWiTO turbine model (FAST8 version) 
% using Simulink.

% M. Sinner 9/22/19

mpc_type = 'warmstart'; % 'hotstart', 'warmstart', 'coldstart'
% mpc_solver = 'MPC_qpOASES';
mpc_solver = 'MPC_fbStab';
save_problem_matrices = true;
save_signals = true;

% Switches
FBonly = 0; % Use feedback only? %0 is WHAT To SET TO
Unconstrained = 0; % Use extended LQR law (not MPC)?

% MPC cost function:
L = [1, 0; 0, 1]; % Penalizes outputs: 1 - GS error; 
                  %                    2 - integral of GS error
r = 100000;       % Penality on blade pitch increment

currentdir = pwd; % Obtain current directory
cd(currentdir) % Change to current directory

% addpaths
addpath([currentdir '\FAST8\bin']);
addpath([currentdir '\linear_models']);
addpath([currentdir '\controllers']);
addpath([currentdir '\qpOASES-3.2.1\interfaces\matlab']);
addpath([currentdir '\simulink_models']);
addpath([currentdir '\functions']);
addpath([currentdir '\fbstab-matlab-master\src\components'])
addpath([currentdir '\fbstab-matlab-master\'])
addpath([currentdir '\fbstab-matlab-master\src'])
addpath([currentdir '\fbstab-matlab-master\codegen\mex\fbstab_mpc'])
addpath([currentdir '\fbstab-matlab-master\src\bin'])
addpath('C:\Users\aohe7145\Documents\matlab-toolbox\Utilities')
addpath([currentdir '\gm_T_Wind_Files_v0'])
% ************************************************************


%% Simulation parameters
DT = 0.0001; % Simulation discrete time step [sec] 
TMax = 15; % Simulation length [sec]
bts_files = [1, 2, 3, 4, 5];
horizon_lengths = [10, 15, 20, 25, 30];
TurbParams.RatedTq = 2.80; % Region 3 constant torque (downrated) [Nm]
Nominal.GS = 480; % Region 3 rated generator speed [rpm]
TurbParams.PitchRateLimit = 1.5; % Slightly conservative pitch 
Nominal.WS = 7.2; % Nominal wind speed (specifies model name) [m/s]
% rate limit [rad/s]

%% Set up MPC

% Create linear model and controller
DT_control = 0.01;
load(['MoWiTO_ss_model_' num2str(Nominal.WS) 'mps.mat']);
Nominal.BPangle = u_nom*180/pi; % Nominal blade pitch [deg]
mdl = MoWiTO_mdl(a, b, b_d, c, d, d_d); % Create model instance
IntegralPlant_DT = mdl.plant_DT(DT_control, 'augmented'); % Create DT model
% of the plant with integral state added
MdlForControl = mdl.augment_invel_DT(IntegralPlant_DT); % Alter model so
% that the input is the change in blade pitch (rather than the blade pitch
% itself).
save_signals = 0;

%bts_horizon_costs = struct('gm1', [], 'gm2', [], 'gm3', [], 'gm4', [], 'gm5', []);
% bts_N_futures =  struct('gm1', [], 'gm2', [], 'gm3', [], 'gm4', [], 'gm5', []);
bts_horizon_costs.bts_files = {};
bts_horizon_costs.mpc_costs = {};
for bts_idx = bts_files
    bts_horizon_costs = [bts_horizon_costs, []];
    bts_filename = sprintf('gm_T%d.bts', bts_idx);
    [~, bts_name, ~] = fileparts(bts_filename);
    bts_horizon_costs.bts_files{bts_idx} = bts_filename;
    bts_horizon_costs.mpc_costs{bts_idx} = struct;
    bts_horizon_costs.mpc_costs{bts_idx}.horizon_lengths = [];
    bts_horizon_costs.mpc_costs{bts_idx}.cost = [];

    FAST_InputFileName = [currentdir sprintf('\\FAST8model\\MoWiTO_%s.fst', bts_name)];

    [bts_velocity, ~, ~, ~, ~, ~, ~, ~, ~, bts_dt, ~, ~, ~] ...
        = readfile_BTS(bts_filename);
    bts_u = sum(bts_velocity(:, :, 1, 1).^2, 2).^(0.5); % bts_velocity(:, 1, 1, 1);
    bts_t = 0:bts_dt:(length(bts_u) * bts_dt) - bts_dt;
    TMax = bts_t(length(bts_t));
    
    % horizon_costs = [];
    % load(['wind_series\gust_mexhat_' num2str(7)...
    %         'ms_3ms_4s_5kHz_longer_noisy.mat']);
    % load('wind_series\complex_HW.mat');
    load 'OutList_initialize'; % Workaround to prevent a bug with FAST 8

    for i = 1:length(horizon_lengths)
        N = horizon_lengths(i);

        bts_horizon_costs.mpc_costs{bts_idx}.horizon_lengths(i) = N;

        J = blkdiag(zeros(2),-1);
        E = [1; -1; -1];
        J_G = zeros(N, N*MdlForControl.n);
        E_G = -tril(ones(N,N));
        beta_min = 0; % Minimum blade pitch angle [deg]
        l_init = (-beta_min + Nominal.BPangle)*pi/180;
    
        lb = -TurbParams.PitchRateLimit*DT_control;
        ub = TurbParams.PitchRateLimit*DT_control; % CHECK pitch rate
    
    
        l = [ub;ub;1];
        if Unconstrained
            mpc = MPC_unconstrained(MdlForControl, L, r, N);
        elseif strcmp(mpc_solver, 'MPC_qpOASES')
            mpc_class = [mpc_solver, mpc_type];
            %     mpc = feval(mpc_class, MdlForControl, L, r, N, 'J',J, 'E',E,...
            %                            'l',l, 'lb_1',lb, 'ub_1',ub);
            mpc = feval(mpc_class, MdlForControl, L, r, N, 'J',J, 'E',E,...
                'l',l);
        else
            mpc_class = [mpc_solver, mpc_type];
            mpc = feval(mpc_class, MdlForControl, L, r, N, 'J',J, 'E',E,...
                'l',l_init, 'lb_1',lb, 'ub_1',ub);
        end
    
        % Build preview filter
        HWupstreamdist = 1.5*1.8; % Distance upstream of the turbine that the
        % hotwire anemometer is placed
        N_avail = round(HWupstreamdist/Nominal.WS/DT_control); % 38
        N_filt = 6; %35;
        filter_ma = tf(1/N_filt*ones(1,N_filt), [1, zeros(1, N_filt-1)], 0.01);
        N_delay = round(N_avail - N - N_filt/2); % 38 - 17.2 - N = 20.5 - N
        while N_delay < 0
            warning('Filter order and prediction horizon incompatible');
            % N_filt = N_filt - 1;
            % N_delay = round(N_avail - N - N_filt/2);
        end
    
        % Initialize preview measurements for simulation
        % LOAD MUST BE CHANGED MANUALLY FOR DIFFERENT INPUTS (AS DEFINED BY
        % FAST8model\MoWiTO_InflowWind.ipt AND CORRESPONDING
        % FAST8model\WindData\*.wind FILE).
        DT_hw = 0.0002; % Sampling time for the hotwire anemometer
    
        % Shift measurements upstream, establish as time series for simulation
        % TODO what is the difference between v_gust_noisy and HW - which do
        % the bts files correspond to?
        sampleDelay = round((HWupstreamdist/Nominal.WS)/DT_hw);
        TMax = bts_t(length(bts_t)) - sampleDelay * DT_hw;
        % PreviewMeas_FASTSim = timeseries(v_gust_noisy(sampleDelay:end-1),...
        %    t_gust_mod(1:end-sampleDelay));
    
        % Very messy, at the moment...
        % PreviewMeas_FASTSim = timeseries(v_HW(sampleDelay:end-1),...
        %     t_HW(1:end-sampleDelay));
        
        PreviewMeas_FASTSim = timeseries(bts_u(sampleDelay:end-1),...
            bts_t(1:end-sampleDelay));
    
    
        %% Run the simulation (FB only case)
    
        % Run the simulation (FB and FF case)
        %============================
        FAST_SimulinkModel = 'MoWiTO_mpc_FAST.mdl';
    
        % open(FAST_SimulinkModel) % This step is unnecessary, but useful if you want
        % to look at outputs in real time
 

        disp(['Simulating ' FAST_SimulinkModel ' for ' num2str(TMax) ' seconds.']);
        sim(FAST_SimulinkModel, [0,TMax]); % Run simulation
        %OutData_FBFF = OutData; % Save simulation OutData
        mpc.terminate_mpc();
    
        if ~Unconstrained
            disp(['Average solve time: ',...
                num2str(mpc.t_tot/(TMax/DT_control)*1000), ' ms.']);
            disp(['Maximum solve time: ', num2str(mpc.t_max*1000), ' ms.']);
        end
        %============================
        
        %% Save data
        bts_horizon_costs.mpc_costs{bts_idx}.cost(i) = sum(mpc.cost);
        % horizon_costs = [horizon_costs sum(mpc.cost)]; % sum of cost function over all time-steps given true state and optimized first control input
        if save_signals
            save_dir = sprintf('results\csv_data_N%d_%s', N, bts_name);
            if ~exist(save_dir, 'dir')
                mkdir(save_dir); % Will throw warning if folder already exists
            end
            ts = 1:100:size(OutData, 1);
            GS_error_meas = OutData(ts, 12) - Nominal.GS;
            pitch_deg_ML = u_DTcont*180/pi + Nominal.BPangle;
            raw_HW_meas = squeeze(raw_HW_out(:,:,1:50:size(raw_HW_out,3)));
            % proc_HW_sig = squeeze(proc_HW_out);
    
            save(fullfile(save_dir, 'SimData'), 'Out*');
            dlmwrite(fullfile(save_dir,'raw_HW_meas.csv'), raw_HW_meas,...
                'precision',8);
            %dlmwrite(fullfile(save_dir,'proc_HW_sig.csv'), proc_HW_sig,...
            %         'precision',8);
            dlmwrite(fullfile(save_dir,'GS_error_meas.csv'), GS_error_meas,...
                'precision', 8);
            dlmwrite(fullfile(save_dir,'pitch_deg_ML.csv'), pitch_deg_ML,...
                'precision', 8);
        end
    
        if save_problem_matrices
            [K_fbff, K_fb] = unconstrained_MPC_gain(MdlForControl, N, L, r);
            save_dir = 'problem_matrices';
            save_mpc_to_csv(save_dir, mpc, K_fb, K_fbff);
        end
        %% Plot results
        % TODO: Bring over code from FBFF work
    end
    %afterAll(bts_futures, fetchOutputs
    
    horizon_save_dir = [currentdir '\\horizon_length_results'];
    if ~exist(horizon_save_dir, 'dir')
        mkdir(horizon_save_dir);
    end
    horizon_perf_data = [horizon_lengths' bts_horizon_costs.mpc_costs{bts_idx}.cost'];
    save(fullfile(horizon_save_dir, sprintf('horizon_perf_%s.mat', bts_name)), 'horizon_perf_data');
    f = figure;
    plot(horizon_lengths, horizon_costs);
    title(['Wind File = gm_T', bts_name(length(bts_name)), '.bts']);
    xlabel('Horizon Lengths'); ylabel('Horizon Costs');
    xticks(horizon_lengths);
    saveas(f, fullfile(horizon_save_dir, sprintf('mpc_cost_vs_N_%s.png', bts_name)));

end


% clear unnecessary variables to keep workspace clean
% clear t_gust_mod t_gust_noisy sampleDelay N_avail
% clear bts_u bts_t sampleDelay N_avail