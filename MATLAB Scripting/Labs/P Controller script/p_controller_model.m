% Load the p_controller library
load_system("p_controller.slx")

% Define the new model name
modelname=('p_controller_model');
% Create a new Simulink model
new_system(modelname)

% Add the p_controller block from the library to the new model
add_block([LibName '/p_controller'],[modelname '/p controller'])
% Add blocks to the model
add_block('simulink/Sources/Step', [modelname '/step']);
add_block('simulink/Commonly Used Blocks/Scope', [modelname '/scope']);

% Connect the blocks
add_line(modelname,'step/1','p controller/1')
add_line(modelname,'p controller/1','scope/1')


% Set the stop time for the simulation
set_param(modelname,'StopTime','15')

% Simulate the model using sim function
sim(modelname)
% Open the model
open_system(modelname)