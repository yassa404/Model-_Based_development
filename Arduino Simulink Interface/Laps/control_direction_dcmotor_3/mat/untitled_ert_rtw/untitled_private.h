/*
 * File: untitled_private.h
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

#ifndef RTW_HEADER_untitled_private_h_
#define RTW_HEADER_untitled_private_h_
#include "rtwtypes.h"
#include "untitled.h"
#include "untitled_types.h"

extern void untit_EnabledSubsystem_Init(real_T *rty_Out1,
  DW_EnabledSubsystem_untitled_T *localDW, P_EnabledSubsystem_untitled_T *localP);
extern void unti_EnabledSubsystem_Reset(DW_EnabledSubsystem_untitled_T *localDW,
  P_EnabledSubsystem_untitled_T *localP);
extern void un_EnabledSubsystem_Disable(DW_EnabledSubsystem_untitled_T *localDW);
extern void untitled_EnabledSubsystem(boolean_T rtu_Enable, real_T *rty_Out1,
  DW_EnabledSubsystem_untitled_T *localDW, P_EnabledSubsystem_untitled_T *localP);
extern void unti_IfActionSubsystem_Init(boolean_T *rty_Out1,
  DW_IfActionSubsystem_untitled_T *localDW, P_IfActionSubsystem_untitled_T
  *localP);
extern void untitled_IfActionSubsystem(boolean_T *rty_Out1,
  DW_IfActionSubsystem_untitled_T *localDW);

#endif                                 /* RTW_HEADER_untitled_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
