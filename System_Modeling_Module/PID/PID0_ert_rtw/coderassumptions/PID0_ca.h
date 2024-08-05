/*
 * File: PID0_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef PID0_CA_H
#define PID0_CA_H

/* preprocessor validation checks */
#include "PID0_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_PID0_HWRes;
extern CA_PWS_TestResults CA_PID0_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_PID0_ExpHW;
extern CA_HWImpl CA_PID0_ActHW;

/* entry point function to run tests */
void PID0_caRunTests(void);

#endif                                 /* PID0_CA_H */
