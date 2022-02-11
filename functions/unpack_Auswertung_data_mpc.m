function control_data = unpack_Auswertung_data_mpc(t, data)
% Take data from MoWiTO test run and unpack it into the controller output
% channels.
r = 5000/100;
data = data(:, 23);
mpc_on = data(1:r:end) == 3;

control_data.time = t(1:r:end)';
control_data.pitch_command = data(11:r:end);
control_data.HW_wind_speed = data(12:r:end);
control_data.feedback_only = data(13:r:end);
control_data.solve_status  = data(14:r:end);
control_data.solve_time_ms = data(15:r:end);
control_data.iterations    = data(16:r:end);


control_data.pitch_command(not(mpc_on)) = nan;
control_data.HW_wind_speed(not(mpc_on)) = nan;
control_data.feedback_only(not(mpc_on)) = nan;
control_data.solve_status(not(mpc_on))  = nan;
control_data.solve_time_ms(not(mpc_on)) = nan;
control_data.iterations(not(mpc_on))    = nan;
end

