% zeta_values
frequance_vales=[1 2 3 4 5];
time_sim =0:0.01:20;
step_input=ones(size(time_sim));

% plot
figure;
for i=1:length(frequance_vales)

  [y,T]=step(frequanceeffect(frequance_vales(i)),time_sim);
  subplot(length(frequance_vales),1,i);
  plot(T,step_input,'b','LineWidth',1.5);
  hold on
  plot(T,y,'r','LineWidth',1.5);
  hold off
  xlabel('Time');
  ylabel('Sys Responce');
  title(['Frequency on System (\omega_n)=' ,num2str(frequance_vales(i))]); 
  legend( 'Step','System Res') ;

end

sgtitle('Effect of Natural Frequency on System Response (Constant Damping Ratio)')

% Second_Order_system.
function G=frequanceeffect(wn)
zeta=1;
num=[0 wn^2];
den=[1 2*zeta*wn wn^2];

G= tf(num,den);  
end
