% Define the new model name
modelname=('unit_delay_model');
% Create a new Simulink model
new_system(modelname,'Model')

% Open the newly created Simulink model
open_system(modelname)

% Add Unit Delay blocks to the model
add_block('simulink/Discrete/Unit Delay',[modelname '/unit Delay1'])
add_block('simulink/Discrete/Unit Delay',[modelname '/unit Delay2'])
add_block('simulink/Discrete/Unit Delay',[modelname '/unit Delay3'])
% Add Gain blocks to the model
add_block('simulink/Commonly Used Blocks/Gain',[modelname '/gain1'])
add_block('simulink/Commonly Used Blocks/Gain',[modelname '/gain2'])
add_block('simulink/Commonly Used Blocks/Gain',[modelname '/gain3'])
add_block('simulink/Commonly Used Blocks/Gain',[modelname '/gain4'])
% Add an Add block configured to take four inputs
add_block('simulink/Math Operations/Add',[modelname '/Add'],'Inputs', '++++')
% Add a Step source block to the model
add_block('simulink/Sources/Step', [modelname '/step']);
% Add a Display sink block to the model
add_block('simulink/Sinks/Display',[modelname '/display'])
% Add an Out1 sink block to the model
add_block('simulink/Sinks/Out1',[modelname '/output'])


% Connect the blocks
add_line(modelname,'step/1','gain1/1','autorouting','smart')
add_line(modelname,'gain1/1','Add/1','autorouting','smart')

add_line(modelname,'gain1/1','unit Delay1/1','autorouting','smart')
add_line(modelname,'unit Delay1/1','gain2/1','autorouting','smart')
add_line(modelname,'gain2/1','Add/2','autorouting','smart')

add_line(modelname,'gain2/1','unit Delay2/1','autorouting','smart')
add_line(modelname,'unit Delay2/1','gain3/1','autorouting','smart')
add_line(modelname,'gain3/1','Add/3','autorouting','smart')

add_line(modelname,'gain3/1','unit Delay3/1','autorouting','smart')
add_line(modelname,'unit Delay3/1','gain4/1','autorouting','smart')
add_line(modelname,'gain4/1','Add/4','autorouting','smart')

add_line(modelname,'Add/1','display/1','autorouting','smart')
add_line(modelname,'Add/1','output/1','autorouting','smart')

