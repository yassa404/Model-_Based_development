% zeta_values
zeta_values=[0 0.1 0.3 0.5 0.9 1];
time_sim =0:0.01:20;
step_input=ones(size(time_sim));

% plot
figure;
for i=1:length(zeta_values)

  [y,T]=step(dumpingeffect(zeta_values(i)),time_sim);
  subplot(length(zeta_values),1,i);
  plot(T,step_input,'b','LineWidth',1.5);
  hold on
  plot(T,y,'r','LineWidth',1.5);
  hold off
  xlabel('Time');
  ylabel('Sys Responce');
  title(['Damping Ratio (\zeta)=' ,num2str(zeta_values(i))]); 
  legend( 'Step','System Res') ;

end    
sgtitle('Effect of Damping Ratio on System Response (Constant Natural Frequency)')

% Second_Order_system.
function G=dumpingeffect(zeta)
wn=1;
num=[0 wn^2];
den=[1 2*zeta*wn wn^2];

G= tf(num,den);  
end
