function [DisturbanceIn, PreviewMeas] = make_step_linmod(StartVal, ...
    StepHeight, TStep, TMax, DT_sim, DT_cont)
% Creates a step function input for linear simulation
% Inputs
%   StartVal - Initial value for signal (taken as nominal0) [var]
%   StepHeight - Step delta (final height is StartVal + StepHeight) [var]
%   Tstep - time when step initiates (must be less than TMax) [s]
%   TMax - simulation final time [s]
%   DT_sim - simulation fixed step solver period [s]
%   DT_cont - controller update period [s]

% Outputs
%   DisturbanceIn - High temporal resolution signal for simulation
%   PreviewMeas - Low temporal resolution signal for controller use

% M. Sinner 10/8/18

% Construct disturbance at simulation temporal resoltion
Dist = StartVal*ones(1, TMax/DT_sim+1);
Dist(TStep/DT_sim+2:end) = (StartVal+StepHeight)*ones(1,...
    (TMax-TStep)/DT_sim);

% Construct preview measurement at controller temporal resultion
Prev = StartVal*ones(1, TMax/DT_cont+1);
Prev(TStep/DT_cont+2:end) = (StartVal+StepHeight)*ones(1,...
    (TMax-TStep)/DT_cont);

% Put in form for From Workspace Simulink block (timeseries object)
DisturbanceIn = timeseries(Dist, 0:DT_sim:TMax);
PreviewMeas = timeseries(Prev, 0:DT_cont:TMax);
end

