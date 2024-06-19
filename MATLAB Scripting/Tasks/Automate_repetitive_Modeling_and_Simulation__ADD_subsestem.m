close all;
clear;
clc;

firstconstant=input("enter first constant to add :  ");
secondconstant=input("enter second constant to add :  ");

% Define the model name
modelname=('addsyp');
% Create a new Simulink model
new_system(modelname,"Model");
open_system(modelname)


% Add a Subsystem block to the model
add_block('built-in/subsystem',[modelname '/AddTwoNumber'])
% Add input and output ports within the Subsystem
add_block('simulink/Sources/In1',[modelname '/AddTwoNumber/INPUT1'])
add_block('simulink/Sources/In1',[modelname '/AddTwoNumber/INPUT2'])
add_block('simulink/Sinks/Out1',[modelname '/AddTwoNumber/output'])
% Add an Add block within the Subsystem
add_block('simulink/Math Operations/Add',[modelname '/AddTwoNumber/addblock'])
% Add Constant blocks to the main model
add_block('simulink/Commonly Used Blocks/Constant',[modelname '/FirstNum'])
add_block('simulink/Commonly Used Blocks/Constant',[modelname '/SecandNum'])
% Add a Display block to the main model
add_block('simulink/Sinks/Display',[modelname '/display'])


% Connect the ports and the Add block within the Subsystem
add_line([modelname '/AddTwoNumber'],'INPUT1/1','addblock/1');
add_line([modelname '/AddTwoNumber'],'INPUT2/1','addblock/2');
add_line([modelname '/AddTwoNumber'],'addblock/1','output/1');
% Connect the Constant blocks to the Subsystem inputs
add_line(modelname,'FirstNum/1','AddTwoNumber/1')
add_line(modelname,'SecandNum/1','AddTwoNumber/2')
% Connect the Subsystem output to the Display block
add_line(modelname,'AddTwoNumber/1','display/1')


% Set mask properties for the Subsystem
set_param([modelname '/AddTwoNumber'],'Mask','on')
set_param([modelname '/AddTwoNumber'],'MaskDescription','SubSystem to add two number')
set_param([modelname '/AddTwoNumber'],'MaskDisplay',' disp("SubSystem to add two number")')
% Set parameters for the Constant blocks
set_param([modelname '/FirstNum'], 'Value', num2str(firstconstant));
set_param([modelname '/SecandNum'], 'Value', num2str(secondconstant));

% Simulate the model using sim function
sim(modelname)
% Open the model
open_system(modelname)
% Save the model
save_system(modelname)







