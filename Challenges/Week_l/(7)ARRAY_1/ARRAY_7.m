%% ARRAY_1.m
% This script performs a variety of operations including array creation,
% arithmetic operations, and concatenation of arrays using different functions.

%% a. Clean workspace and display current date and time
clear; % Clear workspace
clc;   % Clear command window
disp('Current date and time:');
disp(datetime('now')); % Display current date and time

%% b. Create array A and the following arrays
% A1: 1-by-10 array using colon operator
A1 = 1:10;
disp('A1 = ');
disp(A1);

% A2: 10-by-1 array using linspace()
A2 = linspace(1, 10, 10)';
disp('A2 = ');
disp(A2);

% A3: 2-by-10 array using eye()
A3 = eye(2, 10);
disp('A3 = ');
disp(A3);

%% c. Create array B with the following random arrays
% B1: 5-by-6 array with randi() elements between [-1, 1]
B1 = randi([-1, 1], 5, 6);
disp('B1 = ');
disp(B1);

% B2: 5-by-6 array with rand() elements (random numbers between 0 and 1)
B2 = rand(5, 6);
disp('B2 = ');
disp(B2);

% B3: 5-by-10 array with randn() elements (normally distributed)
B3 = randn(5, 10);
disp('B3 = ');
disp(B3);

%% e. Perform arithmetic operations with A1, A2, A3
% At least three operations between A1, A2, A3
A1new1 = A1 + transpose(A2); 
A1new2 = A1 - A2';
A1new3 = A1 .* A2';

A2new1 = A2 * transpose(A2);
A2new2 = A2 + transpose(A1);
A2new3 = A2 ./ A1';

A3new1 = A3 .^ 2;
A3new2 = rot90(A3) * 2;
A3new3 = A3 + 5;

disp('A1new1 = '); disp(A1new1);
disp('A2new1 = '); disp(A2new1);
disp('A3new1 = '); disp(A3new1);

%% f. Perform arithmetic operations with B1, B2, B3
% At least three operations between B1, B2, B3
B1new1 = B1 + B2; 
B1new2 = B1 .* B3(:, 1:6); 
B1new3 = B1 - B2;

B2new1 = sum(B2, 2); 
B2new2 = mean(B2); 
B2new3 = fliplr(B2) + 3;

B3new1 = B3 .^ 2; 
B3new2 = transpose(B3) / 2; 
B3new3 = B3 - 1;

disp('B1new1 = '); disp(B1new1);
disp('B2new1 = '); disp(B2new1);
disp('B3new1 = '); disp(B3new1);

%% g. Create AB1, AB2, and AB3 matrices
% Using some parts of A1, A2, A3, B1, B2, B3
AB1 = [A1(1:3); flipud(B1(:, 1:3))];  % Making sure both have 3 columns
disp('AB1 = ');
disp(AB1);
AB2 = repmat(A2(1:5), 1, 6) + B2;
AB3 = A3(1:2, 1:6) + B3(1:2, 1:6);

disp('AB1 = '); disp(AB1);
disp('AB2 = '); disp(AB2);
disp('AB3 = '); disp(AB3);

%% h. Create ABC1, ABC2, ABC3 matrices by concatenating A, B, C arrays
% ABC matrices using A1, A2, A3 and B1, B2, B3 and other array parts
C1 = rand(2, 10); % Example random C array
C2 = randi([-5, 5], 5, 6); 
C3 = randn(5, 10);

ABC1 = [A1(1:5), B1(:, 1)', C1(1, :)];
ABC2 = [repmat(A2(1:3), 1, 3); B2(1:3, 1:3); C2(1:3, 1:3)];  % Replicating A2 to match matrix size
ABC3 = [A3(:, 1:5); B3(1:2, 1:5); C3(1:2, 1:5)];

disp('ABC1 = '); disp(ABC1);
disp('ABC2 = '); disp(ABC2);
disp('ABC3 = '); disp(ABC3);

