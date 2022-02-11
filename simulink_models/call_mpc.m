function call_mpc(block)
% Level-2 MATLAB file S-Function for solving linear MPC problem.

% M. Sinner 9/26/19

  setup(block);
end  

function setup(block)
  
  % Register dialog parameter: mpcProblem class
  block.NumDialogPrms = 1;
  block.DialogPrmsTunable = {'Nontunable'}; % Allows class parameter
  
  % Register number of input and output ports
  block.NumInputPorts  = 3; % x_k, d_vec_k, u_{k-1}
  block.NumOutputPorts = 1; % u_vec_k

  block.SampleTime = [-1 0];
  % Setup functional port properties to dynamically inherited.
  block.SetPreCompInpPortInfoToDynamic;
  block.SetPreCompOutPortInfoToDynamic;
    
  % Establish input ports
  for i_inputs = 1:block.NumInputPorts
    block.InputPort(i_inputs).Complexity   = 'Real'; 
    block.InputPort(i_inputs).DataTypeId   = 0;
    block.InputPort(i_inputs).SamplingMode = 'Sample';
  end
  block.InputPort(1).Dimensions   = block.DialogPrm(1).Data.Mdl.n;
  block.InputPort(2).Dimensions   = [block.DialogPrm(1).Data.N, ...
                                     block.DialogPrm(1).Data.Mdl.m_d];
  block.InputPort(3).Dimensions   = block.DialogPrm(1).Data.Mdl.m;
  
  % Establish output ports
  for i_outputs = 1:block.NumOutputPorts
    block.OutputPort(i_outputs).Complexity   = 'Real';
    block.OutputPort(i_outputs).DataTypeId   = 0;
    block.OutputPort(i_outputs).SamplingMode = 'Sample';
  end
  block.OutputPort(1).Dimensions = block.DialogPrm(1).Data.Mdl.m * ...
                                   block.DialogPrm(1).Data.N;
  
  % Set the block simStateCompliance to default (i.e., same as a built-in block)
  block.SimStateCompliance = 'DefaultSimState';

  % Register methods
  block.RegBlockMethod('CheckParameters',         @CheckPrms);
  % block.RegBlockMethod('ProcessParameters',       @ProcessPrms);
  block.RegBlockMethod('PostPropagationSetup',    @DoPostPropSetup);
  block.RegBlockMethod('Start',                   @Start);  
  block.RegBlockMethod('Outputs',                 @Outputs);
  
  % Block runs on TLC in accelerator mode.
  block.SetAccelRunOnTLC(true);
end  


function CheckPrms(block)
% make sure we know how to handle the parameter that gets passed.
  mpcProb = block.DialogPrm(1).Data;
  ok_objs = {'MPC_qpOASEShotstart', 'MPC_qpOASESwarmstart', ...
             'MPC_qpOASEScoldstart', 'MPC_unconstrained', 'MPC_fbStabwarmstart','MPC_fbStabwarmstart_test'};
  if ~ismember(class(mpcProb), ok_objs)
    str = sprintf(repmat('%s, ', 1, length(ok_objs)), ok_objs{:});
    error('Class type must be one of the following: \n %s', str);
  end
end  


function DoPostPropSetup(block)
  % Register all tunable parameters as runtime parameters.
  block.AutoRegRuntimePrms;
end


function ProcessPrms(block)
  block.AutoUpdateRuntimePrms;
end

function Start(block)
% Used to initialize Dwork here for ziyi hotstart. Now, store hotstart data
% inside handle class property.
end


function Outputs(block)
    % Get input data to pass to solve function
    mpcProb = block.DialogPrm(1).Data;
    x_k = block.InputPort(1).Data; % Current state
    d_vec_k = block.InputPort(2).Data; % Vector of future disturbances
    u_km1 = block.InputPort(3).Data; % Previous control input
    
    % Solve MPC problem
    u_vec_k = mpcProb.solve_mpc(x_k, d_vec_k, u_km1);
  
    % Pass solution back to simulation
    block.OutputPort(1).Data = u_vec_k; % Current vector of controls
%     block.OutputPort(2).Data = fbres;
end  


