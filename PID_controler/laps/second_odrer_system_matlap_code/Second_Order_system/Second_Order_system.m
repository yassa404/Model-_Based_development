%over dumped
wn=0.5;
zeta=1.2;

num=[0 wn^2];
den=[1 2*zeta*wn wn^2];

G= tf(num,den);   
step(G)
hold on 


%critical dumped
wn=0.5;
zeta=1;

num=[0 wn^2];
den=[1 2*zeta*wn wn^2];

G= tf(num,den);  
step(G)
hold on 


%under dumped
wn=0.5;
zeta=0.3;

num=[0 wn^2];
den=[1 2*zeta*wn wn^2];

G= tf(num,den);  
step(G)
legend('over dumped','critical dumped','under dumped')
hold on 


%under dumped
%   wn=0.5;
%   zeta=0;
%   num=[0 wn^2];
%   den=[1 2*zeta*wn wn^2];
%   
%   G= tf(num,den);  
%   step(G)
%   legend('over dumped','critical dumped','under dumped','unstable')
%   hold on
