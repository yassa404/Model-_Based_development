/*
 * File: PID0.h
 *
 * Code generated for Simulink model 'PID0'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Fri Jul 19 09:57:01 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PID0_h_
#define RTW_HEADER_PID0_h_
#ifndef PID0_COMMON_INCLUDES_
#define PID0_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* PID0_COMMON_INCLUDES_ */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S2>/Unit Delay' */
  real_T UnitDelay_DSTATE_m;           /* '<S3>/Unit Delay' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T setpoint;                     /* '<Root>/setpoint' */
  real_T ActualValue;                  /* '<Root>/ActualValue' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T ctrlsignal;                   /* '<Root>/ctrlsignal' */
} ExtY;

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void PID0_initialize(void);
extern void PID0_step(void);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S3>/Gain' : Eliminated nontunable gain of 1
 * Block '<S1>/KI' : Eliminated nontunable gain of 1
 * Block '<S1>/KP' : Eliminated nontunable gain of 1
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('PID_ctrl/PID')    - opens subsystem PID_ctrl/PID
 * hilite_system('PID_ctrl/PID/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'PID_ctrl'
 * '<S1>'   : 'PID_ctrl/PID'
 * '<S2>'   : 'PID_ctrl/PID/Derivative'
 * '<S3>'   : 'PID_ctrl/PID/Integrator'
 */
#endif                                 /* RTW_HEADER_PID0_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
