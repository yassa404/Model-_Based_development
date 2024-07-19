/*
 * File: PID0.c
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

#include "PID0.h"
#include "rtwtypes.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void PID0_step(void)
{
  real_T rtb_Add_j;
  real_T rtb_Divide;
  real_T rtb_Sum1;
  real_T rtb_kd;

  /* Outputs for Atomic SubSystem: '<Root>/PID' */
  /* Sum: '<S1>/Sum1' incorporates:
   *  Inport: '<Root>/ActualValue'
   *  Inport: '<Root>/setpoint'
   */
  rtb_Sum1 = rtU.setpoint - rtU.ActualValue;

  /* Gain: '<S1>/kd' */
  rtb_kd = 0.1 * rtb_Sum1;

  /* Product: '<S2>/Divide' incorporates:
   *  Constant: '<S2>/Constant'
   *  Sum: '<S2>/Add'
   *  UnitDelay: '<S2>/Unit Delay'
   */
  rtb_Divide = (rtb_kd - rtDW.UnitDelay_DSTATE) / 0.01;

  /* Sum: '<S3>/Add' incorporates:
   *  Gain: '<S3>/TS'
   *  UnitDelay: '<S3>/Unit Delay'
   */
  rtb_Add_j = 0.01 * rtb_Sum1 + rtDW.UnitDelay_DSTATE_m;

  /* Update for UnitDelay: '<S2>/Unit Delay' */
  rtDW.UnitDelay_DSTATE = rtb_kd;

  /* Update for UnitDelay: '<S3>/Unit Delay' */
  rtDW.UnitDelay_DSTATE_m = rtb_Add_j;

  /* Outport: '<Root>/ctrlsignal' incorporates:
   *  Sum: '<S1>/Sum'
   */
  rtY.ctrlsignal = (rtb_Sum1 + rtb_Add_j) + rtb_Divide;

  /* End of Outputs for SubSystem: '<Root>/PID' */
}

/* Model initialize function */
void PID0_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
