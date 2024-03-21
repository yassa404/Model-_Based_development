/*
 * File: untitled.h
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

#ifndef RTW_HEADER_untitled_h_
#define RTW_HEADER_untitled_h_
#ifndef untitled_COMMON_INCLUDES_
#define untitled_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_arduino_digitalio.h"
#endif                                 /* untitled_COMMON_INCLUDES_ */

#include "untitled_types.h"
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block states (default storage) for system '<Root>/Enabled Subsystem3' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  boolean_T EnabledSubsystem3_MODE;    /* '<Root>/Enabled Subsystem3' */
} DW_EnabledSubsystem3_untitled_T;

/* Block signals (default storage) */
typedef struct {
  real_T Merge2;                       /* '<Root>/Merge2' */
  real_T Merge;                        /* '<Root>/Merge' */
  real_T Merge1;                       /* '<Root>/Merge1' */
  real_T Add;                          /* '<S2>/Add' */
  real_T Add_o;                        /* '<S1>/Add' */
} B_untitled_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_block_T obj; /* '<Root>/Digital Input1' */
  codertarget_arduinobase_block_T obj_o;/* '<Root>/Digital Input' */
  codertarget_arduinobase_blo_b_T obj_k;/* '<Root>/Digital Output1' */
  codertarget_arduinobase_blo_b_T obj_c;/* '<Root>/Digital Output' */
  DW_EnabledSubsystem3_untitled_T EnabledSubsystem4;/* '<Root>/Enabled Subsystem4' */
  DW_EnabledSubsystem3_untitled_T EnabledSubsystem3;/* '<Root>/Enabled Subsystem3' */
} DW_untitled_T;

/* Parameters for system: '<Root>/Enabled Subsystem3' */
struct P_EnabledSubsystem3_untitled_T_ {
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S1>/Out1'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay'
                                        */
};

/* Parameters for system: '<Root>/If Action Subsystem1' */
struct P_IfActionSubsystem1_untitled_T_ {
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S3>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_untitled_T_ {
  real_T DigitalInput_SampleTime;      /* Expression: 0.1
                                        * Referenced by: '<Root>/Digital Input'
                                        */
  real_T DigitalInput1_SampleTime;     /* Expression: 0.1
                                        * Referenced by: '<Root>/Digital Input1'
                                        */
  real_T Constant_Value;               /* Expression: 3
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T Constant_Value_k;             /* Expression: 0
                                        * Referenced by: '<S9>/Constant'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S5>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S5>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<S4>/Constant5'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<S4>/Constant6'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S6>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S6>/Constant2'
                                        */
  real_T Merge2_InitialOutput;       /* Computed Parameter: Merge2_InitialOutput
                                      * Referenced by: '<Root>/Merge2'
                                      */
  real_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<Root>/Merge'
                                       */
  real_T Merge1_InitialOutput;       /* Computed Parameter: Merge1_InitialOutput
                                      * Referenced by: '<Root>/Merge1'
                                      */
  P_IfActionSubsystem1_untitled_T IfActionSubsystem7;/* '<Root>/If Action Subsystem7' */
  P_IfActionSubsystem1_untitled_T IfActionSubsystem1;/* '<Root>/If Action Subsystem1' */
  P_EnabledSubsystem3_untitled_T EnabledSubsystem4;/* '<Root>/Enabled Subsystem4' */
  P_EnabledSubsystem3_untitled_T EnabledSubsystem3;/* '<Root>/Enabled Subsystem3' */
};

/* Real-time Model Data Structure */
struct tag_RTM_untitled_T {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID[2];
    } TaskCounters;
  } Timing;
};

/* Block parameters (default storage) */
extern P_untitled_T untitled_P;

/* Block signals (default storage) */
extern B_untitled_T untitled_B;

/* Block states (default storage) */
extern DW_untitled_T untitled_DW;

/* External function called from main */
extern void untitled_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void untitled_initialize(void);
extern void untitled_step0(void);
extern void untitled_step1(void);
extern void untitled_terminate(void);

/* Real-time Model object */
extern RT_MODEL_untitled_T *const untitled_M;
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
 * '<Root>' : 'untitled'
 * '<S1>'   : 'untitled/Enabled Subsystem3'
 * '<S2>'   : 'untitled/Enabled Subsystem4'
 * '<S3>'   : 'untitled/If Action Subsystem1'
 * '<S4>'   : 'untitled/If Action Subsystem3'
 * '<S5>'   : 'untitled/If Action Subsystem4'
 * '<S6>'   : 'untitled/If Action Subsystem5'
 * '<S7>'   : 'untitled/If Action Subsystem7'
 * '<S8>'   : 'untitled/If Action Subsystem8'
 * '<S9>'   : 'untitled/If Action Subsystem9'
 */
#endif                                 /* RTW_HEADER_untitled_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
