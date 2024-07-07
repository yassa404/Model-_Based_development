clear

% Define time vector
t=linspace(0,10,101)';

% Define model name
modelname='Accelerator_Pedal_Position_Sensor';

% Define input signals
AcceleratorPedalPosition1= linspace(0, 1, 101)';
AcceleratorPedalPosition2= linspace(1, 0, 101)';

% Run the simulation
outt=sim(modelname);

% Plot the input and output data
figure
plot(t,AcceleratorPedalPosition1,'b',outt.tout,outt.yout{1}.Values.Data,'r',outt.tout,outt.yout{2}.Values.Data,'g');
xlabel('time')
legend('Accelerator Pedal Position' , 'Sensor Output [Volts]')