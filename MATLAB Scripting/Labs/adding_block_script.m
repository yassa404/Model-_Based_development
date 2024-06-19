clear;
clc;

% Prompt the user for the number of blocks
numofblock = input('Enter number of blocks you need: ');

% Prompt the user for the model name
modelname = input('Enter model name: ', 's');

% Create and open the model
modelhandle = new_system(modelname, 'Model');
open_system(modelhandle);

% Loop to add the specified number of blocks
for i = 1:numofblock
    % Prompt the user for the type of block
    typeofblock = input('Enter type of block: ', 's');
    
    % Prompt the user for the name of the block
    nameofblock = input('Enter name of block you want: ', 's');
    
    % Add the block to the model
    add_block(typeofblock, [modelname '/' nameofblock]);   
end

% Display completion message
disp('Done');