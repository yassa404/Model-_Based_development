/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Mon Mar 18 18:35:33 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "rtwtypes.h"
#include "untitled_private.h"
#include <math.h>

/* Block signals (default storage) */
B_untitled_T untitled_B;

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* Real-time model */
static RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void untitled_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(untitled_M, 1));
}

/*
 *         This function updates active task flag for each subrate
 *         and rate transition flags for tasks that exchange data.
 *         The function assumes rate-monotonic multitasking scheduler.
 *         The function must be called at model base rate so that
 *         the generated code self-manages all its subrates and rate
 *         transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (untitled_M->Timing.TaskCounters.TID[1])++;
  if ((untitled_M->Timing.TaskCounters.TID[1]) > 99) {/* Sample time: [0.1s, 0.0s] */
    untitled_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * System initialize for enable system:
 *    '<Root>/Enabled Subsystem3'
 *    '<Root>/Enabled Subsystem4'
 */
void unti_EnabledSubsystem3_Init(real_T *rty_Out1,
  DW_EnabledSubsystem3_untitled_T *localDW, P_EnabledSubsystem3_untitled_T
  *localP)
{
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  localDW->UnitDelay_DSTATE = localP->UnitDelay_InitialCondition;

  /* SystemInitialize for Outport: '<S1>/Out1' */
  *rty_Out1 = localP->Out1_Y0;
}

/*
 * System reset for enable system:
 *    '<Root>/Enabled Subsystem3'
 *    '<Root>/Enabled Subsystem4'
 */
void unt_EnabledSubsystem3_Reset(DW_EnabledSubsystem3_untitled_T *localDW,
  P_EnabledSubsystem3_untitled_T *localP)
{
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  localDW->UnitDelay_DSTATE = localP->UnitDelay_InitialCondition;
}

/*
 * Disable for enable system:
 *    '<Root>/Enabled Subsystem3'
 *    '<Root>/Enabled Subsystem4'
 */
void u_EnabledSubsystem3_Disable(DW_EnabledSubsystem3_untitled_T *localDW)
{
  localDW->EnabledSubsystem3_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<Root>/Enabled Subsystem3'
 *    '<Root>/Enabled Subsystem4'
 */
void untitled_EnabledSubsystem3(boolean_T rtu_Enable, real_T *rty_Out1,
  DW_EnabledSubsystem3_untitled_T *localDW, P_EnabledSubsystem3_untitled_T
  *localP)
{
  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem3' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->EnabledSubsystem3_MODE) {
      unt_EnabledSubsystem3_Reset(localDW, localP);
      localDW->EnabledSubsystem3_MODE = true;
    }

    /* Sum: '<S1>/Add' incorporates:
     *  Constant: '<S1>/Constant'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    *rty_Out1 = localP->Constant_Value + localDW->UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S1>/Unit Delay' */
    localDW->UnitDelay_DSTATE = *rty_Out1;
  } else if (localDW->EnabledSubsystem3_MODE) {
    u_EnabledSubsystem3_Disable(localDW);
  }

  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem3' */
}

/*
 * Output and update for action system:
 *    '<Root>/If Action Subsystem1'
 *    '<Root>/If Action Subsystem7'
 */
