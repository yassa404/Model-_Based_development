/*
 * File: untitled.h
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

/* Block states (default storage) for system '<Root>/Enabled Subsystem' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  boolean_T EnabledSubsystem_MODE;     /* '<Root>/Enabled Subsystem' */
} DW_EnabledSubsystem_untitled_T;

/* Block states (default storage) for system '<Root>/If Action Subsystem' */
typedef struct {
  boolean_T UnitDelay_DSTATE;          /* '<S3>/Unit Delay' */
} DW_IfActionSubsystem_untitled_T;

/* Block signals (default storage) */
typedef struct {
  real_T Add;                          /* '<S2>/Add' */
  real_T Add_j;                        /* '<S1>/Add' */
  boolean_T NOT;                       /* '<S4>/NOT' */
  boolean_T NOT_i;                     /* '<S3>/NOT' */
} B_untitled_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_block_T obj; /* '<Root>/Digital Input1' */
  codertarget_arduinobase_block_T obj_p;/* '<Root>/Digital Input' */
  codertarget_arduinobase_blo_b_T obj_h;/* '<Root>/Digital Output1' */
  codertarget_arduinobase_blo_b_T obj_h5;/* '<Root>/Digital Output' */
  DW_IfActionSubsystem_untitled_T IfActionSubsystem1;/* '<Root>/If Action Subsystem1' */
  DW_IfActionSubsystem_untitled_T IfActionSubsystem;/* '<Root>/If Action Subsystem' */
  DW_EnabledSubsystem_untitled_T EnabledSubsystem1;/* '<Root>/Enabled Subsystem1' */
  DW_EnabledSubsystem_untitled_T EnabledSubsystem;/* '<Root>/Enabled Subsystem' */
} DW_untitled_T;

/* Parameters for system: '<Root>/Enabled Subsystem' */
struct P_EnabledSubsystem_untitled_T_ {
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

/* Parameters for system: '<Root>/If Action Subsystem' */
struct P_IfActionSubsystem_untitled_T_ {
  boolean_T Out1_Y0;                   /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S3>/Out1'
                                        */
  boolean_T UnitDelay_InitialCondition;
                               /* Computed Parameter: UnitDelay_InitialCondition
                                * Referenced by: '<S3>/Unit Delay'
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
  P_IfActionSubsystem_untitled_T IfActionSubsystem1;/* '<Root>/If Action Subsystem1' */
  P_IfActionSubsystem_untitled_T IfActionSubsystem;/* '<Root>/If Action Subsystem' */
  P_EnabledSubsystem_untitled_T EnabledSubsystem1;/* '<Root>/Enabled Subsystem1' */
  P_EnabledSubsystem_untitled_T EnabledSubsystem;/* '<Root>/Enabled Subsystem' */
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
 * '<S1>'   : 'untitled/Enabled Subsystem'
 * '<S2>'   : 'untitled/Enabled Subsystem1'
 * '<S3>'   : 'untitled/If Action Subsystem'
 * '<S4>'   : 'untitled/If Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_untitled_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
