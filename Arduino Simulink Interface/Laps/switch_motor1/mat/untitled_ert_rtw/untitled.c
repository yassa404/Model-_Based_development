/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sat Mar 16 21:55:22 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "rtwtypes.h"

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* Real-time model */
static RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Model step function */
void untitled_step(void)
{
  boolean_T tmp;

  /* ManualSwitch: '<Root>/Manual Switch' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   */
  if (untitled_P.ManualSwitch_CurrentSetting == 1) {
    tmp = untitled_P.Constant_Value;
  } else {
    tmp = untitled_P.Constant1_Value;
  }

  /* MATLABSystem: '<Root>/Digital Output' incorporates:
   *  ManualSwitch: '<Root>/Manual Switch'
   */
  writeDigitalPin(9, (uint8_T)tmp);
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Start for MATLABSystem: '<Root>/Digital Output' */
  untitled_DW.obj.matlabCodegenIsDeleted = false;
  untitled_DW.obj.isInitialized = 1L;
  digitalIOSetup(9, 1);
  untitled_DW.obj.isSetupComplete = true;
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Output' */
  if (!untitled_DW.obj.matlabCodegenIsDeleted) {
    untitled_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
