%1.Create the next array in the most efficient way (at least in two different ways). Note the display
%format of A2 elements


% Method 1: Loop approach with 'ones'
% Start by creating the first column with ones

A2 = ones(13,1); % First column
% Loop through 2 to 13 to create the remaining columns
for i = 2:13
    column1 = ones(13,1) * i;  % Create a column of ones and multiply by 'i'
    A2= [A2, column1];        % Append this column to the matrix A2
end
% A2 will be identical to A and have 13 columns where each column contains values from 1 to 13.


% Method 2: Loop approach using 'repmat'
A3 = ones(13,1);  % Start with the first column of ones
for i = 2:13
    column2 = repmat(i, 13, 1);  % Use repmat to repeat the value 'i' for 13 rows
    A3 = [A3, column2];          % Append this column to the matrix A3
end
% A3 will also have the same structure as A, using 'repmat' for each column creation.


% Method 3: Most efficient using 'repmat'
% Create a 13x13 matrix where each row contains the values 1 to 13 using repmat
A4 = repmat(1:13, 13, 1);
% A4 is a matrix where each row contains the values from 1 to 13.


% Method 4: Using matrix multiplication of 'ones'
% Multiply a column vector of ones by a row vector of 1 to 13
Af = ones(13, 1) * (1:13);
disp('A5 = ');
disp(Af);% The result is a 13x13 matrix where each column contains the values 1 to 13.
% This method is concise and avoids loops, making it efficient.
