/*
 * File: untitled_data.c
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

/* Block parameters (default storage) */
P_untitled_T untitled_P = {
  /* Expression: 0.1
   * Referenced by: '<Root>/Digital Input'
   */
  0.1,

  /* Expression: 0.1
   * Referenced by: '<Root>/Digital Input1'
   */
  0.1,

  /* Start of '<Root>/If Action Subsystem1' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S4>/Out1'
     */
    false,

    /* Computed Parameter: UnitDelay_InitialCondition
     * Referenced by: '<S4>/Unit Delay'
     */
    false
  }
  ,

  /* End of '<Root>/If Action Subsystem1' */

  /* Start of '<Root>/If Action Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S3>/Out1'
     */
    false,

    /* Computed Parameter: UnitDelay_InitialCondition
     * Referenced by: '<S3>/Unit Delay'
     */
    false
  }
  ,

  /* End of '<Root>/If Action Subsystem' */

  /* Start of '<Root>/Enabled Subsystem1' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S2>/Out1'
     */
    0.0,

    /* Expression: 1
     * Referenced by: '<S2>/Constant'
     */
    1.0,

    /* Expression: 0
     * Referenced by: '<S2>/Unit Delay'
     */
    0.0
  }
  ,

  /* End of '<Root>/Enabled Subsystem1' */

  /* Start of '<Root>/Enabled Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S1>/Out1'
     */
    0.0,

    /* Expression: 1
     * Referenced by: '<S1>/Constant'
     */
    1.0,

    /* Expression: 0
     * Referenced by: '<S1>/Unit Delay'
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
