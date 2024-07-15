/*
 * File: APS_MoodsDetector0.c
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

#include "APS_MoodsDetector0.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void APS_MoodsDetector0_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/APS_MoodsDetector' */
  /* Switch: '<S1>/Switch' incorporates:
   *  Inport: '<Root>/APP_bCoherency_Failure'
   */
  if (rtU.APP_bCoherency_Failure != 0.0) {
    /* Switch: '<S1>/Switch1' incorporates:
     *  Inport: '<Root>/APP_bSensor_1_Failure'
     *  Inport: '<Root>/APP_bSensor_2_Failure'
     *  Logic: '<S1>/AND'
     *  Logic: '<S1>/AND1'
     *  Logic: '<S1>/NOT'
     *  Logic: '<S1>/NOT1'
     *  Switch: '<S1>/Switch2'
     */
    if ((!rtU.APP_bSensor_1_Failure) && rtU.APP_bSensor_2_Failure) {
      /* Outport: '<Root>/APP_stOperationMode' incorporates:
       *  Constant: '<S1>/Failure_mode_sen_1'
       */
      rtY.APP_stOperationMode = Downgraded_Sen_1;
    } else if ((!rtU.APP_bSensor_2_Failure) && rtU.APP_bSensor_1_Failure) {
      /* Switch: '<S1>/Switch2' incorporates:
       *  Constant: '<S1>/Failure_mode_sen_2'
       *  Outport: '<Root>/APP_stOperationMode'
       */
      rtY.APP_stOperationMode = Downgraded_Sen_2;
    } else {
      /* Outport: '<Root>/APP_stOperationMode' incorporates:
       *  Constant: '<S1>/Failure_mode_sen_3'
       *  Switch: '<S1>/Switch2'
       */
      rtY.APP_stOperationMode = Failure;
    }

    /* End of Switch: '<S1>/Switch1' */
  } else {
    /* Outport: '<Root>/APP_stOperationMode' incorporates:
     *  Constant: '<S1>/normal'
     */
    rtY.APP_stOperationMode = normal;
  }

  /* End of Switch: '<S1>/Switch' */
  /* End of Outputs for SubSystem: '<Root>/APS_MoodsDetector' */
}

/* Model initialize function */
void APS_MoodsDetector0_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
