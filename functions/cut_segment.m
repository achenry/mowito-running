function data_out = cut_segment(data_in, start_time, duration, fs)
    data_out = data_in(round(start_time*fs)+1:...
                       round((start_time+duration)*fs)+1,:);
end