% zeta_values
frequance_vales=[1 1 1 2 2 2 4 4 4 4 4 4 ];
zeta_values=[0.1 0.5 0.9 0.1 0.5 0.9 0.1 0.5 0.9 1 1.5 0];
time_sim =0:0.01:10;
step_input=ones(size(time_sim));

% plot
figure;
for i=1:length(zeta_values)

  [y,T]=step(dumpingeffect(zeta_values(i),frequance_vales(i)),time_sim);
  subplot(4,3,i);
  plot(T,step_input,'b','LineWidth',1.5);
  hold on
  plot(T,y,'r','LineWidth',1.5);
  hold off
  xlabel('Time');
  ylabel('Sys Responce');
%statment
   if  zeta_values(i)==0
       system='unstable';
       poles='real';
   elseif zeta_values(i)==1
       system='critical dump';
       poles='s1==s2  real';
   elseif zeta_values(i)<1
       system='under dump';
       poles='s1~=s2  complex';
   elseif zeta_values(i)>1
       system='over dump';
       poles='s1~=s2  real';

  end    
  title(['(\omega_n)=' ,num2str(frequance_vales(i)),'(\zeta)=' ,num2str(zeta_values(i)),newline,system,newline,poles]); 
  legend( 'Step','System Res') ;

end    
sgtitle('Effect of Damping Ratio and Natural Frequency on System Response ')

% Second_Order_system.
function G=dumpingeffect(zeta,wn)
num=[0 wn^2];
den=[1 2*zeta*wn wn^2];

G= tf(num,den);  
end
