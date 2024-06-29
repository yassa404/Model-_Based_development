clear;
clc;

% Combining Strings

%% Cell Arrays - No Limitations
mycellarray = {'matlab','simulink','mbd'};

%% Rectangular Char Array
% Equal Length - Use []
% Dimension must be equal
MyCharCellArrayEqualLength = ['matlab'; 'matlab'; 'matlab'];

% Not Equal Length - Use char
MyCharCellArrayDiffLength = char('matlab', 'simulink', 'mbd');

%% strcat
name = {'yassa', 'angelos'};
subname = {'mazhar', 'fayez'};
fullname = strcat(name, {' '}, subname);
disp('Full names using strcat:');
disp(fullname);

%% cell
name = {'yassa', 'angelos'};
subname = {'mazhar', 'fayez'};
title = {'eng', 'doc'};
fullnametitle = cell(size(title));
for i = 1:length(subname)
    fullnametitle{i} = [title{i} ' ' name{i} ' ' subname{i}];
    fullnametitle{i} = strcat(title{i}, {' '}, name{i}, {' '}, subname{i});
end

disp('Full names with titles using cell and strcat:');
disp(fullnametitle);

%% strjoin
world = {'hello', 'world', 'from', 'matlab'};
disp('Original words:');
disp(world);
Strjoin = strjoin(world, ' ');
disp('Joined string using strjoin:');
disp(Strjoin);
