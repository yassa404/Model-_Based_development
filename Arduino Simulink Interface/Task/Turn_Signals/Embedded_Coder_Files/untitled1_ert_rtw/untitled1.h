/*
 * File: untitled1.h
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

#ifndef RTW_HEADER_untitled1_h_
#define RTW_HEADER_untitled1_h_
#ifndef untitled1_COMMON_INCLUDES_
#define untitled1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_arduino_digitalio.h"
#endif                                 /* untitled1_COMMON_INCLUDES_ */

#include "untitled1_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block states (default storage) for system '<S1>/off1' */
typedef struct {
  int8_T off1_SubsysRanBC;             /* '<S1>/off1' */
} DW_off1_untitled1_T;

/* Block signals (default storage) */
typedef struct {
  real_T Merge1;                       /* '<S1>/Merge1' */
  real_T Merge;                        /* '<S3>/Merge' */
  real_T Merge2;                       /* '<S2>/Merge2' */
  real_T Merge3;                       /* '<S2>/Merge3' */
  real_T Add;                          /* '<S14>/Add' */
  real_T Add_p;                        /* '<S4>/Add' */
  boolean_T NOT;                       /* '<S3>/NOT' */
  boolean_T NOT1;                      /* '<S1>/NOT1' */
  boolean_T NOT2;                      /* '<S1>/NOT2' */
} B_untitled1_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_blo_l_T obj; /* '<S3>/Digital Input' */
  codertarget_arduinobase_blo_l_T obj_l;/* '<S1>/Digital Input2' */
  codertarget_arduinobase_blo_l_T obj_b;/* '<S1>/Digital Input1' */
  codertarget_arduinobase_block_T obj_h;/* '<Root>/Digital Output1' */
  codertarget_arduinobase_block_T obj_g;/* '<Root>/Digital Output' */
  real_T UnitDelay_DSTATE;             /* '<S14>/Unit Delay' */
  real_T UnitDelay_DSTATE_c;           /* '<S5>/Unit Delay' */
  real_T UnitDelay_DSTATE_g;           /* '<S4>/Unit Delay' */
  int32_T clockTickCounter;            /* '<S12>/Pulse Generator' */
  int32_T clockTickCounter_a;          /* '<S11>/Pulse Generator' */
  int32_T clockTickCounter_f;          /* '<S10>/Pulse Generator2' */
  int32_T clockTickCounter_a3;         /* '<S10>/Pulse Generator1' */
  int8_T EnabledSubsystem_SubsysRanBC; /* '<S3>/Enabled Subsystem' */
  int8_T off2_SubsysRanBC;             /* '<S1>/off2' */
  int8_T on2_SubsysRanBC;              /* '<S1>/on2' */
  int8_T on1_SubsysRanBC;              /* '<S1>/on1' */
  int8_T EnabledSubsystem2_SubsysRanBC;/* '<S1>/Enabled Subsystem2' */
  int8_T EnabledSubsystem1_SubsysRanBC;/* '<S1>/Enabled Subsystem1' */
  int8_T IfActionSubsystem3_SubsysRanBC;/* '<S2>/If Action Subsystem3' */
  int8_T IfActionSubsystem2_SubsysRanBC;/* '<S2>/If Action Subsystem2' */
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<S2>/If Action Subsystem1' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S2>/If Action Subsystem' */
  boolean_T EnabledSubsystem_MODE;     /* '<S3>/Enabled Subsystem' */
  boolean_T EnabledSubsystem2_MODE;    /* '<S1>/Enabled Subsystem2' */
  boolean_T EnabledSubsystem1_MODE;    /* '<S1>/Enabled Subsystem1' */
  DW_off1_untitled1_T off;             /* '<S3>/off' */
  DW_off1_untitled1_T on;              /* '<S3>/on' */
  DW_off1_untitled1_T off1;            /* '<S1>/off1' */
} DW_untitled1_T;

