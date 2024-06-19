% Display options for the user
disp('choise type of simulink system');
disp('simulink model (1)');
disp('simulink library (2)');

% Get user choice
type_of_system=input('enter your choise : ');

% Handle user choice
switch type_of_system
    case 1
        % Create and open a new Simulink model
        model_name=input('enter model name : ','s');
        model=new_system(model_name,'model');
        open_system(model);
    case 2
        % Create and open a new Simulink library
        lib_name=input('enter library name : ','s');
        lib=new_system(lib_name,'Library');
        open_system(lib);
    otherwise
        % Handle invalid choice
        disp('in valid choise')
end 


