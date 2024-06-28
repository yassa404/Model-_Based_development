clear;
clc;

%% Cell Array Creation
% Create cell array using curly braces operator {}
cellarray = {15, 'sf', 'sadd'};

% Create cell array using the function cell
thearray = cell(2, 3);
thearray{2} = 'yy';

% Access and assign values in the cell array
thearray(2,1);
thearray(2, 1:3);
thearray(2, 1:3) = {'11', '22', '33'};

%% Structure Array Creation
% Create a structure using dot operator
project.name = 'BatteryManagementSystem';
project.cost = 1000;
project.resources = [1, 2, 3];
project(2).name = 'WipersystemControl';
project(2).cost = 10000;
project(2).resources = [1, 3, 3];

% Create a structure using the struct function
Project = struct('name', 'WipersystemControl', 'cost', 10000, 'resources', [1, 3, 3]);
Project(2) = struct('name', 'BatteryManagementSystem', 'cost', 1000, 'resources', [1, 2, 3]);

% Create a large structure array
Project3(1e3, 1e3) = struct('n', ones(2), 'b', zeros(30), 'resources', [1, 2, 3]);

% Note: The following will cause an "out of memory" error
% Project3(1e9, 1e9) = struct('n', ones(2), 'b', zeros(30), 'resources', [1, 2, 3]);

%% Structure Indexing Function
% Using dot operator
Project.name;

fieldname = 'cost';
Project.(fieldname);

% Using getfield function
% getfield(struct, field)
getfield(Project, 'name');

% Using setfield function
% setfield(struct, field, value)
% setfield(Project, 'name', 'WipersystemControl');

% Using fieldnames function
fieldnames(Project);

%% Convert Structure to Cell Array and Vice Versa
% Convert structure to cell array using struct2cell
cellarr = struct2cell(Project);

% Convert cell array to structure array using cell2struct
cellArray = {'MBD', 10, 2};
fieldnamE = {'name', 'cost', 'res'};
con = cell2struct(cellArray, fieldnamE, 2);

cellArray = {'MBD'; 10; 2};
fieldnamE = {'name'; 'cost'; 'res'};
conn = cell2struct(cellArray, fieldnamE, 1);
