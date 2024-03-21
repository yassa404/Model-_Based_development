/*
 * File: untitled_private.h
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

#ifndef RTW_HEADER_untitled_private_h_
#define RTW_HEADER_untitled_private_h_
#include "rtwtypes.h"
#include "untitled.h"
#include "untitled_types.h"

extern real_T rt_roundd_snf(real_T u);
extern void unti_EnabledSubsystem3_Init(real_T *rty_Out1,
  DW_EnabledSubsystem3_untitled_T *localDW, P_EnabledSubsystem3_untitled_T
  *localP);
extern void unt_EnabledSubsystem3_Reset(DW_EnabledSubsystem3_untitled_T *localDW,
  P_EnabledSubsystem3_untitled_T *localP);
extern void u_EnabledSubsystem3_Disable(DW_EnabledSubsystem3_untitled_T *localDW);
extern void untitled_EnabledSubsystem3(boolean_T rtu_Enable, real_T *rty_Out1,
  DW_EnabledSubsystem3_untitled_T *localDW, P_EnabledSubsystem3_untitled_T
  *localP);
extern void untitled_IfActionSubsystem1(real_T *rty_One,
  P_IfActionSubsystem1_untitled_T *localP);

#endif                                 /* RTW_HEADER_untitled_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
