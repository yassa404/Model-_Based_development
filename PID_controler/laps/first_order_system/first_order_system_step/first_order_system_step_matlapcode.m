 %gain of system =1
 k=1;
 res=10e3;
 c=1e-3;

 T=res*c;
 %transfare function
num=[0 k];
den=[T 1];

g=tf(num,den); 
hold on
step(g)
