/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sun Mar 17 17:23:48 2024
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
  boolean_T b_value;

  /* MATLABSystem: '<Root>/Digital Input' */
  if (untitled_DW.obj.SampleTime != untitled_P.DigitalInput_SampleTime) {
    untitled_DW.obj.SampleTime = untitled_P.DigitalInput_SampleTime;
  }

  b_value = readDigitalPin(2);

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  if (b_value) {
    if (!untitled_DW.EnabledSubsystem_MODE) {
      /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
      untitled_DW.UnitDelay_DSTATE = untitled_P.UnitDelay_InitialCondition;
      untitled_DW.EnabledSubsystem_MODE = true;
    }

    /* Sum: '<S1>/Add' incorporates:
     *  Constant: '<S1>/Constant'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    untitled_DW.UnitDelay_DSTATE += untitled_P.Constant_Value;
  } else {
    untitled_DW.EnabledSubsystem_MODE = false;
  }

  /* End of MATLABSystem: '<Root>/Digital Input' */
  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem' */

  /* If: '<Root>/If' incorporates:
   *  UnitDelay: '<S1>/Unit Delay'
   */
  if (untitled_DW.UnitDelay_DSTATE == 10.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Logic: '<S2>/NOT' incorporates:
     *  UnitDelay: '<S2>/Unit Delay'
     */
    untitled_DW.UnitDelay_DSTATE_d = !untitled_DW.UnitDelay_DSTATE_d;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  }

  /* End of If: '<Root>/If' */

  /* MATLABSystem: '<Root>/Digital Output' incorporates:
   *  UnitDelay: '<S2>/Unit Delay'
   */
  writeDigitalPin(5, (uint8_T)untitled_DW.UnitDelay_DSTATE_d);
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* SystemInitialize for Enabled SubSystem: '<Root>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S1>/Out1' incorporates:
   *  Sum: '<S1>/Add'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  untitled_DW.UnitDelay_DSTATE = untitled_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<Root>/Enabled Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem' */
  /* SystemInitialize for Outport: '<S2>/Out1' incorporates:
   *  Logic: '<S2>/NOT'
   *  UnitDelay: '<S2>/Unit Delay'
   */
  untitled_DW.UnitDelay_DSTATE_d = untitled_P.Out1_Y0_f;

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem' */

  /* Start for MATLABSystem: '<Root>/Digital Input' */
  untitled_DW.obj.matlabCodegenIsDeleted = false;
  untitled_DW.obj.SampleTime = untitled_P.DigitalInput_SampleTime;
  untitled_DW.obj.isInitialized = 1L;
  digitalIOSetup(2, 0);
  untitled_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output' */
  untitled_DW.obj_p.matlabCodegenIsDeleted = false;
  untitled_DW.obj_p.isInitialized = 1L;
  digitalIOSetup(5, 1);
  untitled_DW.obj_p.isSetupComplete = true;
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Input' */
  if (!untitled_DW.obj.matlabCodegenIsDeleted) {
    untitled_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Input' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output' */
  if (!untitled_DW.obj_p.matlabCodegenIsDeleted) {
    untitled_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
