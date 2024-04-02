k=1;
r=10e3;
c=1e-7;
T=r*c;

num=[0 k];
den=[T 1];
g= tf(num,den);
 
t=0:0.1:10;
u_rump=0:0.2:20;
[y_rump,t_rump]=lsim(g,u_rump,t);
plot(t_rump,y_rump)

