% ARRAY_1.m

% a. Clean up the Workspace and Command Window
clear;  % Clear all variables from the Workspace
clc;    % Clear the Command Window

% Display the current date and time
disp(['Current date and time: ', datestr(now)]);

%%

% b. Create array A
A = {};  % Initialize A as a cell array to store the generated arrays

% Generate A1 (1-by-10) with the operator :
A{1} = 1:10;  % A1 contains integers from 1 to 10

% Generate A2 (10-by-1) with linspace()
A{2} = linspace(1, 10, 10)';  % A2 contains 10 linearly spaced points from 1 to 10

% Generate A3 (2-by-10) with eye()
A{3} = eye(2, 10);  % A3 is a 2-by-10 matrix of zeros with a 2-by-2 identity matrix

% Display the arrays
disp('Array A1 (1-by-10):');
disp(A{1});

disp('Array A2 (10-by-1):');
disp(A{2});

disp('Array A3 (2-by-10):');
disp(A{3});


%%

% c. Create array B
B = {};  % Initialize B as a cell array to store the generated arrays

% Generate B1 (5-by-6) with randi() elements ranging between [-1...1]
B{1} = randi([-1, 1], 5, 6);  % B1 contains random integers between -1 and 1

% Generate B2 (5-by-6) with rand() elements
B{2} = rand(5, 6);  % B2 contains random numbers between 0 and 1

% Generate B3 (5-by-10) with randn() elements
B{3} = randn(5, 10);  % B3 contains random numbers with a standard normal distribution

% Display the arrays
disp('Array B1 (5-by-6) with randi():');
disp(B{1});

disp('Array B2 (5-by-6) with rand():');
disp(B{2});

disp('Array B3 (5-by-10) with randn():');
disp(B{3});


%%

A1_T = transpose(A{1});   % Transpose A1 (1-by-10 to 10-by-1)

% 1. Arithmetic Operations on A1 and A2
A1new1 = A{1} + transpose(A{2});   % Adding A1 and the transpose of A2
A1new2 = A{1} .* transpose(A{2});  % Element-wise multiplication
A1new3 = A{1} - transpose(A{2});   % Subtraction

% 2. Arithmetic Operations on A2 and A3
A2new1 = A{2} * ones(1, 10);  % Replicate A{2} into a 10-by-10 matrix
A2new2 =  rot90(A{3}, 2);   % Element-wise multiplication, rotate A3 by 180 degrees
A2new3 = A{2} + transpose(A{2});   % Adding A2 with its transpose (creates a 10-by-10 matrix)

% 3. Arithmetic Operations on A3
A3new1 = rot90(A{3});       % Adding A3 with a 90-degree rotated version of itself
A3new2 = A{3} .^ 2;                % Element-wise squaring of A3
A3new3 = A{3} ./ (A{3} + 1);       % Element-wise division of A3 by A3 + 1 to avoid division by zero

% Display the new matrices
disp('A1new1 = A1 + A2^T:');
disp(A1new1);

disp('A1new2 = A1 .* A2^T:');
disp(A1new2);

disp('A1new3 = A1 - A2^T:');
disp(A1new3);

disp('A2new1 = A2 * A3:');
disp(A2new1);

disp('A2new2 = A2 .* rot90(A3, 2):');
disp(A2new2);

disp('A2new3 = A2 + A2^T:');
disp(A2new3);

disp('A3new1 = A3 + rot90(A3):');
disp(A3new1);

disp('A3new2 = A3 .^ 2:');
disp(A3new2);

disp('A3new3 = A3 ./ (A3 + 1):');
disp(A3new3);