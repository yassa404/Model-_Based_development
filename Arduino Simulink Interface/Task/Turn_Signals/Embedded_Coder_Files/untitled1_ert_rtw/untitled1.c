/*
 * File: untitled1.c
 *
 * Code generated for Simulink model 'untitled1'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Mon Mar 25 17:41:33 2024
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

/*
 * Output and update for action system:
 *    '<S1>/off1'
 *    '<S3>/on'
 *    '<S3>/off'
 */
void untitled1_off1(real_T *rty_Out1, P_off1_untitled1_T *localP)
{
  /* SignalConversion generated from: '<S6>/Out1' incorporates:
   *  Constant: '<S6>/Constant'
   */
  *rty_Out1 = localP->Constant_Value;
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

/* Model step function */
void untitled1_step(void)
{
  real_T tmp;
  uint8_T tmp_0;
  boolean_T b_value;

  /* Reset subsysRan breadcrumbs */
  srClearBC(untitled1_DW.IfActionSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(untitled1_DW.IfActionSubsystem1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(untitled1_DW.IfActionSubsystem2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(untitled1_DW.IfActionSubsystem3_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(untitled1_DW.EnabledSubsystem1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(untitled1_DW.EnabledSubsystem2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(untitled1_DW.on1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(untitled1_DW.off1.off1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(untitled1_DW.on2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(untitled1_DW.off2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(untitled1_DW.EnabledSubsystem_SubsysRanBC);

  /* MATLABSystem: '<S3>/Digital Input' */
  if (untitled1_DW.obj.SampleTime != untitled1_P.DigitalInput_SampleTime) {
    untitled1_DW.obj.SampleTime = untitled1_P.DigitalInput_SampleTime;
  }

  b_value = readDigitalPin(2);

  /* Logic: '<S3>/NOT' incorporates:
   *  MATLABSystem: '<S3>/Digital Input'
   */
  untitled1_B.NOT = !b_value;

  /* Outputs for Enabled SubSystem: '<S3>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S14>/Enable'
   */
  if (untitled1_B.NOT) {
    if (!untitled1_DW.EnabledSubsystem_MODE) {
      /* InitializeConditions for UnitDelay: '<S14>/Unit Delay' */
      untitled1_DW.UnitDelay_DSTATE = untitled1_P.UnitDelay_InitialCondition_k;
      untitled1_DW.EnabledSubsystem_MODE = true;
    }

    /* Sum: '<S14>/Add' incorporates:
     *  Constant: '<S14>/Constant'
     *  UnitDelay: '<S14>/Unit Delay'
     */
    untitled1_B.Add = untitled1_P.Constant_Value_e +
      untitled1_DW.UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S14>/Unit Delay' */
    untitled1_DW.UnitDelay_DSTATE = untitled1_B.Add;
    srUpdateBC(untitled1_DW.EnabledSubsystem_SubsysRanBC);
  } else {
    untitled1_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S3>/Enabled Subsystem' */

  /* If: '<S3>/If' */
  if (untitled1_B.Add == 500.0) {
    /* Outputs for IfAction SubSystem: '<S3>/on' incorporates:
     *  ActionPort: '<S16>/Action Port'
     */
    untitled1_off1(&untitled1_B.Merge, &untitled1_P.on);

    /* End of Outputs for SubSystem: '<S3>/on' */
  } else if (untitled1_B.Add == 3000.0) {
    /* Outputs for IfAction SubSystem: '<S3>/off' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    untitled1_off1(&untitled1_B.Merge, &untitled1_P.off);

    /* End of Outputs for SubSystem: '<S3>/off' */
  }

  /* End of If: '<S3>/If' */
  /* MATLABSystem: '<S1>/Digital Input1' */
  if (untitled1_DW.obj_b.SampleTime != untitled1_P.DigitalInput1_SampleTime) {
    untitled1_DW.obj_b.SampleTime = untitled1_P.DigitalInput1_SampleTime;
  }

  b_value = readDigitalPin(4);

  /* Logic: '<S1>/NOT1' incorporates:
   *  MATLABSystem: '<S1>/Digital Input1'
   */
  untitled1_B.NOT1 = !b_value;

  /* Outputs for Enabled SubSystem: '<S1>/Enabled Subsystem1' incorporates:
   *  EnablePort: '<S4>/Enable'
   */
  if (untitled1_B.NOT1) {
    if (!untitled1_DW.EnabledSubsystem1_MODE) {
      /* InitializeConditions for UnitDelay: '<S4>/Unit Delay' */
      untitled1_DW.UnitDelay_DSTATE_g = untitled1_P.UnitDelay_InitialCondition;
      untitled1_DW.EnabledSubsystem1_MODE = true;
    }

    /* Sum: '<S4>/Add' incorporates:
     *  Constant: '<S4>/Constant'
     *  UnitDelay: '<S4>/Unit Delay'
     */
    untitled1_B.Add_p = untitled1_P.Constant_Value_c +
      untitled1_DW.UnitDelay_DSTATE_g;

    /* Update for UnitDelay: '<S4>/Unit Delay' */
    untitled1_DW.UnitDelay_DSTATE_g = untitled1_B.Add_p;
    srUpdateBC(untitled1_DW.EnabledSubsystem1_SubsysRanBC);
  } else {
    untitled1_DW.EnabledSubsystem1_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S1>/Enabled Subsystem1' */

  /* If: '<S1>/If1' */
  if (untitled1_B.Add_p == 500.0) {
    /* Outputs for IfAction SubSystem: '<S1>/on1' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* Merge: '<S1>/Merge1' incorporates:
     *  Constant: '<S8>/Constant'
     *  SignalConversion generated from: '<S8>/two'
     */
    untitled1_B.Merge1 = untitled1_P.Constant_Value_o;

    /* End of Outputs for SubSystem: '<S1>/on1' */

    /* Update for IfAction SubSystem: '<S1>/on1' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* Update for If: '<S1>/If1' */
    srUpdateBC(untitled1_DW.on1_SubsysRanBC);

    /* End of Update for SubSystem: '<S1>/on1' */
  } else if (untitled1_B.Add_p == 3000.0) {
    /* Outputs for IfAction SubSystem: '<S1>/off1' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    untitled1_off1(&untitled1_B.Merge1, &untitled1_P.off1);

    /* End of Outputs for SubSystem: '<S1>/off1' */
  }

  /* End of If: '<S1>/If1' */

  /* MATLABSystem: '<S1>/Digital Input2' */
  if (untitled1_DW.obj_l.SampleTime != untitled1_P.DigitalInput2_SampleTime) {
    untitled1_DW.obj_l.SampleTime = untitled1_P.DigitalInput2_SampleTime;
  }

  b_value = readDigitalPin(7);

  /* Logic: '<S1>/NOT2' incorporates:
   *  MATLABSystem: '<S1>/Digital Input2'
   */
  untitled1_B.NOT2 = !b_value;

  /* Outputs for Enabled SubSystem: '<S1>/Enabled Subsystem2' incorporates:
   *  EnablePort: '<S5>/Enable'
   */
  if (untitled1_B.NOT2) {
    if (!untitled1_DW.EnabledSubsystem2_MODE) {
      /* InitializeConditions for UnitDelay: '<S5>/Unit Delay' */
      untitled1_DW.UnitDelay_DSTATE_c = untitled1_P.UnitDelay_InitialCondition_d;
      untitled1_DW.EnabledSubsystem2_MODE = true;
    }

    /* Sum: '<S5>/Add' incorporates:
     *  Constant: '<S5>/Constant'
     *  UnitDelay: '<S5>/Unit Delay'
     */
    untitled1_DW.UnitDelay_DSTATE_c += untitled1_P.Constant_Value_i;
    srUpdateBC(untitled1_DW.EnabledSubsystem2_SubsysRanBC);
  } else {
    untitled1_DW.EnabledSubsystem2_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S1>/Enabled Subsystem2' */

  /* If: '<S1>/If2' incorporates:
   *  UnitDelay: '<S5>/Unit Delay'
   */
  if (untitled1_DW.UnitDelay_DSTATE_c == 500.0) {
    /* Outputs for IfAction SubSystem: '<S1>/on2' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* Merge: '<S1>/Merge1' incorporates:
     *  Constant: '<S9>/Constant'
     *  SignalConversion generated from: '<S9>/three'
     */
    untitled1_B.Merge1 = untitled1_P.Constant_Value_b;

    /* End of Outputs for SubSystem: '<S1>/on2' */

    /* Update for IfAction SubSystem: '<S1>/on2' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* Update for If: '<S1>/If2' */
    srUpdateBC(untitled1_DW.on2_SubsysRanBC);

    /* End of Update for SubSystem: '<S1>/on2' */
  } else if (untitled1_DW.UnitDelay_DSTATE_c == 3000.0) {
    /* Outputs for IfAction SubSystem: '<S1>/off2' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    /* Merge: '<S1>/Merge1' incorporates:
     *  Constant: '<S7>/Constant'
     *  SignalConversion generated from: '<S7>/zero'
     */
    untitled1_B.Merge1 = untitled1_P.Constant_Value_j;

    /* End of Outputs for SubSystem: '<S1>/off2' */

    /* Update for IfAction SubSystem: '<S1>/off2' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    /* Update for If: '<S1>/If2' */
    srUpdateBC(untitled1_DW.off2_SubsysRanBC);

    /* End of Update for SubSystem: '<S1>/off2' */
  }

  /* End of If: '<S1>/If2' */
  /* If: '<Root>/If3' */
  if (untitled1_B.Merge == 1.0) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* Merge: '<S2>/Merge2' incorporates:
     *  DiscretePulseGenerator: '<S10>/Pulse Generator2'
     */
    untitled1_B.Merge2 = (untitled1_DW.clockTickCounter_f <
                          untitled1_P.PulseGenerator2_Duty) &&
      (untitled1_DW.clockTickCounter_f >= 0L) ? untitled1_P.PulseGenerator2_Amp :
      0.0;

    /* DiscretePulseGenerator: '<S10>/Pulse Generator2' */
    if (untitled1_DW.clockTickCounter_f >= untitled1_P.PulseGenerator2_Period -
        1.0) {
      untitled1_DW.clockTickCounter_f = 0L;
    } else {
      untitled1_DW.clockTickCounter_f++;
    }

    /* Merge: '<S2>/Merge3' incorporates:
     *  DiscretePulseGenerator: '<S10>/Pulse Generator1'
     */
    untitled1_B.Merge3 = (untitled1_DW.clockTickCounter_a3 <
                          untitled1_P.PulseGenerator1_Duty) &&
      (untitled1_DW.clockTickCounter_a3 >= 0L) ? untitled1_P.PulseGenerator1_Amp
      : 0.0;

    /* DiscretePulseGenerator: '<S10>/Pulse Generator1' */
    if (untitled1_DW.clockTickCounter_a3 >= untitled1_P.PulseGenerator1_Period -
        1.0) {
      untitled1_DW.clockTickCounter_a3 = 0L;
    } else {
      untitled1_DW.clockTickCounter_a3++;
    }

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem' */

    /* Update for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* Update for If: '<Root>/If3' */
    srUpdateBC(untitled1_DW.IfActionSubsystem_SubsysRanBC);

    /* End of Update for SubSystem: '<S2>/If Action Subsystem' */
  } else if (untitled1_B.Merge1 == 2.0) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    /* Merge: '<S2>/Merge3' incorporates:
     *  Constant: '<S11>/Constant1'
     *  SignalConversion generated from: '<S11>/off1'
     */
    untitled1_B.Merge3 = untitled1_P.Constant1_Value;

    /* Merge: '<S2>/Merge2' incorporates:
     *  DiscretePulseGenerator: '<S11>/Pulse Generator'
     */
    untitled1_B.Merge2 = (untitled1_DW.clockTickCounter_a <
                          untitled1_P.PulseGenerator_Duty) &&
      (untitled1_DW.clockTickCounter_a >= 0L) ? untitled1_P.PulseGenerator_Amp :
      0.0;

    /* DiscretePulseGenerator: '<S11>/Pulse Generator' */
    if (untitled1_DW.clockTickCounter_a >= untitled1_P.PulseGenerator_Period -
        1.0) {
      untitled1_DW.clockTickCounter_a = 0L;
    } else {
      untitled1_DW.clockTickCounter_a++;
    }

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem1' */

    /* Update for IfAction SubSystem: '<S2>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    /* Update for If: '<Root>/If3' */
    srUpdateBC(untitled1_DW.IfActionSubsystem1_SubsysRanBC);

    /* End of Update for SubSystem: '<S2>/If Action Subsystem1' */
  } else if (untitled1_B.Merge1 == 3.0) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    /* Merge: '<S2>/Merge2' incorporates:
     *  Constant: '<S12>/Constant'
     *  SignalConversion generated from: '<S12>/off'
     */
    untitled1_B.Merge2 = untitled1_P.Constant_Value;

    /* Merge: '<S2>/Merge3' incorporates:
     *  DiscretePulseGenerator: '<S12>/Pulse Generator'
     */
    untitled1_B.Merge3 = (untitled1_DW.clockTickCounter <
                          untitled1_P.PulseGenerator_Duty_a) &&
      (untitled1_DW.clockTickCounter >= 0L) ? untitled1_P.PulseGenerator_Amp_b :
      0.0;

    /* DiscretePulseGenerator: '<S12>/Pulse Generator' */
    if (untitled1_DW.clockTickCounter >= untitled1_P.PulseGenerator_Period_n -
        1.0) {
      untitled1_DW.clockTickCounter = 0L;
    } else {
      untitled1_DW.clockTickCounter++;
    }

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem2' */

    /* Update for IfAction SubSystem: '<S2>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    /* Update for If: '<Root>/If3' */
    srUpdateBC(untitled1_DW.IfActionSubsystem2_SubsysRanBC);

    /* End of Update for SubSystem: '<S2>/If Action Subsystem2' */
  } else if ((untitled1_B.Merge1 != 0.0) || (untitled1_B.Merge == 0.0)) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    /* Merge: '<S2>/Merge2' incorporates:
     *  Constant: '<S13>/Constant'
     *  SignalConversion generated from: '<S13>/off2'
     */
    untitled1_B.Merge2 = untitled1_P.Constant_Value_k;

    /* Merge: '<S2>/Merge3' incorporates:
     *  Constant: '<S13>/Constant1'
     *  SignalConversion generated from: '<S13>/off'
     */
    untitled1_B.Merge3 = untitled1_P.Constant1_Value_i;

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem3' */

    /* Update for IfAction SubSystem: '<S2>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    /* Update for If: '<Root>/If3' */
    srUpdateBC(untitled1_DW.IfActionSubsystem3_SubsysRanBC);

    /* End of Update for SubSystem: '<S2>/If Action Subsystem3' */
  }

  /* End of If: '<Root>/If3' */

  /* MATLABSystem: '<Root>/Digital Output' */
  tmp = rt_roundd_snf(untitled1_B.Merge2);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint8_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(8, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output' */

  /* MATLABSystem: '<Root>/Digital Output1' */
  tmp = rt_roundd_snf(untitled1_B.Merge3);
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

  /* End of MATLABSystem: '<Root>/Digital Output1' */
  {                                    /* Sample time: [0.001s, 0.0s] */
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  untitled1_M->Timing.taskTime0 =
    ((time_T)(++untitled1_M->Timing.clockTick0)) * untitled1_M->Timing.stepSize0;
}

/* Model initialize function */
void untitled1_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(untitled1_M, -1);
  untitled1_M->Timing.stepSize0 = 0.001;

  /* External mode info */
  untitled1_M->Sizes.checksums[0] = (2751072478U);
  untitled1_M->Sizes.checksums[1] = (1103758301U);
  untitled1_M->Sizes.checksums[2] = (2178896423U);
  untitled1_M->Sizes.checksums[3] = (1665278940U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[19];
    untitled1_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = (sysRanDType *)&untitled1_DW.EnabledSubsystem1_SubsysRanBC;
    systemRan[6] = (sysRanDType *)&untitled1_DW.EnabledSubsystem2_SubsysRanBC;
    systemRan[7] = (sysRanDType *)&untitled1_DW.off1.off1_SubsysRanBC;
    systemRan[8] = (sysRanDType *)&untitled1_DW.off2_SubsysRanBC;
    systemRan[9] = (sysRanDType *)&untitled1_DW.on1_SubsysRanBC;
    systemRan[10] = (sysRanDType *)&untitled1_DW.on2_SubsysRanBC;
    systemRan[11] = (sysRanDType *)&untitled1_DW.IfActionSubsystem_SubsysRanBC;
    systemRan[12] = (sysRanDType *)&untitled1_DW.IfActionSubsystem1_SubsysRanBC;
    systemRan[13] = (sysRanDType *)&untitled1_DW.IfActionSubsystem2_SubsysRanBC;
    systemRan[14] = (sysRanDType *)&untitled1_DW.IfActionSubsystem3_SubsysRanBC;
    systemRan[15] = &rtAlwaysEnabled;
    systemRan[16] = (sysRanDType *)&untitled1_DW.EnabledSubsystem_SubsysRanBC;
    systemRan[17] = (sysRanDType *)&untitled1_DW.off.off1_SubsysRanBC;
    systemRan[18] = (sysRanDType *)&untitled1_DW.on.off1_SubsysRanBC;
    rteiSetModelMappingInfoPtr(untitled1_M->extModeInfo,
      &untitled1_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(untitled1_M->extModeInfo, untitled1_M->Sizes.checksums);
    rteiSetTPtr(untitled1_M->extModeInfo, rtmGetTPtr(untitled1_M));
  }

  /* InitializeConditions for UnitDelay: '<S14>/Unit Delay' */
  untitled1_DW.UnitDelay_DSTATE = untitled1_P.UnitDelay_InitialCondition_k;

  /* SystemInitialize for Sum: '<S14>/Add' incorporates:
   *  Outport: '<S14>/Out1'
   */
  untitled1_B.Add = untitled1_P.Out1_Y0_b;

  /* End of SystemInitialize for SubSystem: '<S3>/Enabled Subsystem' */
  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay' */
  untitled1_DW.UnitDelay_DSTATE_g = untitled1_P.UnitDelay_InitialCondition;

  /* SystemInitialize for Sum: '<S4>/Add' incorporates:
   *  Outport: '<S4>/Out1'
   */
  untitled1_B.Add_p = untitled1_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S1>/Enabled Subsystem1' */

  /* SystemInitialize for Enabled SubSystem: '<S1>/Enabled Subsystem2' */
  /* SystemInitialize for Outport: '<S5>/Out1' incorporates:
   *  Sum: '<S5>/Add'
   *  UnitDelay: '<S5>/Unit Delay'
   */
  untitled1_DW.UnitDelay_DSTATE_c = untitled1_P.Out1_Y0_e;

  /* End of SystemInitialize for SubSystem: '<S1>/Enabled Subsystem2' */

  /* SystemInitialize for Merge: '<S1>/Merge1' */
  untitled1_B.Merge1 = untitled1_P.Merge1_InitialOutput;

  /* SystemInitialize for Merge: '<S3>/Merge' */
  untitled1_B.Merge = untitled1_P.Merge_InitialOutput;

  /* SystemInitialize for Merge: '<S2>/Merge2' */
  untitled1_B.Merge2 = untitled1_P.Merge2_InitialOutput;

  /* SystemInitialize for Merge: '<S2>/Merge3' */
  untitled1_B.Merge3 = untitled1_P.Merge3_InitialOutput;

  /* Start for MATLABSystem: '<S3>/Digital Input' */
  untitled1_DW.obj.matlabCodegenIsDeleted = false;
  untitled1_DW.obj.SampleTime = untitled1_P.DigitalInput_SampleTime;
  untitled1_DW.obj.isInitialized = 1L;
  digitalIOSetup(2, 2.0);
  untitled1_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<S1>/Digital Input1' */
  untitled1_DW.obj_b.matlabCodegenIsDeleted = false;
  untitled1_DW.obj_b.SampleTime = untitled1_P.DigitalInput1_SampleTime;
  untitled1_DW.obj_b.isInitialized = 1L;
  digitalIOSetup(4, 2.0);
  untitled1_DW.obj_b.isSetupComplete = true;

  /* Start for MATLABSystem: '<S1>/Digital Input2' */
  untitled1_DW.obj_l.matlabCodegenIsDeleted = false;
  untitled1_DW.obj_l.SampleTime = untitled1_P.DigitalInput2_SampleTime;
  untitled1_DW.obj_l.isInitialized = 1L;
  digitalIOSetup(7, 2.0);
  untitled1_DW.obj_l.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output' */
  untitled1_DW.obj_g.matlabCodegenIsDeleted = false;
  untitled1_DW.obj_g.isInitialized = 1L;
  digitalIOSetup(8, 1);
  untitled1_DW.obj_g.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output1' */
  untitled1_DW.obj_h.matlabCodegenIsDeleted = false;
  untitled1_DW.obj_h.isInitialized = 1L;
  digitalIOSetup(9, 1);
  untitled1_DW.obj_h.isSetupComplete = true;
}

/* Model terminate function */
void untitled1_terminate(void)
{
  /* Terminate for MATLABSystem: '<S3>/Digital Input' */
  if (!untitled1_DW.obj.matlabCodegenIsDeleted) {
    untitled1_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S3>/Digital Input' */
  /* Terminate for MATLABSystem: '<S1>/Digital Input1' */
  if (!untitled1_DW.obj_b.matlabCodegenIsDeleted) {
    untitled1_DW.obj_b.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S1>/Digital Input1' */
  /* Terminate for MATLABSystem: '<S1>/Digital Input2' */
  if (!untitled1_DW.obj_l.matlabCodegenIsDeleted) {
    untitled1_DW.obj_l.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S1>/Digital Input2' */
  /* Terminate for MATLABSystem: '<Root>/Digital Output' */
  if (!untitled1_DW.obj_g.matlabCodegenIsDeleted) {
    untitled1_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output1' */
  if (!untitled1_DW.obj_h.matlabCodegenIsDeleted) {
    untitled1_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
