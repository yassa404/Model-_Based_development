clear;
clc;
modelname = 'model9';  % Define the model name
modelhandle = new_system(modelname, 'Model');  % Create a new model
open_system(modelhandle);  % Open the new model

% Add a Step block to the model
add_block('simulink/Sources/Step', [modelname '/step']);

% Add a Scope block to the model
add_block('simulink/Commonly Used Blocks/Scope', [modelname '/scope']);

% Connect the Step block to the Scope block
add_line(modelname, 'step/1', 'scope/1');

