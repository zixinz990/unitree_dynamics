//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_go1_FL_inverse_dynamics_task_space_mex.h
//
// Code generation for function 'go1_FL_inverse_dynamics_task_space'
//

#ifndef _CODER_GO1_FL_INVERSE_DYNAMICS_TASK_SPACE_MEX_H
#define _CODER_GO1_FL_INVERSE_DYNAMICS_TASK_SPACE_MEX_H

// Include files
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"

// Function Declarations
MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS();

void unsafe_go1_FL_inverse_dynamics_task_space_mexFunction(
    int32_T nlhs, mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[3]);

void unsafe_go1_FR_inverse_dynamics_task_space_mexFunction(
    int32_T nlhs, mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[3]);

void unsafe_go1_RL_inverse_dynamics_task_space_mexFunction(
    int32_T nlhs, mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[3]);

void unsafe_go1_RR_inverse_dynamics_task_space_mexFunction(
    int32_T nlhs, mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[3]);

#endif
// End of code generation (_coder_go1_FL_inverse_dynamics_task_space_mex.h)
