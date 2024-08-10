% Clear workspace
clear

% Define time vector for the first simulation
tt = linspace(0, 10, 101)';

% Define input signals
u3=linspace(0.5,4.5,101)';
u4=linspace(4.5,0.5,101)';
% Run the first simulation
APP_CoherencyTest=sim('Accelerator_Pedal_Position_Sensor_APP_Coherency');

figure
subplot(3,1,1)
plot(APP_CoherencyTest.tout,APP_CoherencyTest.yout{1}.Values.Data,'r')
title('APP_ b Sensor 1 Failure 1')
hold on;
subplot(3,1,2)
plot(APP_CoherencyTest.tout,APP_CoherencyTest.yout{2}.Values.Data,'g')
title('APP_b Sensor 1 Failure 2')
subplot(3,1,3)
plot(APP_CoherencyTest.tout,APP_CoherencyTest.yout{3}.Values.Data,'b');
title('APP_b Coherency Failure')
xlabel('time')
