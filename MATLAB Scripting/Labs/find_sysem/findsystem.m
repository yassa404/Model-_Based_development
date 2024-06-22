% Define the model name
modelname=('unit_delay_model');
% Define the gain values to be assigned to the Gain blocks
gainvalue={'2';'1.5';'1';'0.5'};

% Find all Unit Delay blocks in the model
unitdelayyy=find_system(modelname,'BlockType','UnitDelay');
% Find all Gain blocks in the model
gainblock=find_system(modelname,'BlockType','Gain');
% Find all Add blocks in the model (if needed for further customization)
addBlock=find_system(modelname,'BlockType','Add');

% Loop through each Gain block and set the specified parameters
for index=1:length(gainblock)
    set_param(gainblock{index},'Gain',gainvalue{index})
    set_param(gainblock{index},'BackgroundColor','blue')
    set_param(gainblock{index},'SampleTime','1')
end


% Loop through each Unit Delay block and set the specified parameters
for index=1:length(unitdelayyy)
    set_param(unitdelayyy{index},'BackgroundColor','green');
    set_param(unitdelayyy{index},'ShowName','on');
end

% Uncomment the following section if you want to change the gain values again
% gainvalue={5;8;5;7};
% set_param(gainblock{index},'Gain',num2str(gainvalue{index}))
% end