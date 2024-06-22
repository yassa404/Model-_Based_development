% Define the model name
modelname=('unit_delay_model');
% Find all blocks in the model that match the specified criteria (any block type)
allblock=find_system(modelname,'regexp','on','BlockType','.*');
% Get the block type of each block found
blocktype=get_param(allblock,'BlockType');

% Loop through each block type and set the background color based on the type
for index=1:length(blocktype)
    switch blocktype{index}
        case 'Gain'
            % Set background color of Gain blocks to Cyan
            set_param(allblock{index},'BackgroundColor','Cyan')   
        case 'UnitDelay'
            % Set background color of Unit Delay blocks to Green
            set_param(allblock{index},'BackgroundColor','Green') 
        case 'Step'
            % Set background color of Step block to Orange
            set_param(allblock{index},'BackgroundColor','Orange')  
        case 'Sum'
            % Set background color of Sum block to Magenta
            set_param(allblock{index},'BackgroundColor','Magenta')   
        case 'Display'
            % Set background color of Display block to Magenta
           set_param(allblock{index},'BackgroundColor','Magenta')    
        case 'Outport'
           % Set background color of Outport block to Red
           set_param(allblock{index},'BackgroundColor','Red')      
    end
        

end    