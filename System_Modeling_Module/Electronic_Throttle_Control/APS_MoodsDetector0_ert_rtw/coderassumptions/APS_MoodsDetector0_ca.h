/*
 * File: APS_MoodsDetector0_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef APS_MOODSDETECTOR0_CA_H
#define APS_MOODSDETECTOR0_CA_H

/* preprocessor validation checks */
#include "APS_MoodsDetector0_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_APS_MoodsDetector0_HWRes;
extern CA_PWS_TestResults CA_APS_MoodsDetector0_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_APS_MoodsDetector0_ExpHW;
extern CA_HWImpl CA_APS_MoodsDetector0_ActHW;

/* entry point function to run tests */
void APS_MoodsDetector0_caRunTests(void);

#endif                                 /* APS_MOODSDETECTOR0_CA_H */
