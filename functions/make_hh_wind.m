function make_hh_wind(WindDir, filename, WindProf, times)
% Creates a arbitrary hub height wind condtion for FAST simulation
% CURRENTLY DOESN'T TAKE IN ANYTHING OTHER THAN THE HUBHEIGHT WIND. Other
% inputs (e.g. shear profiles) may be added later.

% M. Sinner 11 Oct. 2018

% Inputs
%   WindDir - Directory of desired location for wind file (string)
%   filename - string containing the desired name for the output file
%       (.wnd ommitted)
%   WindProf - 1xM vector of hubheight wind speeds, where M is the number
%       of samples in the record [m/s]
%   times - 1xM vector of times for the profile. .wnd files use linear
%       interpolation between times if the FAST DT is shorter than the times
%       specified

% M. Sinner 11 Oct. 2018

disp('Making hub height wind file---this could take a minute.')

% Check consistnecy
if length(WindProf) ~= length(times)
    error(['The wind profile length must match the length of the time'...
        'vector']);
end

% Create data for wind file 
data = zeros(size(times,2), 8);
for i_time = 1:size(times,2)
    data(i_time,:) = [times(i_time), WindProf(i_time), zeros(1,6)];
end

dlmwrite(fullfile(WindDir,[filename '.wnd']), data, 'delimiter',' ',...
    'precision',8)
disp('Hub height wind file made.')
end

