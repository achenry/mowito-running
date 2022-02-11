function [filtered_preview, t, N_avail] = preview_disturbance_filter(...
    U, DT, N_pred, HWupstreamdist, N_filt, v_raw)

% Build preview filter
N_avail = round(HWupstreamdist/U/DT); 
filter_ma = tf(1/N_filt*ones(1,N_filt), [1, zeros(1, N_filt-1)], 0.01);
N_delay = round(N_avail - N_pred - (N_filt-1)/2);
if N_delay < 0
    warning('Filter order and prediction horizon incompatible');
end
% Apply filter
v_filt = lsim(filter_ma, v_raw);

filtered_preview = v_filt(N_delay:end);
t = (N_avail-(N_filt-1)/2)*DT:DT:...
    (length(filtered_preview)+(N_avail-(N_filt-1)/2)-1)*DT;
end