/* Parameters for system: '<S1>/off1' */
struct P_off1_untitled1_T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S6>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_untitled1_T_ {
  real_T PulseGenerator2_Amp;          /* Expression: 1
                                        * Referenced by: '<S10>/Pulse Generator2'
                                        */
  real_T PulseGenerator2_Period;   /* Computed Parameter: PulseGenerator2_Period
                                    * Referenced by: '<S10>/Pulse Generator2'
                                    */
  real_T PulseGenerator2_Duty;       /* Computed Parameter: PulseGenerator2_Duty
                                      * Referenced by: '<S10>/Pulse Generator2'
                                      */
  real_T PulseGenerator2_PhaseDelay;   /* Expression: 0
                                        * Referenced by: '<S10>/Pulse Generator2'
                                        */
  real_T PulseGenerator1_Amp;          /* Expression: 1
                                        * Referenced by: '<S10>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_Period;   /* Computed Parameter: PulseGenerator1_Period
                                    * Referenced by: '<S10>/Pulse Generator1'
                                    */
  real_T PulseGenerator1_Duty;       /* Computed Parameter: PulseGenerator1_Duty
                                      * Referenced by: '<S10>/Pulse Generator1'
                                      */
  real_T PulseGenerator1_PhaseDelay;   /* Expression: 0
                                        * Referenced by: '<S10>/Pulse Generator1'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S11>/Constant1'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S11>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;     /* Computed Parameter: PulseGenerator_Period
                                     * Referenced by: '<S11>/Pulse Generator'
                                     */
  real_T PulseGenerator_Duty;         /* Computed Parameter: PulseGenerator_Duty
                                       * Referenced by: '<S11>/Pulse Generator'
                                       */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S11>/Pulse Generator'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S12>/Constant'
                                        */
  real_T PulseGenerator_Amp_b;         /* Expression: 1
                                        * Referenced by: '<S12>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period_n; /* Computed Parameter: PulseGenerator_Period_n
                                   * Referenced by: '<S12>/Pulse Generator'
                                   */
  real_T PulseGenerator_Duty_a;     /* Computed Parameter: PulseGenerator_Duty_a
                                     * Referenced by: '<S12>/Pulse Generator'
                                     */
  real_T PulseGenerator_PhaseDelay_a;  /* Expression: 0
                                        * Referenced by: '<S12>/Pulse Generator'
                                        */
  real_T Constant_Value_k;             /* Expression: 0
                                        * Referenced by: '<S13>/Constant'
                                        */
  real_T Constant1_Value_i;            /* Expression: 0
                                        * Referenced by: '<S13>/Constant1'
                                        */
  real_T DigitalInput1_SampleTime;     /* Expression: 1e-3
                                        * Referenced by: '<S1>/Digital Input1'
                                        */
  real_T DigitalInput2_SampleTime;     /* Expression: 1e-3
                                        * Referenced by: '<S1>/Digital Input2'
                                        */
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S4>/Out1'
                                        */
  real_T Constant_Value_c;             /* Expression: 1
                                        * Referenced by: '<S4>/Constant'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S4>/Unit Delay'
                                        */
  real_T Out1_Y0_e;                    /* Computed Parameter: Out1_Y0_e
                                        * Referenced by: '<S5>/Out1'
                                        */
  real_T Constant_Value_i;             /* Expression: 1
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T UnitDelay_InitialCondition_d; /* Expression: 0
                                        * Referenced by: '<S5>/Unit Delay'
                                        */
  real_T Constant_Value_o;             /* Expression: 2
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T Constant_Value_b;             /* Expression: 3
                                        * Referenced by: '<S9>/Constant'
                                        */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T DigitalInput_SampleTime;      /* Expression: 1e-3
                                        * Referenced by: '<S3>/Digital Input'
                                        */
  real_T Out1_Y0_b;                    /* Computed Parameter: Out1_Y0_b
                                        * Referenced by: '<S14>/Out1'
                                        */
  real_T Constant_Value_e;             /* Expression: 1
                                        * Referenced by: '<S14>/Constant'
                                        */
  real_T UnitDelay_InitialCondition_k; /* Expression: 0
                                        * Referenced by: '<S14>/Unit Delay'
                                        */
  real_T Merge1_InitialOutput;       /* Computed Parameter: Merge1_InitialOutput
                                      * Referenced by: '<S1>/Merge1'
                                      */
  real_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<S3>/Merge'
                                       */
  real_T Merge2_InitialOutput;       /* Computed Parameter: Merge2_InitialOutput
                                      * Referenced by: '<S2>/Merge2'
                                      */
  real_T Merge3_InitialOutput;       /* Computed Parameter: Merge3_InitialOutput
                                      * Referenced by: '<S2>/Merge3'
                                      */
  P_off1_untitled1_T off;              /* '<S3>/off' */
  P_off1_untitled1_T on;               /* '<S3>/on' */
  P_off1_untitled1_T off1;             /* '<S1>/off1' */
};

/* Real-time Model Data Structure */
struct tag_RTM_untitled1_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_untitled1_T untitled1_P;

/* Block signals (default storage) */
extern B_untitled1_T untitled1_B;

/* Block states (default storage) */
extern DW_untitled1_T untitled1_DW;

/* Model entry point functions */
extern void untitled1_initialize(void);
extern void untitled1_step(void);
extern void untitled1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_untitled1_T *const untitled1_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'untitled1'
 * '<S1>'   : 'untitled1/push_buttom on\off2'
 * '<S2>'   : 'untitled1/signals_organization'
 * '<S3>'   : 'untitled1/switch_bettween_2buttom'
 * '<S4>'   : 'untitled1/push_buttom on\off2/Enabled Subsystem1'
 * '<S5>'   : 'untitled1/push_buttom on\off2/Enabled Subsystem2'
 * '<S6>'   : 'untitled1/push_buttom on\off2/off1'
 * '<S7>'   : 'untitled1/push_buttom on\off2/off2'
 * '<S8>'   : 'untitled1/push_buttom on\off2/on1'
 * '<S9>'   : 'untitled1/push_buttom on\off2/on2'
 * '<S10>'  : 'untitled1/signals_organization/If Action Subsystem'
 * '<S11>'  : 'untitled1/signals_organization/If Action Subsystem1'
 * '<S12>'  : 'untitled1/signals_organization/If Action Subsystem2'
 * '<S13>'  : 'untitled1/signals_organization/If Action Subsystem3'
 * '<S14>'  : 'untitled1/switch_bettween_2buttom/Enabled Subsystem'
 * '<S15>'  : 'untitled1/switch_bettween_2buttom/off'
 * '<S16>'  : 'untitled1/switch_bettween_2buttom/on'
 */
#endif                                 /* RTW_HEADER_untitled1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
