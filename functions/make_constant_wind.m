function make_constant_wind(WindDir, Vh_ref, TMax, varargin)
% -------------------------------------------------------------------------
% Function to create a constant wind speed input file.

% Inputs (notation from InflowWind user's guide):
%  (Required)
%   WindDir - Directory of desired location for wind file (string)
%   Vh_ref - x-direction wind velocity [m/s]
%   TMax - final time for wind file [s]
%   (Optional - input as name-value pairs)
%   DT - wind file temporal resolution [s]
%   Delta - Wind direction [deg]
%   VZ - vertical wind speed [m/s]
%   HLinShr - Linear horizontal shear [-]
%   VShr - vertical power law shear [-]
%   VLinShr - Linear vertical shear [-]

%
% Outputs 
% (none)

% M. Sinner 18 Sep. 2018
% Terminology based on Platt, Jonkman, and Jonkman (2016)
% ------------------------------------------------------------------------

disp('Making constant wind file.')

% Parse inputs
p = inputParser;
addRequired(p, 'WindDir');
addRequired(p, 'Vh_ref');
addRequired(p, 'TMax');
addParameter(p, 'DT', TMax);
addParameter(p, 'Delta', 0);
addParameter(p, 'VZ', 0);
addParameter(p, 'HLinShr', 0);
addParameter(p, 'VShr', 0);
addParameter(p, 'VLinShr', 0);
parse(p, WindDir, Vh_ref, TMax, varargin{:});

% Create data for wind file 
times = 0:p.Results.DT:TMax;
data = zeros(size(times,2), 8);
for i_time = 1:size(times,2)
    data(i_time,:) = [times(i_time), p.Results.Vh_ref, p.Results.Delta,...
        p.Results.VZ, p.Results.HLinShr, p.Results.VShr,...
        p.Results.VLinShr, 0];
    % No gust, since constant wind file.
end

dlmwrite(fullfile(WindDir,'const.wnd'), data, 'delimiter',' ',...
    'precision',8)
disp([num2str(p.Results.Vh_ref) ' m/s constant wind file made.'])

end