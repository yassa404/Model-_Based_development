clear
clc

modelname='Accelerator_Pedal_Position_Sensor';
% Define time vector 
t=linspace(0,10,101)';
% Define input signals
AcceleratorPedalPosition1=linspace(0,1,101)';
AcceleratorPedalPosition2=linspace(1,0,101)';

% Run the Accelerator_Pedal_Position_Sensor simulation
outt=sim(modelname);


% Plot the first simulation results
figure
plot(t,AcceleratorPedalPosition1,'b',outt.tout,outt.yout{1}.Values.Data,'r',outt.tout,outt.yout{2}.Values.Data,'g');
xlabel('time')
legend('Accelerator Pedal Position' , 'Sensor(1) Output [Volts]','Sensor(2) Output [Volts]')

%%
% Extract sensor data
%APP_vSensor1
u3=outt.yout{1}.Values.Data;
%APP_vSensor2
u4=outt.yout{2}.Values.Data;
tt=linspace(0,10,length(u3))';

% Run the Accelerator_Pedal_Position_Sensor_APP_Coherency simulation
APP_CoherencyTest=sim('Accelerator_Pedal_Position_Sensor_APP_Coherency');
% Plot the second simulation results
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
