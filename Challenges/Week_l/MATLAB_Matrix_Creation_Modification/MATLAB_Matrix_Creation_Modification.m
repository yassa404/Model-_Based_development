%% Task: Create and modify a matrix in the most efficient way

% Step 1: Create matrix A, where each row contains values from 1 to 7.
% The multiplication of ones(7,1) and (1:7) replicates the row vector (1:7) for each row.
A = ones(7, 1) * (1:7);

% Display the original matrix A.
disp('Original Matrix A = ');
disp(A);

% Step 2: Modify matrix A by setting the 4th column and the 4th row to 0.
% This operation will replace all elements in the 4th column with zeros.
A(:,4) = 0;

% Similarly, replace all elements in the 4th row with zeros.
A(4,:) = 0;

% Display the modified matrix A.
disp('Modified Matrix A (with 4th column and row set to 0) = ');
disp(A);