libname=('PIDContrallerLib');
new_system(libname,'Library')
open_system(libname)


add_block('built-in/subsystem',[libname '/PID_controller'])

add_block('simulink/Sources/In1',[libname '/PID_controller/Desired_Sig'])
add_block('simulink/Sources/In1',[libname '/PID_controller/Actual_Sig'])
add_block('simulink/Sinks/Out1',[libname '/PID_controller/ctrl_action'])

add_block('simulink/Commonly Used Blocks/Sum',[libname '/PID_controller/sum'],'Inputs', '+-')

add_block('simulink/Commonly Used Blocks/Gain',[libname '/PID_controller/P_Contraller_gain'],'Gain','K_P')
add_block('simulink/Commonly Used Blocks/Gain',[libname '/PID_controller/I_Contraller_gain'],'Gain','K_I')
add_block('simulink/Commonly Used Blocks/Gain',[libname '/PID_controller/D_Contraller_gain'],'Gain','K_D')
add_block('simulink/Commonly Used Blocks/Gain',[libname '/PID_controller/Sampletime'],'Gain','Ts')
add_block('simulink/Commonly Used Blocks/Gain',[libname '/PID_controller/Sampletime_Reciprocal'],'Gain','1/Ts')

add_block('simulink/Commonly Used Blocks/Integrator',[libname '/PID_controller/I_Integrator ki'])
add_block('simulink/Commonly Used Blocks/Integrator',[libname '/PID_controller/Integrator'])

add_block('simulink/Math Operations/Add',[libname '/PID_controller/Add'],'Inputs', '-+')
add_block('simulink/Math Operations/Add',[libname '/PID_controller/Add2'],'Inputs', '++')
add_block('simulink/Math Operations/Add',[libname '/PID_controller/Add3'],'Inputs', '+++')



add_line([libname '/PID_controller'],'Desired_Sig/1','sum/1')
add_line([libname '/PID_controller'],'Actual_Sig/1','sum/2')

add_line([libname '/PID_controller'],'sum/1','P_Contraller_gain/1')
add_line([libname '/PID_controller'],'sum/1','I_Integrator ki/1')
add_line([libname '/PID_controller'],'sum/1','Add/2')

add_line([libname '/PID_controller'],'P_Contraller_gain/1','Add3/1')

add_line([libname '/PID_controller'],'I_Integrator ki/1','I_Contraller_gain/1')
add_line([libname '/PID_controller'],'I_Contraller_gain/1','Sampletime/1')
add_line([libname '/PID_controller'],'Sampletime/1','Add2/1')
add_line([libname '/PID_controller'],'Add2/1','Add3/2')
add_line([libname '/PID_controller'],'Add2/1','Integrator/1')
add_line([libname '/PID_controller'],'Integrator/1','Add2/2')


add_line([libname '/PID_controller'],'I_Integrator ki/1','Add/1')
add_line([libname '/PID_controller'],'Add/1','D_Contraller_gain/1')
add_line([libname '/PID_controller'],'D_Contraller_gain/1','Sampletime_Reciprocal/1')
add_line([libname '/PID_controller'],'Sampletime_Reciprocal/1','Add3/3')

add_line([libname '/PID_controller'],'Add3/1','ctrl_action/1')

%'Mask','on','MaskDisplay','disp("k_p")'