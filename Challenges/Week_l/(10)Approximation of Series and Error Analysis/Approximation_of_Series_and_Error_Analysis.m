% True value of the series
true_value = pi^2 / 8;

% Initialize variables
n = 101;  % number of terms
approx_value = 0;  % variable to store the series approximation
error_values = zeros(1, n);  % array to store error at each iteration

% For loop to compute the series
for i = 0:n-1
    approx_value = approx_value + 1/(2*i+1)^2;
    % Calculate error at each iteration
    error_values(i+1) = abs(true_value - approx_value);
end

% Plotting the error over iterations
figure;
plot(0:n-1, error_values, 'LineWidth', 2);
xlabel('Iteration');
ylabel('Error');
title('Error in Series Approximation over Iterations');
grid on;
