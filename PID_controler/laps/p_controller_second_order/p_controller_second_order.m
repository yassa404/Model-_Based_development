num=1;
den=[1 5 6];
sys=tf(num,den);
t=0:0.01:10;
stepp=ones(size(t));
plot(t,stepp,'LineWidth',1.5)
hold on
Kp_value=[0.001,0.01 0.1,10,50,100];

open_loop_response=step(sys,t);
plot(t,open_loop_response,'k--','LineWidth',1.5)
hold on

close_loop_response_with_out_controller=step(sys/(sys+1),t); % g(s)/1+g(s)*h(s)
plot(t,close_loop_response_with_out_controller,'r:','LineWidth',1.5)

for i=1:length(Kp_value)
    kp=Kp_value(i); 
    system_with_contraller=feedback(kp*sys,1);% kp*g(s)/1+g(s)*h(s
    [SYr,~]=step(system_with_contraller,t);
    %[SY,~] TO CANSLE SEC RETERN VALUE
    % OR THIS WAY
    %open_loop_response=step(sys,t);
    plot(t,SYr,'LineWidth',1.5);
end
 
xlim([0,10]);
ylim([0,1.8]);
title('effect of kp on system response (2st order system) ');
xlabel('T');
ylabel('system response');
legend(['step input';'open loop';'close_loop';cellstr(num2str(Kp_value'))],'location','best') ;
