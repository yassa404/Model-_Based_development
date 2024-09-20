%Obtain the numerical array D = [ 3 5 0; 0 0 4] from the array E = [3 5 7; 1 1 4].
% Define array E
E = [3 5 7; 1 1 4];

% Create array D by replacing specific elements of E with 0
D = E;
D(D == 7 | D == 1) = 0;  % Replace 7 and 1 with 0

% Display array E
disp('Array E = ');
disp(E);

% Display the modified array D
disp('Array D = ');
disp(D);