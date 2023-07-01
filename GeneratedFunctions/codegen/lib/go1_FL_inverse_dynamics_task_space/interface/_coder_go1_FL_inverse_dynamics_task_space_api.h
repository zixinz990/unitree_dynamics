//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_go1_FL_inverse_dynamics_task_space_api.h
//
// Code generation for function 'go1_FL_inverse_dynamics_task_space'
//

#ifndef _CODER_GO1_FL_INVERSE_DYNAMICS_TASK_SPACE_API_H
#define _CODER_GO1_FL_INVERSE_DYNAMICS_TASK_SPACE_API_H

// Include files
#include "emlrt.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
void go1_FL_inverse_dynamics_task_space(real_T q[3], real_T v[3],
                                        real_T a[3], real_T tau[3]);

void go1_FL_inverse_dynamics_task_space_api(const mxArray *const prhs[3],
                                            const mxArray **plhs);

void go1_FL_inverse_dynamics_task_space_atexit();

void go1_FL_inverse_dynamics_task_space_initialize();

void go1_FL_inverse_dynamics_task_space_terminate();

void go1_FL_inverse_dynamics_task_space_xil_shutdown();

void go1_FL_inverse_dynamics_task_space_xil_terminate();

void go1_FR_inverse_dynamics_task_space(real_T q[3], real_T v[3],
                                        real_T a[3], real_T tau[3]);

void go1_FR_inverse_dynamics_task_space_api(const mxArray *const prhs[3],
                                            const mxArray **plhs);

void go1_RL_inverse_dynamics_task_space(real_T q[3], real_T v[3],
                                        real_T a[3], real_T tau[3]);

void go1_RL_inverse_dynamics_task_space_api(const mxArray *const prhs[3],
                                            const mxArray **plhs);

void go1_RR_inverse_dynamics_task_space(real_T q[3], real_T v[3],
                                        real_T a[3], real_T tau[3]);

void go1_RR_inverse_dynamics_task_space_api(const mxArray *const prhs[3],
                                            const mxArray **plhs);

#endif
// End of code generation (_coder_go1_FL_inverse_dynamics_task_space_api.h)
