% Close all open systems, clear the workspace, and reset the command window
close all;
clear;
clc;

% Define the library name
LibName=('p_controller');
% Create a new Simulink library
new_system(LibName,'Library')


% Add blocks to the library
add_block('built-in/subsystem',[LibName '/p_controller'])
add_block('simulink/Commonly Used Blocks/Gain',[LibName '/p_controller/Kp'])
add_block('simulink/Sources/In1',[LibName '/p_controller/Errsignal'])
add_block('simulink/Sinks/Out1',[LibName '/p_controller/ctrlSig'])

% Connect the blocks
add_line([LibName '/p_controller'],'Errsignal/1','Kp/1')
add_line([LibName '/p_controller'],'Kp/1','ctrlSig/1')

% Prompt the user to enter the Kp value
kpvalue=input('enter kp value :  ');
set_param([LibName '/p_controller/Kp'],'gain',num2str(kpvalue))


% Save and open the library
save_system(LibName)
open_system(LibName)