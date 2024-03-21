/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sun Mar 17 18:37:43 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "rtwtypes.h"
#include "untitled_private.h"

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
 *    '<Root>/Enabled Subsystem'
 *    '<Root>/Enabled Subsystem1'
 */
void untit_EnabledSubsystem_Init(real_T *rty_Out1,
  DW_EnabledSubsystem_untitled_T *localDW, P_EnabledSubsystem_untitled_T *localP)
{
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  localDW->UnitDelay_DSTATE = localP->UnitDelay_InitialCondition;

  /* SystemInitialize for Outport: '<S1>/Out1' */
  *rty_Out1 = localP->Out1_Y0;
}

/*
 * System reset for enable system:
 *    '<Root>/Enabled Subsystem'
 *    '<Root>/Enabled Subsystem1'
 */
void unti_EnabledSubsystem_Reset(DW_EnabledSubsystem_untitled_T *localDW,
  P_EnabledSubsystem_untitled_T *localP)
{
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  localDW->UnitDelay_DSTATE = localP->UnitDelay_InitialCondition;
}

/*
 * Disable for enable system:
 *    '<Root>/Enabled Subsystem'
 *    '<Root>/Enabled Subsystem1'
 */
void un_EnabledSubsystem_Disable(DW_EnabledSubsystem_untitled_T *localDW)
{
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<Root>/Enabled Subsystem'
 *    '<Root>/Enabled Subsystem1'
 */
void untitled_EnabledSubsystem(boolean_T rtu_Enable, real_T *rty_Out1,
  DW_EnabledSubsystem_untitled_T *localDW, P_EnabledSubsystem_untitled_T *localP)
{
  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->EnabledSubsystem_MODE) {
      unti_EnabledSubsystem_Reset(localDW, localP);
      localDW->EnabledSubsystem_MODE = true;
    }

    /* Sum: '<S1>/Add' incorporates:
     *  Constant: '<S1>/Constant'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    *rty_Out1 = localP->Constant_Value + localDW->UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S1>/Unit Delay' */
    localDW->UnitDelay_DSTATE = *rty_Out1;
  } else if (localDW->EnabledSubsystem_MODE) {
    un_EnabledSubsystem_Disable(localDW);
  }

  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem' */
}

/*
 * System initialize for action system:
 *    '<Root>/If Action Subsystem'
 *    '<Root>/If Action Subsystem1'
 */
void unti_IfActionSubsystem_Init(boolean_T *rty_Out1,
  DW_IfActionSubsystem_untitled_T *localDW, P_IfActionSubsystem_untitled_T
  *localP)
{
  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
  localDW->UnitDelay_DSTATE = localP->UnitDelay_InitialCondition;

  /* SystemInitialize for Outport: '<S3>/Out1' */
  *rty_Out1 = localP->Out1_Y0;
}

/*
 * Output and update for action system:
 *    '<Root>/If Action Subsystem'
 *    '<Root>/If Action Subsystem1'
 */
