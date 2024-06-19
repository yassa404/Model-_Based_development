% Simulink Model Automation Script
% This script demonstrates the usage of various Simulink functions to create,
% modify, simulate, and save a Simulink model using Gain, Step, and Scope blocks.

% Create a new Simulink model named "SimulationExample"
modelname='SimulationExample';
new_system(modelname,'Model');

% Add blocks to the model
add_block('simulink/Commonly Used Blocks/Gain',[modelname '/gainblock']);
add_block('simulink/Sources/Step', [modelname '/step']);
add_block('simulink/Commonly Used Blocks/Scope', [modelname '/scope']);

% Connect the blocks
add_line(modelname,'step/1','gainblock/1')
add_line(modelname,'gainblock/1','scope/1')

% Set parameters for the blocks using set_param
set_param('SimulationExample/gainblock','Gain','5')
set_param('SimulationExample/step','before','3','after','5','time','2')

% Retrieve parameters for the blocks using get_param
gain=get_param('SimulationExample/gainblock','Gain');
disp(['gain=' ,gain])

% Simulate the model using sim function
sim(modelname)
% Open the model
open_system(modelname)
% Save the model
save_system(modelname)
% Close the model
close_system(modelname)



