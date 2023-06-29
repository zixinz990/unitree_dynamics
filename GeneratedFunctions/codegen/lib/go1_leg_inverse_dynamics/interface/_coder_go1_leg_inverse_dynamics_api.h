//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_go1_leg_inverse_dynamics_api.h
//
// Code generation for function 'go1_FL_leg_inverse_dynamics'
//

#ifndef _CODER_GO1_LEG_INVERSE_DYNAMICS_API_H
#define _CODER_GO1_LEG_INVERSE_DYNAMICS_API_H

// Include files
#include "emlrt.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
void go1_FL_leg_inverse_dynamics(real_T in1[3], real_T in2[3], real_T in3[3],
                                 real_T taulist[3]);

void go1_FL_leg_inverse_dynamics_api(const mxArray *const prhs[3],
                                     const mxArray **plhs);

void go1_FR_leg_inverse_dynamics(real_T in1[3], real_T in2[3], real_T in3[3],
                                 real_T taulist[3]);

void go1_FR_leg_inverse_dynamics_api(const mxArray *const prhs[3],
                                     const mxArray **plhs);

void go1_RL_leg_inverse_dynamics(real_T in1[3], real_T in2[3], real_T in3[3],
                                 real_T taulist[3]);

void go1_RL_leg_inverse_dynamics_api(const mxArray *const prhs[3],
                                     const mxArray **plhs);

void go1_RR_leg_inverse_dynamics(real_T in1[3], real_T in2[3], real_T in3[3],
                                 real_T taulist[3]);

void go1_RR_leg_inverse_dynamics_api(const mxArray *const prhs[3],
                                     const mxArray **plhs);

void go1_leg_inverse_dynamics_atexit();

void go1_leg_inverse_dynamics_initialize();

void go1_leg_inverse_dynamics_terminate();

void go1_leg_inverse_dynamics_xil_shutdown();

void go1_leg_inverse_dynamics_xil_terminate();

#endif
// End of code generation (_coder_go1_leg_inverse_dynamics_api.h)
