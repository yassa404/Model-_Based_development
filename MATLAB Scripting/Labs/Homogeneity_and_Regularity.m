clear
clc

% Define cell arrays for the table columns
name={'name1';'name2';'name3';'name4'};
gender={'male';'male';'female';'female'};
age=[20;30;19;25];
height=[170;175;160;169];
Occupation ={'Engineer' ; 'Engineer' ; 'Engineer';'Engineer'};

% Create a table with the defined columns
t=table(name,gender,age,height,Occupation);
disp('tabel')
disp(t)

%% Accessing Data from the Table
% Access the 'age' column of the table
theage=t.age


% Access a subset of the table
subtabel=t(:,1:2)
data=t(1:2,end)

% Logical indexing to access
LogicalIndexAccess=t(t.age <21,:)
LogicalIndexAccessNamme=t(t.age <21,"name")
LogicalIndexAccessgender=t (strcmpi(t.gender,'male'),:)

% Add a new column 'gpa' to the table
t.gpa=[3.7;3.2;2.1;4]

% Update the age of the first row
t.age(1)=[50] 

%% Additional Functions
% Sort the table by the 'age' column
sortedage= sortrows(t,"age")

% Display a summary of the table
summary(t)