function p_out = process_pitch_CAN(p_in, DT_out)
% Resample pitch information from CAN robustly
% Assumes p_in has columns:
% t1, p1, t2, p2, t3, p3

threshold = 100; % Pitch anlges above threshhold treated as NaNs
blade_channels = [2, 4, 6];

% Replace eroneous values with NaNs
for i_b = blade_channels  
    p_in((p_in(:,i_b) >= threshold),i_b) = NaN;
end

% Check for multiple NaNs in a row
for i_b = blade_channels 
    nan_entries = find(isnan(p_in(:,i_b)));
    for k = 2:length(nan_entries)
        if (nan_entries(k) - nan_entries(k-1)) <= 1
            warning(['Multiple NaNs in a row, blade ', ...
                     num2str(i_b/2), ', around entry ', num2str(k), '.']);
        end
    end
end

% Remove NaN values (THIS GOES ACCROSS
p1 = p_in(:,1:2);
p2 = p_in(:,3:4);
p3 = p_in(:,5:6);

p1(isnan(p1(:,2)), :) = [];
p2(isnan(p2(:,2)), :) = [];
p3(isnan(p3(:,2)), :) = [];


% Perform interpolation and regularization
t = 0:DT_out:p_in(end,1);
p_out = [t', t', t', t', t', t']; % Fill with time values, for now
p_out(:,2) = interp1(p1(:,1), p1(:,2), t);
p_out(:,4) = interp1(p2(:,1), p2(:,2), t);
p_out(:,6) = interp1(p3(:,1), p3(:,2), t);

end

