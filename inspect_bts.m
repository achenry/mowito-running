bts_idx = 1;
bts_filename = sprintf('gm_T%d.bts', bts_idx);
[~, bts_name, ~] = fileparts(bts_filename);

FAST_InputFileName = [currentdir sprintf('\\FAST8model\\MoWiTO_%s.fst', bts_name)];

[bts_velocity, ~, ~, ~, ~, ~, ~, ~, ~, bts_dt, ~, ~, ~] ...
    = readfile_BTS(bts_filename);
bts_u = sum(bts_velocity(:, :, 1, 1).^2, 2).^(0.5); % bts_velocity(:, 1, 1, 1);
bts_t = 0:bts_dt:(length(bts_u) * bts_dt) - bts_dt;
TMax = bts_t(length(bts_t));