/*
 * File: untitled1_private.h
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

#ifndef RTW_HEADER_untitled1_private_h_
#define RTW_HEADER_untitled1_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "untitled1.h"
#include "untitled1_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

extern real_T rt_roundd_snf(real_T u);
extern void untitled1_off1(real_T *rty_Out1, P_off1_untitled1_T *localP);

#endif                                 /* RTW_HEADER_untitled1_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
