b=10;
k=400;
m=3;
x0=1;
mdl=gcs ;
massvalue=1:2:11;  
for i=1:numel(massvalue)
    m=massvalue(i);
    result=sim(mdl);
    plot(result.logsout.get('x').Values);
    disp(['simulation:',num2str(i),' is finshed'])
    legendlabel{i}="m= " +num2str(m);
    hold on 
    legend(legendlabel);
end    