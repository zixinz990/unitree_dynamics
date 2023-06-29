//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_go1_leg_inverse_dynamics_mex.cpp
//
// Code generation for function 'go1_FL_leg_inverse_dynamics'
//

// Include files
#include "_coder_go1_leg_inverse_dynamics_mex.h"
#include "_coder_go1_leg_inverse_dynamics_api.h"

// Function Definitions
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  static const char_T *emlrtEntryPoints[4]{
      "go1_FL_leg_inverse_dynamics", "go1_FR_leg_inverse_dynamics",
      "go1_RL_leg_inverse_dynamics", "go1_RR_leg_inverse_dynamics"};
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexAtExit(&go1_leg_inverse_dynamics_atexit);
  // Module initialization.
  go1_leg_inverse_dynamics_initialize();
  st.tls = emlrtRootTLSGlobal;
  // Dispatch the entry-point.
  switch (emlrtGetEntryPointIndexR2016a(
      &st, nrhs, &prhs[0], (const char_T **)&emlrtEntryPoints[0], 4)) {
  case 0:
    unsafe_go1_FL_leg_inverse_dynamics_mexFunction(nlhs, plhs, nrhs - 1,
                                                   &prhs[1]);
    break;
  case 1:
    unsafe_go1_FR_leg_inverse_dynamics_mexFunction(nlhs, plhs, nrhs - 1,
                                                   &prhs[1]);
    break;
  case 2:
    unsafe_go1_RL_leg_inverse_dynamics_mexFunction(nlhs, plhs, nrhs - 1,
                                                   &prhs[1]);
    break;
  case 3:
    unsafe_go1_RR_leg_inverse_dynamics_mexFunction(nlhs, plhs, nrhs - 1,
                                                   &prhs[1]);
    break;
  }
  // Module termination.
  go1_leg_inverse_dynamics_terminate();
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           nullptr, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void unsafe_go1_FL_leg_inverse_dynamics_mexFunction(int32_T nlhs,
                                                    mxArray *plhs[1],
                                                    int32_T nrhs,
                                                    const mxArray *prhs[3])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        27, "go1_FL_leg_inverse_dynamics");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 27,
                        "go1_FL_leg_inverse_dynamics");
  }
  // Call the function.
  go1_FL_leg_inverse_dynamics_api(prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void unsafe_go1_FR_leg_inverse_dynamics_mexFunction(int32_T nlhs,
                                                    mxArray *plhs[1],
                                                    int32_T nrhs,
                                                    const mxArray *prhs[3])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        27, "go1_FR_leg_inverse_dynamics");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 27,
                        "go1_FR_leg_inverse_dynamics");
  }
  // Call the function.
  go1_FR_leg_inverse_dynamics_api(prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void unsafe_go1_RL_leg_inverse_dynamics_mexFunction(int32_T nlhs,
                                                    mxArray *plhs[1],
                                                    int32_T nrhs,
                                                    const mxArray *prhs[3])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        27, "go1_RL_leg_inverse_dynamics");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 27,
                        "go1_RL_leg_inverse_dynamics");
  }
  // Call the function.
  go1_RL_leg_inverse_dynamics_api(prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void unsafe_go1_RR_leg_inverse_dynamics_mexFunction(int32_T nlhs,
                                                    mxArray *plhs[1],
                                                    int32_T nrhs,
                                                    const mxArray *prhs[3])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        27, "go1_RR_leg_inverse_dynamics");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 27,
                        "go1_RR_leg_inverse_dynamics");
  }
  // Call the function.
  go1_RR_leg_inverse_dynamics_api(prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

// End of code generation (_coder_go1_leg_inverse_dynamics_mex.cpp)