void untitled_IfActionSubsystem(boolean_T *rty_Out1,
  DW_IfActionSubsystem_untitled_T *localDW)
{
  /* Logic: '<S3>/NOT' incorporates:
   *  UnitDelay: '<S3>/Unit Delay'
   */
  *rty_Out1 = !localDW->UnitDelay_DSTATE;

  /* Update for UnitDelay: '<S3>/Unit Delay' */
  localDW->UnitDelay_DSTATE = *rty_Out1;
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
  boolean_T b_value;

  /* MATLABSystem: '<Root>/Digital Input' */
  if (untitled_DW.obj_p.SampleTime != untitled_P.DigitalInput_SampleTime) {
    untitled_DW.obj_p.SampleTime = untitled_P.DigitalInput_SampleTime;
  }

  b_value = readDigitalPin(8);

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem' */
  untitled_EnabledSubsystem(b_value, &untitled_B.Add_j,
    &untitled_DW.EnabledSubsystem, &untitled_P.EnabledSubsystem);

  /* End of MATLABSystem: '<Root>/Digital Input' */
  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem' */

  /* If: '<Root>/If' */
  if (untitled_B.Add_j == 10.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    untitled_IfActionSubsystem(&untitled_B.NOT_i, &untitled_DW.IfActionSubsystem);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  }

  /* End of If: '<Root>/If' */

  /* MATLABSystem: '<Root>/Digital Output' */
  writeDigitalPin(9, (uint8_T)untitled_B.NOT_i);

  /* MATLABSystem: '<Root>/Digital Input1' */
  if (untitled_DW.obj.SampleTime != untitled_P.DigitalInput1_SampleTime) {
    untitled_DW.obj.SampleTime = untitled_P.DigitalInput1_SampleTime;
  }

  b_value = readDigitalPin(2);

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem1' */
  untitled_EnabledSubsystem(b_value, &untitled_B.Add,
    &untitled_DW.EnabledSubsystem1, &untitled_P.EnabledSubsystem1);

  /* End of MATLABSystem: '<Root>/Digital Input1' */
  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem1' */

  /* If: '<Root>/If1' */
  if (untitled_B.Add == 10.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    untitled_IfActionSubsystem(&untitled_B.NOT, &untitled_DW.IfActionSubsystem1);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  }

  /* End of If: '<Root>/If1' */

  /* MATLABSystem: '<Root>/Digital Output1' */
  writeDigitalPin(4, (uint8_T)untitled_B.NOT);
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* SystemInitialize for Enabled SubSystem: '<Root>/Enabled Subsystem' */
  untit_EnabledSubsystem_Init(&untitled_B.Add_j, &untitled_DW.EnabledSubsystem,
    &untitled_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<Root>/Enabled Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem' */
  unti_IfActionSubsystem_Init(&untitled_B.NOT_i, &untitled_DW.IfActionSubsystem,
    &untitled_P.IfActionSubsystem);

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<Root>/Enabled Subsystem1' */
  untit_EnabledSubsystem_Init(&untitled_B.Add, &untitled_DW.EnabledSubsystem1,
    &untitled_P.EnabledSubsystem1);

  /* End of SystemInitialize for SubSystem: '<Root>/Enabled Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem1' */
  unti_IfActionSubsystem_Init(&untitled_B.NOT, &untitled_DW.IfActionSubsystem1,
    &untitled_P.IfActionSubsystem1);

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem1' */

  /* Start for MATLABSystem: '<Root>/Digital Input' */
  untitled_DW.obj_p.matlabCodegenIsDeleted = false;
  untitled_DW.obj_p.SampleTime = untitled_P.DigitalInput_SampleTime;
  untitled_DW.obj_p.isInitialized = 1L;
  digitalIOSetup(8, 0);
  untitled_DW.obj_p.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output' */
  untitled_DW.obj_h5.matlabCodegenIsDeleted = false;
  untitled_DW.obj_h5.isInitialized = 1L;
  digitalIOSetup(9, 1);
  untitled_DW.obj_h5.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Input1' */
  untitled_DW.obj.matlabCodegenIsDeleted = false;
  untitled_DW.obj.SampleTime = untitled_P.DigitalInput1_SampleTime;
  untitled_DW.obj.isInitialized = 1L;
  digitalIOSetup(2, 0);
  untitled_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output1' */
  untitled_DW.obj_h.matlabCodegenIsDeleted = false;
  untitled_DW.obj_h.isInitialized = 1L;
  digitalIOSetup(4, 1);
  untitled_DW.obj_h.isSetupComplete = true;
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Input' */
  if (!untitled_DW.obj_p.matlabCodegenIsDeleted) {
    untitled_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Input' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output' */
  if (!untitled_DW.obj_h5.matlabCodegenIsDeleted) {
    untitled_DW.obj_h5.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output' */

  /* Terminate for MATLABSystem: '<Root>/Digital Input1' */
  if (!untitled_DW.obj.matlabCodegenIsDeleted) {
    untitled_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Input1' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output1' */
  if (!untitled_DW.obj_h.matlabCodegenIsDeleted) {
    untitled_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
