function make_complex_wind()
% Create wind file designed to test controller constraint handling.

% M. Sinner 4 November 2019

% Time stamps for 10000Hz FAST simulation
DT = 0.0001;
t = 0:DT:15;
part_length = round((length(t) - 1)/5);

WS_nom = 7;

part1 = WS_nom*ones(1, part_length);
part2 = linspace(WS_nom, WS_nom-2, part_length);
part3 = part1;
part4 = part1+2;
part5 = part1;
part6 = part1; % Only used for hotwire in the end

all_parts_clean = [WS_nom, part1, part2, part3, part4, part5];
rng('default');
noise_wind_unfiltered = normrnd(0, 0.2, [1,length(t)+length(part6)]);

% Wind filter
a = 0.999;
g = 20;
A = [1 -a];
noise_wind = filter(g*(1-a),A,noise_wind_unfiltered);
noise_wind_save = noise_wind(1:length(t));

make_hh_wind('FAST8model/WindData','complex',...
             all_parts_clean + noise_wind_save, t);

% Hot wire measurement
noise_HW = normrnd(0, 0.5, [1,length(t)+length(part6)]);
HW_signal = [all_parts_clean, part6] + noise_wind + noise_HW;
HW_ks = 1:2:length(HW_signal);
v_HW = HW_signal(HW_ks);
t_HW = 0:DT*2:18;

disp('Saving hotwire signal.');
save('wind_series/complex_HW.mat', 't_HW', 'v_HW');



end

