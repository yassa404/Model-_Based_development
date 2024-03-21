/*
 * File: motor_driver.h
 *
 * Code generated for Simulink model 'motor_driver'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Mar 19 18:48:50 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_motor_driver_h_
#define RTW_HEADER_motor_driver_h_
#ifndef motor_driver_COMMON_INCLUDES_
#define motor_driver_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_AnalogIn.h"
#include "MW_arduino_digitalio.h"
#include "MW_PWM.h"
#endif                                 /* motor_driver_COMMON_INCLUDES_ */

#include "motor_driver_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
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

/* Block signals (default storage) */
typedef struct {
  real_T Merge;                        /* '<Root>/Merge' */
  real_T Merge1;                       /* '<Root>/Merge1' */
} B_motor_driver_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_inter_T obj; /* '<Root>/Analog Input' */
  codertarget_arduinobase_block_T obj_g;/* '<Root>/Digital Input1' */
  codertarget_arduinobase_block_T obj_p;/* '<Root>/Digital Input' */
  codertarget_arduinobase_blo_n_T obj_b;/* '<Root>/Digital Output1' */
  codertarget_arduinobase_blo_n_T obj_h;/* '<Root>/Digital Output' */
  codertarget_arduinobase_int_n_T obj_go;/* '<Root>/PWM' */
} DW_motor_driver_T;

/* Parameters for system: '<Root>/Enabled Subsystem' */
struct P_EnabledSubsystem_motor_driv_T_ {
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/Constant1'
                                        */
};

/* Parameters (default storage) */
struct P_motor_driver_T_ {
  real_T AnalogInput_SampleTime;       /* Expression: -1
                                        * Referenced by: '<Root>/Analog Input'
                                        */
  real_T DigitalInput_SampleTime;      /* Expression: 0.1
                                        * Referenced by: '<Root>/Digital Input'
                                        */
  real_T DigitalInput1_SampleTime;     /* Expression: 0.1
                                        * Referenced by: '<Root>/Digital Input1'
                                        */
  real_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<Root>/Merge'
                                       */
  real_T Merge1_InitialOutput;       /* Computed Parameter: Merge1_InitialOutput
                                      * Referenced by: '<Root>/Merge1'
                                      */
  uint16_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<Root>/Gain'
                                        */
  P_EnabledSubsystem_motor_driv_T EnabledSubsystem1;/* '<Root>/Enabled Subsystem1' */
  P_EnabledSubsystem_motor_driv_T EnabledSubsystem;/* '<Root>/Enabled Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_motor_driver_T {
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
extern P_motor_driver_T motor_driver_P;

/* Block signals (default storage) */
extern B_motor_driver_T motor_driver_B;

/* Block states (default storage) */
extern DW_motor_driver_T motor_driver_DW;

/* External function called from main */
extern void motor_driver_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void motor_driver_initialize(void);
extern void motor_driver_step0(void);
extern void motor_driver_step1(void);
extern void motor_driver_terminate(void);

/* Real-time Model object */
extern RT_MODEL_motor_driver_T *const motor_driver_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 */

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
 * '<Root>' : 'motor_driver'
 * '<S1>'   : 'motor_driver/Enabled Subsystem'
 * '<S2>'   : 'motor_driver/Enabled Subsystem1'
 */
#endif                                 /* RTW_HEADER_motor_driver_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
