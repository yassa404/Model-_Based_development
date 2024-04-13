num=1;
den=[1 1];
sys=tf(num,den);
t=0:0.01:40;
Ki_value=[0.001,0.01,0.1,1,10,50,100];

stepp=ones(size(t));
plot(t,stepp,'LineWidth',1.5)
hold on

open_loop_response=step(sys,t);
plot(t,open_loop_response,'k--','LineWidth',1.5)
hold on

close_loop_response_with_out_controller=step(sys/(sys+1),t); % g(s)/1+g(s)*h(s)
plot(t,close_loop_response_with_out_controller,'r:','LineWidth',1.5)

for i=1:length(Ki_value)
    ki=Ki_value(i);
    i_contraller=tf([ki],[1,0]);
    sysWithContraller=series(i_contraller,sys);
    close_loop_response_with_out_Icontroller=feedback(sysWithContraller,1);
    [SYr,~]=step(close_loop_response_with_out_Icontroller,t);
    %[SY,~] TO CANSLE SEC RETERN VALUE
    % OR THIS WAY
    %open_loop_response=step(sys,t);
    plot(t,SYr,'LineWidth',1.5);
    hold on
end    
title('effect of kI on system response (1st order system) ');
xlabel('T');
ylabel('system response');
legend(['step input';'open loop';'close_loop';cellstr(num2str(Ki_value'))],'location','best') ;
