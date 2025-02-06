clc; clear; close all;

g = 9.81;
l = 1;
b = 0.3;
m = 1;
u = 0;

dt = 0.02;
T = 10;
t = 0:dt:T;

theta0 = pi/4;
thetadot0 = 0;
y = [theta0; thetadot0];

Y = zeros(2, length(t));
Y(:,1) = y;

for i = 1:length(t)-1
    k1 = pendulum(t(i), y, g, l, b, m, u);
    k2 = pendulum(t(i) + dt/2, y + dt/2 * k1, g, l, b, m, u);
    k3 = pendulum(t(i) + dt/2, y + dt/2 * k2, g, l, b, m, u);
    k4 = pendulum(t(i) + dt, y + dt * k3, g, l, b, m, u);
    y = y + (dt/6) * (k1 + 2*k2 + 2*k3 + k4);
    Y(:, i+1) = y;
    
    if abs(y(2)) < 1e-3
        Y = Y(:, 1:i+1);
        t = t(1:i+1);
        break;
    end
end

theta = Y(1, :);
thetadot = Y(2, :);
X = sin(theta);
Y = -cos(theta);

figure;
for i = 1:length(X)
    clf;
    hold on;
    plot([0 X(i)], [0 Y(i)], 'b', 'LineWidth', 2);
    scatter(X(i), Y(i), 80, 'r', 'filled');
    xlim([-1.2, 1.2]);
    ylim([-1.2, 0.2]);
    grid on;
    xlabel('X Position');
    ylabel('Y Position');
    title(sprintf('Time: %.2f sec', t(i)));
    pause(0.001);
end

figure;
subplot(2,1,1);
plot(t, theta, 'r', 'LineWidth', 2);
xlabel('Time (s)');
ylabel('\theta (rad)');
title('Theta vs Time');
grid on;

subplot(2,1,2);
plot(t, thetadot, 'b', 'LineWidth', 2);
xlabel('Time (s)');
ylabel('\thetȧ (rad/s)');
title('Theta-dot vs Time');
grid on;

function dydt = pendulum(~, y, g, l, b, m, u)
    theta = y(1);
    thetadot = y(2);
    thetadot2 = (-g/l * sin(theta) - b * thetadot / (m*l^2) + u / (m*l^2));
    dydt = [thetadot; thetadot2];
end
