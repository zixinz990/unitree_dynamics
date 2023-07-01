//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_go1_FL_inverse_dynamics_task_space_api.cpp
//
// Code generation for function 'go1_FL_inverse_dynamics_task_space'
//

// Include files
#include "_coder_go1_FL_inverse_dynamics_task_space_api.h"
#include "_coder_go1_FL_inverse_dynamics_task_space_mex.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{nullptr};

emlrtContext emlrtContextGlobal{
    true,                                                 // bFirstTime
    false,                                                // bInitialized
    131627U,                                              // fVersionInfo
    nullptr,                                              // fErrorFunction
    "go1_FL_inverse_dynamics_task_space",                 // fFunctionName
    nullptr,                                              // fRTCallStack
    false,                                                // bDebugMode
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, // fSigWrd
    nullptr                                               // fSigMem
};

// Function Declarations
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3];

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *q,
                                 const char_T *identifier))[3];

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId))[3];

static const mxArray *emlrt_marshallOut(const real_T u[3]);

// Function Definitions
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3]
{
  static const int32_T dims{3};
  real_T(*ret)[3];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                          (const void *)&dims);
  ret = (real_T(*)[3])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *q,
                                 const char_T *identifier))[3]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[3];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(q), &thisId);
  emlrtDestroyArray(&q);
  return y;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId))[3]
{
  real_T(*y)[3];
  y = b_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[3])
{
  static const int32_T i{0};
  static const int32_T i1{3};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &i1, 1);
  emlrtAssign(&y, m);
  return y;
}

void go1_FL_inverse_dynamics_task_space_api(const mxArray *const prhs[3],
                                            const mxArray **plhs)
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  real_T(*q)[3];
  real_T(*v)[3];
  real_T(*a)[3];
  real_T(*tau)[3];
  st.tls = emlrtRootTLSGlobal;
  tau = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  // Marshall function inputs
  q = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "q");
  v = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "v");
  a = emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "a");
  // Invoke the target function
  go1_FL_inverse_dynamics_task_space(*q, *v, *a, *tau);
  // Marshall function outputs
  *plhs = emlrt_marshallOut(*tau);
}

void go1_FL_inverse_dynamics_task_space_atexit()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  go1_FL_inverse_dynamics_task_space_xil_terminate();
  go1_FL_inverse_dynamics_task_space_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void go1_FL_inverse_dynamics_task_space_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

void go1_FL_inverse_dynamics_task_space_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void go1_FR_inverse_dynamics_task_space_api(const mxArray *const prhs[3],
                                            const mxArray **plhs)
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  real_T(*q)[3];
  real_T(*v)[3];
  real_T(*a)[3];
  real_T(*tau)[3];
  st.tls = emlrtRootTLSGlobal;
  tau = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  // Marshall function inputs
  q = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "q");
  v = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "v");
  a = emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "a");
  // Invoke the target function
  go1_FR_inverse_dynamics_task_space(*q, *v, *a, *tau);
  // Marshall function outputs
  *plhs = emlrt_marshallOut(*tau);
}

void go1_RL_inverse_dynamics_task_space_api(const mxArray *const prhs[3],
                                            const mxArray **plhs)
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  real_T(*q)[3];
  real_T(*v)[3];
  real_T(*a)[3];
  real_T(*tau)[3];
  st.tls = emlrtRootTLSGlobal;
  tau = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  // Marshall function inputs
  q = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "q");
  v = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "v");
  a = emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "a");
  // Invoke the target function
  go1_RL_inverse_dynamics_task_space(*q, *v, *a, *tau);
  // Marshall function outputs
  *plhs = emlrt_marshallOut(*tau);
}

void go1_RR_inverse_dynamics_task_space_api(const mxArray *const prhs[3],
                                            const mxArray **plhs)
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  real_T(*q)[3];
  real_T(*v)[3];
  real_T(*a)[3];
  real_T(*tau)[3];
  st.tls = emlrtRootTLSGlobal;
  tau = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  // Marshall function inputs
  q = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "q");
  v = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "v");
  a = emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "a");
  // Invoke the target function
  go1_RR_inverse_dynamics_task_space(*q, *v, *a, *tau);
  // Marshall function outputs
  *plhs = emlrt_marshallOut(*tau);
}

// End of code generation (_coder_go1_FL_inverse_dynamics_task_space_api.cpp)
