/*
 * File: motor_driver.c
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
#include "rtwtypes.h"
#include "motor_driver_private.h"
#include "motor_driver_types.h"
#include <math.h>
#include "rt_nonfinite.h"

/* Block signals (default storage) */
B_motor_driver_T motor_driver_B;

/* Block states (default storage) */
DW_motor_driver_T motor_driver_DW;

/* Real-time model */
static RT_MODEL_motor_driver_T motor_driver_M_;
RT_MODEL_motor_driver_T *const motor_driver_M = &motor_driver_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void motor_driver_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(motor_driver_M, 1));
}

/*
 *         This function updates active task flag for each subrate
 *         and rate transition flags for tasks that exchange data.
 *         The function assumes rate-monotonic multitasking scheduler.
 *         The function must be called at model base rate so that
 *         the generated code self-manages all its subrates and rate
 *         transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (motor_driver_M->Timing.TaskCounters.TID[1])++;
  if ((motor_driver_M->Timing.TaskCounters.TID[1]) > 99) {/* Sample time: [0.1s, 0.0s] */
    motor_driver_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * Output and update for enable system:
 *    '<Root>/Enabled Subsystem'
 *    '<Root>/Enabled Subsystem1'
 */
void motor_driv_EnabledSubsystem(boolean_T rtu_Enable, real_T *rty_On, real_T
  *rty_Off, P_EnabledSubsystem_motor_driv_T *localP)
{
  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  if (rtu_Enable) {
    /* SignalConversion generated from: '<S1>/On' incorporates:
     *  Constant: '<S1>/Constant'
     */
    *rty_On = localP->Constant_Value;

    /* SignalConversion generated from: '<S1>/Off' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    *rty_Off = localP->Constant1_Value;
  }

  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem' */
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function for TID0 */
void motor_driver_step0(void)          /* Sample time: [0.001s, 0.0s] */
{
  {                                    /* Sample time: [0.001s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model step function for TID1 */
void motor_driver_step1(void)          /* Sample time: [0.1s, 0.0s] */
{
  MW_AnalogIn_ResultDataType_Type datatype_id;
  codertarget_arduinobase_int_n_T *obj_0;
  codertarget_arduinobase_inter_T *obj;
  real_T u0;
  uint16_T b_varargout_1;
  uint8_T tmp;
  boolean_T b_value;

  /* MATLABSystem: '<Root>/Analog Input' */
  if (motor_driver_DW.obj.SampleTime != motor_driver_P.AnalogInput_SampleTime) {
    motor_driver_DW.obj.SampleTime = motor_driver_P.AnalogInput_SampleTime;
  }

  obj = &motor_driver_DW.obj;
  obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(18UL);
  datatype_id = MW_ANALOGIN_UINT16;
  MW_AnalogInSingle_ReadResult
    (motor_driver_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE, &b_varargout_1,
     datatype_id);

  /* MATLABSystem: '<Root>/PWM' incorporates:
   *  Gain: '<Root>/Gain'
   *  MATLABSystem: '<Root>/Analog Input'
   */
  obj_0 = &motor_driver_DW.obj_go;
  obj_0->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(11UL);
  u0 = (real_T)((uint32_T)motor_driver_P.Gain_Gain * b_varargout_1) *
    3.814697265625E-6;
  if (!(u0 <= 255.0)) {
    u0 = 255.0;
  }

  MW_PWM_SetDutyCycle(motor_driver_DW.obj_go.PWMDriverObj.MW_PWM_HANDLE, u0);

  /* End of MATLABSystem: '<Root>/PWM' */

  /* MATLABSystem: '<Root>/Digital Input' */
  if (motor_driver_DW.obj_p.SampleTime != motor_driver_P.DigitalInput_SampleTime)
  {
    motor_driver_DW.obj_p.SampleTime = motor_driver_P.DigitalInput_SampleTime;
  }

  b_value = readDigitalPin(3);

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem' */
  motor_driv_EnabledSubsystem(b_value, &motor_driver_B.Merge,
    &motor_driver_B.Merge1, &motor_driver_P.EnabledSubsystem);

  /* End of MATLABSystem: '<Root>/Digital Input' */
  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem' */

  /* MATLABSystem: '<Root>/Digital Input1' */
  if (motor_driver_DW.obj_g.SampleTime !=
      motor_driver_P.DigitalInput1_SampleTime) {
    motor_driver_DW.obj_g.SampleTime = motor_driver_P.DigitalInput1_SampleTime;
  }

  b_value = readDigitalPin(4);

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem1' */
  motor_driv_EnabledSubsystem(b_value, &motor_driver_B.Merge1,
    &motor_driver_B.Merge, &motor_driver_P.EnabledSubsystem1);

  /* End of MATLABSystem: '<Root>/Digital Input1' */
  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem1' */

  /* MATLABSystem: '<Root>/Digital Output' */
  u0 = rt_roundd_snf(motor_driver_B.Merge);
  if (u0 < 256.0) {
    if (u0 >= 0.0) {
      tmp = (uint8_T)u0;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  writeDigitalPin(9, tmp);

  /* End of MATLABSystem: '<Root>/Digital Output' */

  /* MATLABSystem: '<Root>/Digital Output1' */
  u0 = rt_roundd_snf(motor_driver_B.Merge1);
  if (u0 < 256.0) {
    if (u0 >= 0.0) {
      tmp = (uint8_T)u0;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  writeDigitalPin(10, tmp);

  /* End of MATLABSystem: '<Root>/Digital Output1' */
}

/* Model initialize function */
void motor_driver_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    codertarget_arduinobase_int_n_T *obj_0;
    codertarget_arduinobase_inter_T *obj;

    /* SystemInitialize for Merge: '<Root>/Merge' */
    motor_driver_B.Merge = motor_driver_P.Merge_InitialOutput;

    /* SystemInitialize for Merge: '<Root>/Merge1' */
    motor_driver_B.Merge1 = motor_driver_P.Merge1_InitialOutput;

    /* Start for MATLABSystem: '<Root>/Analog Input' */
    motor_driver_DW.obj.matlabCodegenIsDeleted = false;
    motor_driver_DW.obj.SampleTime = motor_driver_P.AnalogInput_SampleTime;
    obj = &motor_driver_DW.obj;
    motor_driver_DW.obj.isInitialized = 1L;
    obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(18UL);
    motor_driver_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/PWM' */
    motor_driver_DW.obj_go.matlabCodegenIsDeleted = false;
    obj_0 = &motor_driver_DW.obj_go;
    motor_driver_DW.obj_go.isInitialized = 1L;
    obj_0->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_Open(11UL, 0.0, 0.0);
    motor_driver_DW.obj_go.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Input' */
    motor_driver_DW.obj_p.matlabCodegenIsDeleted = false;
    motor_driver_DW.obj_p.SampleTime = motor_driver_P.DigitalInput_SampleTime;
    motor_driver_DW.obj_p.isInitialized = 1L;
    digitalIOSetup(3, 0);
    motor_driver_DW.obj_p.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Input1' */
    motor_driver_DW.obj_g.matlabCodegenIsDeleted = false;
    motor_driver_DW.obj_g.SampleTime = motor_driver_P.DigitalInput1_SampleTime;
    motor_driver_DW.obj_g.isInitialized = 1L;
    digitalIOSetup(4, 0);
    motor_driver_DW.obj_g.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output' */
    motor_driver_DW.obj_h.matlabCodegenIsDeleted = false;
    motor_driver_DW.obj_h.isInitialized = 1L;
    digitalIOSetup(9, 1);
    motor_driver_DW.obj_h.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output1' */
    motor_driver_DW.obj_b.matlabCodegenIsDeleted = false;
    motor_driver_DW.obj_b.isInitialized = 1L;
    digitalIOSetup(10, 1);
    motor_driver_DW.obj_b.isSetupComplete = true;
  }
}

/* Model terminate function */
void motor_driver_terminate(void)
{
  codertarget_arduinobase_int_n_T *obj_0;
  codertarget_arduinobase_inter_T *obj;

  /* Terminate for MATLABSystem: '<Root>/Analog Input' */
  obj = &motor_driver_DW.obj;
  if (!motor_driver_DW.obj.matlabCodegenIsDeleted) {
    motor_driver_DW.obj.matlabCodegenIsDeleted = true;
    if ((motor_driver_DW.obj.isInitialized == 1L) &&
        motor_driver_DW.obj.isSetupComplete) {
      obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(18UL);
      MW_AnalogIn_Close(motor_driver_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Analog Input' */

  /* Terminate for MATLABSystem: '<Root>/PWM' */
  obj_0 = &motor_driver_DW.obj_go;
  if (!motor_driver_DW.obj_go.matlabCodegenIsDeleted) {
    motor_driver_DW.obj_go.matlabCodegenIsDeleted = true;
    if ((motor_driver_DW.obj_go.isInitialized == 1L) &&
        motor_driver_DW.obj_go.isSetupComplete) {
      obj_0->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(11UL);
      MW_PWM_SetDutyCycle(motor_driver_DW.obj_go.PWMDriverObj.MW_PWM_HANDLE, 0.0);
      obj_0->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(11UL);
      MW_PWM_Close(motor_driver_DW.obj_go.PWMDriverObj.MW_PWM_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/PWM' */

  /* Terminate for MATLABSystem: '<Root>/Digital Input' */
  if (!motor_driver_DW.obj_p.matlabCodegenIsDeleted) {
    motor_driver_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Input' */

  /* Terminate for MATLABSystem: '<Root>/Digital Input1' */
  if (!motor_driver_DW.obj_g.matlabCodegenIsDeleted) {
    motor_driver_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Input1' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output' */
  if (!motor_driver_DW.obj_h.matlabCodegenIsDeleted) {
    motor_driver_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output1' */
  if (!motor_driver_DW.obj_b.matlabCodegenIsDeleted) {
    motor_driver_DW.obj_b.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