void untitled_IfActionSubsystem1(real_T *rty_One,
  P_IfActionSubsystem1_untitled_T *localP)
{
  /* SignalConversion generated from: '<S3>/One' incorporates:
   *  Constant: '<S3>/Constant'
   */
  *rty_One = localP->Constant_Value;
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function for TID0 */
void untitled_step0(void)              /* Sample time: [0.001s, 0.0s] */
{
  {                                    /* Sample time: [0.001s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model step function for TID1 */
void untitled_step1(void)              /* Sample time: [0.1s, 0.0s] */
{
  real_T tmp;
  uint8_T tmp_0;
  boolean_T b_value;

  /* MATLABSystem: '<Root>/Digital Input' */
  if (untitled_DW.obj_o.SampleTime != untitled_P.DigitalInput_SampleTime) {
    untitled_DW.obj_o.SampleTime = untitled_P.DigitalInput_SampleTime;
  }

  b_value = readDigitalPin(8);

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem3' */
  untitled_EnabledSubsystem3(b_value, &untitled_B.Add_o,
    &untitled_DW.EnabledSubsystem3, &untitled_P.EnabledSubsystem3);

  /* End of MATLABSystem: '<Root>/Digital Input' */
  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem3' */

  /* If: '<Root>/If1' */
  if (untitled_B.Add_o == 10.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    untitled_IfActionSubsystem1(&untitled_B.Merge2,
      &untitled_P.IfActionSubsystem1);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  } else if (untitled_B.Add_o == 20.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem7' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    untitled_IfActionSubsystem1(&untitled_B.Merge2,
      &untitled_P.IfActionSubsystem7);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem7' */
  }

  /* End of If: '<Root>/If1' */

  /* MATLABSystem: '<Root>/Digital Input1' */
  if (untitled_DW.obj.SampleTime != untitled_P.DigitalInput1_SampleTime) {
    untitled_DW.obj.SampleTime = untitled_P.DigitalInput1_SampleTime;
  }

  b_value = readDigitalPin(2);

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem4' */
  untitled_EnabledSubsystem3(b_value, &untitled_B.Add,
    &untitled_DW.EnabledSubsystem4, &untitled_P.EnabledSubsystem4);

  /* End of MATLABSystem: '<Root>/Digital Input1' */
  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem4' */

  /* If: '<Root>/If2' */
  if (untitled_B.Add == 10.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem8' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* Merge: '<Root>/Merge2' incorporates:
     *  Constant: '<S8>/Constant'
     *  SignalConversion generated from: '<S8>/three'
     */
    untitled_B.Merge2 = untitled_P.Constant_Value;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem8' */
  } else if (untitled_B.Add == 20.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem9' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* Merge: '<Root>/Merge2' incorporates:
     *  Constant: '<S9>/Constant'
     *  SignalConversion generated from: '<S9>/zeroo'
     */
    untitled_B.Merge2 = untitled_P.Constant_Value_k;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem9' */
  }

  /* End of If: '<Root>/If2' */

  /* If: '<Root>/If4' */
  if (untitled_B.Merge2 == 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* Merge: '<Root>/Merge' incorporates:
     *  Constant: '<S5>/Constant3'
     *  SignalConversion generated from: '<S5>/One1'
     */
    untitled_B.Merge = untitled_P.Constant3_Value;

    /* Merge: '<Root>/Merge1' incorporates:
     *  Constant: '<S5>/Constant4'
     *  SignalConversion generated from: '<S5>/zero1'
     */
    untitled_B.Merge1 = untitled_P.Constant4_Value;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem4' */
  } else if (untitled_B.Merge2 == 1.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Merge: '<Root>/Merge' incorporates:
     *  Constant: '<S4>/Constant5'
     *  SignalConversion generated from: '<S4>/One2'
     */
    untitled_B.Merge = untitled_P.Constant5_Value;

    /* Merge: '<Root>/Merge1' incorporates:
     *  Constant: '<S4>/Constant6'
     *  SignalConversion generated from: '<S4>/zero2'
     */
    untitled_B.Merge1 = untitled_P.Constant6_Value;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem3' */
  } else if (untitled_B.Merge2 == 3.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem5' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* Merge: '<Root>/Merge1' incorporates:
     *  Constant: '<S6>/Constant1'
     *  SignalConversion generated from: '<S6>/One'
     */
    untitled_B.Merge1 = untitled_P.Constant1_Value;

    /* Merge: '<Root>/Merge' incorporates:
     *  Constant: '<S6>/Constant2'
     *  SignalConversion generated from: '<S6>/zero'
     */
    untitled_B.Merge = untitled_P.Constant2_Value;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem5' */
  }

  /* End of If: '<Root>/If4' */

  /* MATLABSystem: '<Root>/Digital Output' */
  tmp = rt_roundd_snf(untitled_B.Merge);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint8_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(9, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output' */

  /* MATLABSystem: '<Root>/Digital Output1' */
  tmp = rt_roundd_snf(untitled_B.Merge1);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint8_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(4, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output1' */
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* SystemInitialize for Enabled SubSystem: '<Root>/Enabled Subsystem3' */
  unti_EnabledSubsystem3_Init(&untitled_B.Add_o, &untitled_DW.EnabledSubsystem3,
    &untitled_P.EnabledSubsystem3);

  /* End of SystemInitialize for SubSystem: '<Root>/Enabled Subsystem3' */

  /* SystemInitialize for Enabled SubSystem: '<Root>/Enabled Subsystem4' */
  unti_EnabledSubsystem3_Init(&untitled_B.Add, &untitled_DW.EnabledSubsystem4,
    &untitled_P.EnabledSubsystem4);

  /* End of SystemInitialize for SubSystem: '<Root>/Enabled Subsystem4' */

  /* SystemInitialize for Merge: '<Root>/Merge' */
  untitled_B.Merge = untitled_P.Merge_InitialOutput;

  /* SystemInitialize for Merge: '<Root>/Merge1' */
  untitled_B.Merge1 = untitled_P.Merge1_InitialOutput;

  /* SystemInitialize for Merge: '<Root>/Merge2' */
  untitled_B.Merge2 = untitled_P.Merge2_InitialOutput;

  /* Start for MATLABSystem: '<Root>/Digital Input' */
  untitled_DW.obj_o.matlabCodegenIsDeleted = false;
  untitled_DW.obj_o.SampleTime = untitled_P.DigitalInput_SampleTime;
  untitled_DW.obj_o.isInitialized = 1L;
  digitalIOSetup(8, 0);
  untitled_DW.obj_o.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Input1' */
  untitled_DW.obj.matlabCodegenIsDeleted = false;
  untitled_DW.obj.SampleTime = untitled_P.DigitalInput1_SampleTime;
  untitled_DW.obj.isInitialized = 1L;
  digitalIOSetup(2, 0);
  untitled_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output' */
  untitled_DW.obj_c.matlabCodegenIsDeleted = false;
  untitled_DW.obj_c.isInitialized = 1L;
  digitalIOSetup(9, 1);
  untitled_DW.obj_c.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output1' */
  untitled_DW.obj_k.matlabCodegenIsDeleted = false;
  untitled_DW.obj_k.isInitialized = 1L;
  digitalIOSetup(4, 1);
  untitled_DW.obj_k.isSetupComplete = true;
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Input' */
  if (!untitled_DW.obj_o.matlabCodegenIsDeleted) {
    untitled_DW.obj_o.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Input' */

  /* Terminate for MATLABSystem: '<Root>/Digital Input1' */
  if (!untitled_DW.obj.matlabCodegenIsDeleted) {
    untitled_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Input1' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output' */
  if (!untitled_DW.obj_c.matlabCodegenIsDeleted) {
    untitled_DW.obj_c.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output1' */
  if (!untitled_DW.obj_k.matlabCodegenIsDeleted) {
    untitled_DW.obj_k.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
