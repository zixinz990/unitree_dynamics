//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// main.cpp
//
// Code generation for function 'main'
//

/*************************************************************************/
/* This automatically generated example C++ main file shows how to call  */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

// Include files
#include "main.h"
#include "go1_FL_inverse_dynamics_task_space.h"
#include "go1_FL_inverse_dynamics_task_space_terminate.h"
#include "go1_FR_inverse_dynamics_task_space.h"
#include "go1_RL_inverse_dynamics_task_space.h"
#include "go1_RR_inverse_dynamics_task_space.h"

// Function Declarations
static void argInit_3x1_real_T(double result[3]);

static double argInit_real_T();

// Function Definitions
static void argInit_3x1_real_T(double result[3])
{
  // Loop over the array to initialize each element.
  for (int idx0{0}; idx0 < 3; idx0++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx0] = argInit_real_T();
  }
}

static double argInit_real_T()
{
  return 0.0;
}

int main(int, char **)
{
  // The initialize function is being called automatically from your entry-point
  // function. So, a call to initialize is not included here. Invoke the
  // entry-point functions.
  // You can call entry-point functions multiple times.
  main_go1_FL_inverse_dynamics_task_space();
  main_go1_FR_inverse_dynamics_task_space();
  main_go1_RL_inverse_dynamics_task_space();
  main_go1_RR_inverse_dynamics_task_space();
  // Terminate the application.
  // You do not need to do this more than one time.
  go1_FL_inverse_dynamics_task_space_terminate();
  return 0;
}

void main_go1_FL_inverse_dynamics_task_space()
{
  double in1_tmp[3];
  double tau[3];
  // Initialize function 'go1_FL_inverse_dynamics_task_space' input arguments.
  // Initialize function input argument 'q'.
  argInit_3x1_real_T(in1_tmp);
  // Initialize function input argument 'v'.
  // Initialize function input argument 'a'.
  // Call the entry-point 'go1_FL_inverse_dynamics_task_space'.
  go1_FL_inverse_dynamics_task_space(in1_tmp, in1_tmp, in1_tmp, tau);
}

void main_go1_FR_inverse_dynamics_task_space()
{
  double in1_tmp[3];
  double tau[3];
  // Initialize function 'go1_FR_inverse_dynamics_task_space' input arguments.
  // Initialize function input argument 'q'.
  argInit_3x1_real_T(in1_tmp);
  // Initialize function input argument 'v'.
  // Initialize function input argument 'a'.
  // Call the entry-point 'go1_FR_inverse_dynamics_task_space'.
  go1_FR_inverse_dynamics_task_space(in1_tmp, in1_tmp, in1_tmp, tau);
}

void main_go1_RL_inverse_dynamics_task_space()
{
  double in1_tmp[3];
  double tau[3];
  // Initialize function 'go1_RL_inverse_dynamics_task_space' input arguments.
  // Initialize function input argument 'q'.
  argInit_3x1_real_T(in1_tmp);
  // Initialize function input argument 'v'.
  // Initialize function input argument 'a'.
  // Call the entry-point 'go1_RL_inverse_dynamics_task_space'.
  go1_RL_inverse_dynamics_task_space(in1_tmp, in1_tmp, in1_tmp, tau);
}

void main_go1_RR_inverse_dynamics_task_space()
{
  double in1_tmp[3];
  double tau[3];
  // Initialize function 'go1_RR_inverse_dynamics_task_space' input arguments.
  // Initialize function input argument 'q'.
  argInit_3x1_real_T(in1_tmp);
  // Initialize function input argument 'v'.
  // Initialize function input argument 'a'.
  // Call the entry-point 'go1_RR_inverse_dynamics_task_space'.
  go1_RR_inverse_dynamics_task_space(in1_tmp, in1_tmp, in1_tmp, tau);
}

// End of code generation (main.cpp)
