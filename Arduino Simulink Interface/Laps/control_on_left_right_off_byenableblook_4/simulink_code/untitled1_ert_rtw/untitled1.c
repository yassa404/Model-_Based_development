/*
 * File: untitled1.c
 *
 * Code generated for Simulink model 'untitled1'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Fri Mar 22 01:15:43 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled1.h"
#include "rtwtypes.h"
#include "untitled1_private.h"
#include <math.h>

/* Block signals (default storage) */
B_untitled1_T untitled1_B;

/* Block states (default storage) */
DW_untitled1_T untitled1_DW;

/* Real-time model */
static RT_MODEL_untitled1_T untitled1_M_;
RT_MODEL_untitled1_T *const untitled1_M = &untitled1_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void untitled1_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(untitled1_M, 1));
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
  (untitled1_M->Timing.TaskCounters.TID[1])++;
  if ((untitled1_M->Timing.TaskCounters.TID[1]) > 99) {/* Sample time: [0.1s, 0.0s] */
    untitled1_M->Timing.TaskCounters.TID[1] = 0;
  }
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
void untitled1_step0(void)             /* Sample time: [0.001s, 0.0s] */
{
  {                                    /* Sample time: [0.001s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model step function for TID1 */
void untitled1_step1(void)             /* Sample time: [0.1s, 0.0s] */
{
  real_T tmp;
  uint8_T tmp_0;
  boolean_T b_value;
  boolean_T b_value_0;

  /* MATLABSystem: '<Root>/Digital Input' */
  if (untitled1_DW.obj_h.SampleTime != untitled1_P.DigitalInput_SampleTime) {
    untitled1_DW.obj_h.SampleTime = untitled1_P.DigitalInput_SampleTime;
  }

  b_value = readDigitalPin(8);

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S2>/Enable'
   */
  if (b_value) {
    /* Merge: '<Root>/Merge' incorporates:
     *  Constant: '<S2>/Constant'
     *  SignalConversion generated from: '<S2>/One'
     */
    untitled1_B.Merge = untitled1_P.Constant_Value;

    /* Merge: '<Root>/Merge1' incorporates:
     *  Constant: '<S2>/Constant1'
     *  SignalConversion generated from: '<S2>/zero'
     */
    untitled1_B.Merge1 = untitled1_P.Constant1_Value;
  }

  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem' */

  /* MATLABSystem: '<Root>/Digital Input1' */
  if (untitled1_DW.obj.SampleTime != untitled1_P.DigitalInput1_SampleTime) {
    untitled1_DW.obj.SampleTime = untitled1_P.DigitalInput1_SampleTime;
  }

  b_value_0 = readDigitalPin(2);

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem2' incorporates:
   *  EnablePort: '<S4>/Enable'
   */
  if (b_value_0) {
    /* Merge: '<Root>/Merge' incorporates:
     *  Constant: '<S4>/Constant'
     *  SignalConversion generated from: '<S4>/zero'
     */
    untitled1_B.Merge = untitled1_P.Constant_Value_e;

    /* Merge: '<Root>/Merge1' incorporates:
     *  Constant: '<S4>/Constant1'
     *  SignalConversion generated from: '<S4>/one'
     */
    untitled1_B.Merge1 = untitled1_P.Constant1_Value_k;
  }

  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem2' */

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem1' incorporates:
   *  EnablePort: '<S3>/Enable'
   */
  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<S1>/Constant'
   *  MATLABSystem: '<Root>/Digital Input'
   *  MATLABSystem: '<Root>/Digital Input1'
   *  Sum: '<Root>/Add'
   */
  if ((int16_T)((uint16_T)b_value + b_value_0) ==
      untitled1_P.CompareToConstant_const) {
    /* Merge: '<Root>/Merge' incorporates:
     *  Constant: '<S3>/Constant'
     *  SignalConversion generated from: '<S3>/zero0'
     */
    untitled1_B.Merge = untitled1_P.Constant_Value_l;

    /* Merge: '<Root>/Merge1' incorporates:
     *  Constant: '<S3>/Constant1'
     *  SignalConversion generated from: '<S3>/zero'
     */
    untitled1_B.Merge1 = untitled1_P.Constant1_Value_l;
  }

  /* End of RelationalOperator: '<S1>/Compare' */
  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem1' */

  /* MATLABSystem: '<Root>/Digital Output' */
  tmp = rt_roundd_snf(untitled1_B.Merge);
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
  tmp = rt_roundd_snf(untitled1_B.Merge1);
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
void untitled1_initialize(void)
{
  /* SystemInitialize for Merge: '<Root>/Merge' */
  untitled1_B.Merge = untitled1_P.Merge_InitialOutput;

  /* SystemInitialize for Merge: '<Root>/Merge1' */
  untitled1_B.Merge1 = untitled1_P.Merge1_InitialOutput;

  /* Start for MATLABSystem: '<Root>/Digital Input' */
  untitled1_DW.obj_h.matlabCodegenIsDeleted = false;
  untitled1_DW.obj_h.SampleTime = untitled1_P.DigitalInput_SampleTime;
  untitled1_DW.obj_h.isInitialized = 1L;
  digitalIOSetup(8, 0);
  untitled1_DW.obj_h.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Input1' */
  untitled1_DW.obj.matlabCodegenIsDeleted = false;
  untitled1_DW.obj.SampleTime = untitled1_P.DigitalInput1_SampleTime;
  untitled1_DW.obj.isInitialized = 1L;
  digitalIOSetup(2, 0);
  untitled1_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output' */
  untitled1_DW.obj_j.matlabCodegenIsDeleted = false;
  untitled1_DW.obj_j.isInitialized = 1L;
  digitalIOSetup(9, 1);
  untitled1_DW.obj_j.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output1' */
  untitled1_DW.obj_b.matlabCodegenIsDeleted = false;
  untitled1_DW.obj_b.isInitialized = 1L;
  digitalIOSetup(4, 1);
  untitled1_DW.obj_b.isSetupComplete = true;
}

/* Model terminate function */
void untitled1_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Input' */
  if (!untitled1_DW.obj_h.matlabCodegenIsDeleted) {
    untitled1_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Input' */

  /* Terminate for MATLABSystem: '<Root>/Digital Input1' */
  if (!untitled1_DW.obj.matlabCodegenIsDeleted) {
    untitled1_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Input1' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output' */
  if (!untitled1_DW.obj_j.matlabCodegenIsDeleted) {
    untitled1_DW.obj_j.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output1' */
  if (!untitled1_DW.obj_b.matlabCodegenIsDeleted) {
    untitled1_DW.obj_b.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
