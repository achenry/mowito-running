function make_step_FAST(WindDir, StartVal, StepHeight, TStep, TMax, DT)
% Creates a step function input for FAST simulation
% Inputs
%   WindDir - Directory of desired location for wind file (string)
%   StartVal - Initial value for wind (taken as nominal) [m/s]
%   StepHeight - Step deltas (final heights are StartVal+StepHeight(i))[m/s]
%   Tstep - vector of time when steps initiate (must be less than TMax) [s]
%   TMax - simulation final time [s]
%   DT_sim - simulation fixed step solver period [s]
%   DT_cont - controller update period [s]

% M. Sinner 10 Oct. 2018

disp('Making step wind file.')

% Check consistnecy
if length(StepHeight) ~= length(TStep)
    error('There must be the same number of steps as step times.')
end

% Create data for wind file 
times = [0, TStep, TStep-DT, TMax];
times = sort(times);

data = zeros(size(times,2), 8);
windval = StartVal;
StepHeight = [0 StepHeight];
for i_time = 1:size(times,2)
    if floor(i_time/2) ~= i_time/2
        windval = windval + StepHeight((i_time+1)/2);
    end
    data(i_time,:) = [times(i_time), windval, zeros(1,6)];
end

dlmwrite(fullfile(WindDir,'step.wnd'), data, 'delimiter',' ',...
    'precision',8)
disp([num2str(StartVal) ' m/s nominal step wind file made.'])
end

