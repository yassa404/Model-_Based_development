/*
 * File: motor_driver_data.c
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

#include "motor_driver.h"

/* Block parameters (default storage) */
P_motor_driver_T motor_driver_P = {
  /* Expression: -1
   * Referenced by: '<Root>/Analog Input'
   */
  -1.0,

  /* Expression: 0.1
   * Referenced by: '<Root>/Digital Input'
   */
  0.1,

  /* Expression: 0.1
   * Referenced by: '<Root>/Digital Input1'
   */
  0.1,

  /* Computed Parameter: Merge_InitialOutput
   * Referenced by: '<Root>/Merge'
   */
  0.0,

  /* Computed Parameter: Merge1_InitialOutput
   * Referenced by: '<Root>/Merge1'
   */
  0.0,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<Root>/Gain'
   */
  65026U,

  /* Start of '<Root>/Enabled Subsystem1' */
  {
    /* Expression: 1
     * Referenced by: '<S2>/Constant'
     */
    1.0,

    /* Expression: 0
     * Referenced by: '<S2>/Constant1'
     */
    0.0
  }
  ,

  /* End of '<Root>/Enabled Subsystem1' */

  /* Start of '<Root>/Enabled Subsystem' */
  {
    /* Expression: 1
     * Referenced by: '<S1>/Constant'
     */
    1.0,

    /* Expression: 0
     * Referenced by: '<S1>/Constant1'
     */
    0.0
  }
  /* End of '<Root>/Enabled Subsystem' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
