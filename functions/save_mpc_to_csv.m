function save_mpc_to_csv(save_directory, mpc_instance, varargin)
% Save MPC problem matrices in csv format so that they can be loaded by 
% Labview
% 
% M. Sinner 4 November 2019

% Parse inputs
p_ipt = inputParser;
p_ipt.CaseSensitive = true;
addRequired(p_ipt, 'save_directory');
addRequired(p_ipt, 'mpc_instance');
addOptional(p_ipt, 'K_fb', []);
addOptional(p_ipt, 'K_fbff', []);
parse(p_ipt, save_directory, mpc_instance, varargin{:});

mkdir(save_directory); % Will throw warning if folder already exists

% Save required MPC matrices
dlmwrite(fullfile(save_directory, 'H.csv'), mpc_instance.H,...
         'precision', 8);
dlmwrite(fullfile(save_directory, 'h_pre.csv'), mpc_instance.h_pre,...
         'precision', 8);
dlmwrite(fullfile(save_directory, 'G.csv'), mpc_instance.G,...
         'precision', 8);
dlmwrite(fullfile(save_directory, 'g_pre.csv'), mpc_instance.g_pre,...
         'precision', 8);
dlmwrite(fullfile(save_directory, 'l_g_pre.csv'), mpc_instance.l_g_pre,...
         'precision', 8);
dlmwrite(fullfile(save_directory, 'lb.csv'), mpc_instance.lb,...
         'precision', 8);
dlmwrite(fullfile(save_directory, 'ub.csv'), mpc_instance.ub,...
         'precision', 8);

% Save optional inputs
if p_ipt.Results.K_fb
    dlmwrite(fullfile(save_directory, 'K_fb.csv'), p_ipt.Results.K_fb,...
             'precision', 8);
end
if p_ipt.Results.K_fbff
    dlmwrite(fullfile(save_directory, 'K_fbff.csv'),...
             p_ipt.Results.K_fbff, 'precision', 8);
end


end % end of function

