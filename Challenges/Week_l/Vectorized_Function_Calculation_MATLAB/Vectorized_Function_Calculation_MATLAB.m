%x=linspace(-13, 0), F(x)=2*x^2+2*x-1;
%a. There are two potential errors. Find errors and fix them. What is the size of x and F now?
% Define x using linspace
x = linspace(-13, 0);

% Define F as a vectorized function of x
F = 2 * x.^2 + 2 * x - 1;  % Use element-wise operations with .^

% Display the size of x and F
size_x = size(x);
size_F = size(F);

% Output the sizes
disp('Size of x: ');
disp(size_x);

disp('Size of F: ');
disp(size_F);
