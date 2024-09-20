% Define array A with elements from -5 to 5 (equally spaced)
A = -5:5;

% Create logical array C, which will be 1 (true) for elements in A that are less than 0
C = (A < 0);

% Display array A
disp('Array A = ');
disp(A);

% Display logical array C
disp('Logical array C = ');
disp(C);
