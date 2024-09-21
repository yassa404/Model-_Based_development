clear;
clc;

% Define the range of theta and the step size
% linspace generates 2000 values from 0 to pi (inclusive)
theta = linspace(0, pi, 2000);

% Initialize the cosine value (g_theta) and step counter
g_theta = 0;  % Initialize as a scalar to store cos(theta)
i = 1;  % Step index starts at 1

% Pre-allocate an array to store g(theta) values for plotting later
g_theta1 = zeros(2000, 1);  % Initialize a zero array with 2000 rows

% Begin the while loop
% Loop continues as long as g_theta is not approximately 0.999 and
% index i does not exceed the length of the theta array
while g_theta ~= 0.999 && i <= length(theta)
    
    % Compute the cosine of the current theta value
    g_theta = cos(theta(i));
    
    % Store the computed g_theta value in the pre-allocated array
    g_theta1(i) = g_theta;
    
    % Update the number of steps taken (i will be the step count)
    steps = i;
    
    % Increment the step counter
    i = i + 1;
end

% Display the number of steps taken before reaching the desired value
disp(['Number of steps: ', num2str(i-1)]);
disp(['Final g(theta) value: ', num2str(g_theta)]);

% Plot the results
figure;
plot(theta, g_theta1, 'b', 'LineWidth', 2);  % Plot cos(theta) values in blue
hold on;
yline(0.99999, 'r--', 'LineWidth', 2);  % Add a horizontal line for g(theta) ≈ 0.99999
legend('cos(\theta)', 'g(\theta) \approx 0.99999');
xlabel('\theta (radians)');  % Label for x-axis (theta in radians)
ylabel('g(\theta)');  % Label for y-axis (cosine values)
title('Cosine Function Approximation');  % Title of the plot
grid on;  % Turn on the grid for better readability
