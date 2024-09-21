
% Clear workspace and command window
clear;
clc;

% Prompt the user for input
W = input('Width of a rectangle: ', 's');     % Input as string to handle empty input
L = input('Length of a rectangle: ', 's');    % Input as string to handle empty input
R = input('Radius of a circle: ', 's');       % Input as string to handle empty input
S = input('Side length of a square: ', 's');  % Input as string to handle empty input
% Convert inputs to numbers if they are not empty
if ~isempty(W), W = str2double(W); end
if ~isempty(L), L = str2double(L); end
if ~isempty(R), R = str2double(R); end
if ~isempty(S), S = str2double(S); end

% Check if the user entered all the required inputs
if isempty(W) || isempty(L) || isempty(R) || isempty(S)
    % If any required input is missing, display a message
    disp('You need to ENTER all dimensions!');
else
    % If all inputs are provided, calculate areas for all shapes
    area_rectangle = W * L;
    area_circle = pi * R^2;
    area_square = S^2;
    
    % Display the results
    fprintf('The area of the rectangle is: %.2f square units\n', area_rectangle);
    fprintf('The area of the circle is: %.2f square units\n', area_circle);
    fprintf('The area of the square is: %.2f square units\n', area_square);
end

% Handle cases when specific dimensions are provided
if ~isempty(W) && ~isempty(L) && (isempty(R) || isempty(S))
    % Case 1: If width (W) and length (L) are provided, calculate the area of the rectangle
    area_rectangle = W * L;
    fprintf('The area of the rectangle is: %.2f square units\n', area_rectangle);
elseif ~isempty(R) && (isempty(S) || isempty(W) || isempty(L))
    % Case 2: If radius (R) and side length (S) are provided, calculate the areas of the circle and square
    area_circle = pi * R^2;
    fprintf('The area of the circle is: %.2f square units\n', area_circle);
elseif ~isempty(S) && (isempty(R) || isempty(W) || isempty(L))
    % Case 2: If radius (R) and side length (S) are provided, calculate the areas of the circle and square
    area_square = S^2;
    fprintf('The area of the square is: %.2f square units\n', area_square);    
end
