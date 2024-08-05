/*
 * File: APS_MoodsDetector0.h
 *
 * Code generated for Simulink model 'APS_MoodsDetector0'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Mon Jul 15 23:56:19 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_APS_MoodsDetector0_h_
#define RTW_HEADER_APS_MoodsDetector0_h_
#ifndef APS_MoodsDetector0_COMMON_INCLUDES_
#define APS_MoodsDetector0_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* APS_MoodsDetector0_COMMON_INCLUDES_ */

#ifndef DEFINED_TYPEDEF_FOR_App_Mode_
#define DEFINED_TYPEDEF_FOR_App_Mode_

typedef enum {
  normal = 0,                          /* Default value */
  Downgraded_Sen_1,
  Downgraded_Sen_2,
  Failure
} App_Mode;

#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T APP_bSensor_1_Failure;     /* '<Root>/APP_bSensor_1_Failure' */
  boolean_T APP_bSensor_2_Failure;     /* '<Root>/APP_bSensor_2_Failure' */
  real_T APP_bCoherency_Failure;       /* '<Root>/APP_bCoherency_Failure' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  App_Mode APP_stOperationMode;        /* '<Root>/APP_stOperationMode' */
} ExtY;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void APS_MoodsDetector0_initialize(void);
extern void APS_MoodsDetector0_step(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('APS_MoodsDetector/APS_MoodsDetector')    - opens subsystem APS_MoodsDetector/APS_MoodsDetector
 * hilite_system('APS_MoodsDetector/APS_MoodsDetector/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'APS_MoodsDetector'
 * '<S1>'   : 'APS_MoodsDetector/APS_MoodsDetector'
 */
#endif                                 /* RTW_HEADER_APS_MoodsDetector0_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
