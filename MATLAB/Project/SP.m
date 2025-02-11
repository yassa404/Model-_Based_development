%yassa mazhar
bc=[0,0,0];
[t,y]=ode45(@pendulum,[0,15],[1,0]);
X=sin(y(:,1));
Y=-cos(y(:,1));
f=figure(1);
 while(ishandle(f))
       for i=1:length(X)
        rectangle('position',[-0.5,0,1,0.2],'facecolor',bc);
        a1=plot([0 X(i)],[0 Y(i)],'B');
        xlim([-1,1]);
        ylim([-2,1]);
        hold on
        a2=scatter(X(i),Y(i) ,'o','r','filled');
        drawnow
        delete(a1);
        delete(a2);
       
 end
    a1;
    a2;
    close(f);
 end

function [thedot]= pendulum(t,x)
%theta2dot=-g/l*sin(theta) -b*thetadot/ml^2 +1/ml^2
theta=x(1);
thetadot=x(2);
b=0.3;
l=1;
theta2dot=(-9.08*sin(theta))/l-(b*thetadot)/l^2;
thedot(1)=thetadot;
thedot(2)=theta2dot;
thedot=thedot';
end
