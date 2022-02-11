classdef MoWiTO_mdl
    % This class builds a linear model of the MoWiTO turbine (based on step
    % responses from FAST)
    
    % M. Sinner 9 Oct. 2018
    
    %% properties
    properties
        % State-space model matrices
        A       % System matrix
        B       % Control input matrix    
        B_d     % Disturbance input matrix
        C       % Output matrix
        D       % Control feedthrough matrix
        D_d     % Disturbance feedthrough matrix
        
        % State-space model dimensions
        n       % State dimension
        m       % Control input dimension
        m_d     % Disturbance input dimension
        p       % Output dimension   
    end % PROPERTIES
    
    methods
        function self = MoWiTO_mdl(A, B, B_d, C, D, D_d) % Constructor
            % Construct simple model of the plant
            
            % Assign matrices to plant
            self.A = A;
            self.B = B;
            self.B_d = B_d;
            self.C = C;
            self.D = D;
            self.D_d = D_d;
            
            % Provide dimensions
            self.n = size(A,1);
            self.m = size(B,2);
            self.m_d = size(B_d,2);
            self.p = size(C,1);
        end % MoWiTO_mdl (constructor)
        
        function ModelOut = plant_only_CT(self)
            % Construct, pass out the simple model
            ModelOut.A = self.A;
            ModelOut.B = self.B;
            ModelOut.B_d = self.B_d;
            ModelOut.C = self.C;
            ModelOut.D = self.D;
            ModelOut.D_d = self.D_d;
            
            ModelOut.n = self.n;
            ModelOut.m = self.m;
            ModelOut.m_d = self.m_d;
            ModelOut.p = self.p;
        end % plant_only
        
        function ModelOut = plant_with_state_integral_CT(self)
            % Construct, pass out the model of the plant with the augmented
            % error integral state
            
            ModelOut.A = [self.A, zeros(self.n, self.n); ...
                ones(self.n, self.n), zeros(self.n, self.n)];
            ModelOut.B = [self.B; zeros(self.n, self.m)];
            ModelOut.B_d = [self.B_d; zeros(self.n, self.m_d)];
            ModelOut.C = [self.C, zeros(self.p, self.n);...
                zeros(self.p, self.n), self.C];
            ModelOut.D = [self.D; zeros(self.p, self.m)];
            ModelOut.D_d = [self.D_d; zeros(self.p, self.m_d)];

            % New system dimensions
            ModelOut.n = 2*self.n; 
            ModelOut.m = self.m; 
            ModelOut.m_d = self.m_d; 
            ModelOut.p = 2*self.p;
        end % plant_with_state_integral_CT
        
        function ModelOut = augment_invel_DT(~, ModelIn)
            % Augment the discrete time model ModelIn to take a delta step 
            % input as opposed to the whole input (in discrete time)
            
            ModelOut.A = [ModelIn.A, ModelIn.B;...
                zeros(ModelIn.m, ModelIn.n), eye(ModelIn.m)];
            ModelOut.B = [ModelIn.B; eye(ModelIn.m)];
            ModelOut.B_d = [ModelIn.B_d; zeros(ModelIn.m, ModelIn.m_d)];
            ModelOut.C = [ModelIn.C, ModelIn.D];
            ModelOut.D = ModelIn.D;
            ModelOut.D_d = ModelIn.D_d;

            % New system dimensions
            ModelOut.n = ModelIn.n + ModelIn.m; 
            ModelOut.m = ModelIn.m; 
            ModelOut.m_d = ModelIn.m_d; 
            ModelOut.p = ModelIn.p;
        end % augment_invel_DT
        
        function ModelOut = plant_DT(self, Ts, ver)
            % Construct, pass out discretized version of simple model
            % Inputs:  
            %   Ts - Discrete sample time (in seconds)
            %   ver - string determining whether to discretize the simple
            %       plant or the plant with integrator state (either
            %       'simple' or 'augmented')
            
            
            % Create CT model, discretize
            if strcmp(ver, 'simple')
                CTmdl = self.plant_only_CT;
            elseif strcmp(ver, 'augmented')
                CTmdl = self.plant_with_state_integral_CT;
            else
                error(['Choose between the ''simple'' version or the'...
                    ' ''augmented'' version.']);
            end
            CT_ss = ss(CTmdl.A, [CTmdl.B, CTmdl.B_d], CTmdl.C,...
                [CTmdl.D, CTmdl.D_d]);
            DTmdl = c2d(CT_ss, Ts);
            
            % Assign to model out
            ModelOut.A = DTmdl.A;
            ModelOut.B = DTmdl.B(:, 1:self.m);
            ModelOut.B_d = DTmdl.B(:, self.m+1:end);
            ModelOut.C = DTmdl.C;
            ModelOut.D = DTmdl.D(:, 1:self.m);
            ModelOut.D_d = DTmdl.D(:, 1:self.m);
            
            
            ModelOut.n = CTmdl.n;
            ModelOut.m = CTmdl.m;
            ModelOut.m_d = CTmdl.m_d;
            ModelOut.p = CTmdl.p;
            ModelOut.Ts = Ts;
        end % plant_DT
            
    end % METHODS
    
end % CLASSDEF

