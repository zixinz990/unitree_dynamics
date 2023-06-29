//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// go1_RR_leg_inverse_dynamics.cpp
//
// Code generation for function 'go1_RR_leg_inverse_dynamics'
//

// Include files
#include "go1_RR_leg_inverse_dynamics.h"
#include <cmath>

// Function Definitions
void go1_RR_leg_inverse_dynamics(const double in1[3], const double in2[3],
                                 const double in3[3], double taulist[3])
{
  double b_t185_tmp;
  double b_t200_tmp;
  double t11;
  double t110;
  double t110_tmp;
  double t112;
  double t113;
  double t120;
  double t13;
  double t135;
  double t136;
  double t14;
  double t148;
  double t16;
  double t162_tmp;
  double t168;
  double t17;
  double t170;
  double t171_tmp;
  double t178;
  double t185;
  double t185_tmp;
  double t186;
  double t191;
  double t192_tmp;
  double t194;
  double t196;
  double t20;
  double t200;
  double t200_tmp;
  double t203;
  double t203_tmp;
  double t206;
  double t212;
  double t22;
  double t223;
  double t224;
  double t228_tmp;
  double t23;
  double t231;
  double t232;
  double t234;
  double t239;
  double t24;
  double t241;
  double t248;
  double t249;
  double t25;
  double t251;
  double t273;
  double t273_tmp;
  double t27_tmp;
  double t280;
  double t281;
  double t282_tmp;
  double t287;
  double t290;
  double t291;
  double t301;
  double t301_tmp;
  double t303;
  double t307;
  double t31;
  double t310;
  double t314;
  double t316;
  double t317;
  double t32;
  double t320_tmp;
  double t322;
  double t323;
  double t324;
  double t325;
  double t32_tmp;
  double t334_tmp;
  double t35;
  double t36;
  double t41;
  double t42;
  double t43;
  double t48;
  double t49;
  double t5;
  double t52;
  double t56;
  double t56_tmp;
  double t6;
  double t61;
  double t67;
  double t7;
  double t72;
  double t8;
  double t82;
  double t82_tmp;
  double t86;
  double t86_tmp;
  double t97_tmp;
  double t99;
  // go1_RR_leg_inverse_dynamics
  //     TAULIST = go1_RR_leg_inverse_dynamics(IN1,IN2,IN3)
  //     This function was generated by the Symbolic Math Toolbox version 9.2.
  //     29-Jun-2023 11:44:05
  t5 = std::abs(in1[0]);
  t6 = std::abs(in1[1]);
  t7 = std::abs(in1[2]);
  t8 = in2[1] + in2[2];
  t16 = in1[1] * in1[1];
  t17 = in1[2] * in1[2];
  t61 = in2[1] * 0.003342;
  t67 = in2[1] * 0.03077492;
  t72 = in2[2] * 2.55679E-7;
  t148 = in2[2] * 0.01585441609;
  t11 = std::cos(t7);
  t13 = std::sin(t6);
  t14 = std::sin(t7);
  t20 = 1.0 / t5;
  t22 = 1.0 / t6;
  t24 = 1.0 / t7;
  t23 = t22 * t22;
  t25 = t24 * t24;
  t27_tmp = std::cos(t6) - 1.0;
  t31 = in3[0] * in1[1] * t13 * t22;
  t32_tmp = in2[0] * in2[1];
  t32 = t32_tmp * in1[1] * t13 * t22;
  t82 = in2[0] * in1[1];
  t43 = t82 * in1[2] * t13 * t14 * t22 * t24;
  t86_tmp = t82 * t13 * t22;
  t86 = t86_tmp * 0.033451;
  t97_tmp = in1[0] * std::sin(t5) * t20;
  t35 = t16 * t23 * t27_tmp;
  t36 = t17 * t25 * (t11 - 1.0);
  t113 = t43 * 0.016646;
  t82_tmp = in1[0] * in1[0] * (t20 * t20) * (std::cos(t5) - 1.0);
  t82 = (in3[0] * 0.008752 + t82_tmp * 9.81) + 9.81;
  t5 = t35 * 0.07189799999999999;
  t99 = t36 * 0.016646;
  t186 = in2[1] * 0.033451 - t86_tmp * 0.063146;
  t196 = t67 - t86_tmp * 0.058094319999999991;
  t41 = in3[0] * (t35 + 1.0);
  t42 = t32_tmp * (t35 + 1.0);
  t48 = t86_tmp * (t36 + 1.0);
  t49 = in2[0] * in1[2] * t14 * t24 * (t35 + 1.0);
  t56_tmp = in2[0] * (t35 + 1.0);
  t56 = t56_tmp * (t36 + 1.0);
  t110_tmp = in1[1] * t13 * t22;
  t110 = t110_tmp * t82;
  t112 = t56_tmp * 0.003342;
  t135 = (t35 + 1.0) * t82;
  t170 = t36 * 0.016646 + 0.016646;
  t203_tmp = in1[2] * t14 * t24;
  t203 = t203_tmp * t186;
  t212 = (t36 + 1.0) * t186;
  t52 = t31 + t42;
  t120 = t48 + t49;
  t136 = t49 * 0.016646;
  t168 = in3[0] * (t5 + 0.07189799999999999);
  t20 = in2[0] * (t5 + 0.07189799999999999);
  t185_tmp = t32 - t41;
  b_t185_tmp = (t36 + 1.0) * t185_tmp;
  t185 = b_t185_tmp * 2.55679E-7;
  t191 = t86_tmp * (t99 + 0.016646);
  t200_tmp = t43 - t56;
  b_t200_tmp = in2[2] * t200_tmp;
  t200 = b_t200_tmp * -2.077264E-6;
  t206 = t56_tmp * (t99 + 0.016646);
  t231 = (in2[1] * 0.004485671726 + t86_tmp * 0.000572001265) +
         t56_tmp * 5.7496807E-5;
  t234 = (in2[1] * 5.7496807E-5 - t86_tmp * 0.000218457134) +
         t56_tmp * 0.004431760472;
  t162_tmp = t203_tmp * t52;
  t171_tmp = (t36 + 1.0) * t52;
  t178 = t171_tmp * 2.077264E-6;
  t192_tmp = in2[2] * t120;
  t194 = t72 * t120;
  t228_tmp = in2[1] * (t86 + t112);
  t232 = (in2[1] * 0.000572001265 + t86_tmp * 0.000740309489) -
         t56_tmp * 0.000218457134;
  t32_tmp = t17 * t24 * (t11 - 1.0);
  t5 = in1[2] * (t7 + -t17 * t25 * (t7 - t14));
  t249 = ((-(t203_tmp * 0.009539) + t36 * 0.296244) +
          -t24 * (t32_tmp * 0.116695 - t5 * 0.006197)) +
         0.296244;
  t281 = ((((in2[1] * 2.077264E-6 + in2[2] * 2.077264E-6) - t43 * 7.117814E-6) +
           t48 * 2.4787446E-5) +
          t49 * 2.4787446E-5) +
         t56 * 7.117814E-6;
  t223 = t56_tmp * 0.008752 - t20;
  t248 = ((in3[1] * 0.003342 + t32 * 0.063146) + t135) - t168;
  t25 = in2[1] * t249;
  t11 = t16 * t22 * t27_tmp;
  t82 = in1[1] * (t6 + -t16 * t23 * (t6 - t13));
  t280 = ((((in2[1] * 0.001100428748 + in2[2] * 0.001100428748) +
            t43 * 2.55679E-7) +
           t48 * 2.077264E-6) +
          t49 * 2.077264E-6) -
         t56 * 2.55679E-7;
  t282_tmp = ((((in2[1] * 2.55679E-7 + t72) + t43 * 0.001088793059) -
               t48 * 7.117814E-6) -
              t49 * 7.117814E-6) -
             t56 * 0.001088793059;
  t290 = t281 * t200_tmp;
  t224 = in2[1] * t223;
  t239 = t61 + t223;
  t241 = (t56_tmp * 0.00805184 + in2[1] * 0.00307464) - t20 * 0.92;
  t251 = ((t203_tmp * 0.296244 + t36 * 0.009539) -
          t24 * (t32_tmp * 0.006197 + t5 * 0.116695)) +
         0.009539;
  t273_tmp = in2[2] * (((t43 * 0.006197 + t48 * 0.116695) + t49 * 0.116695) -
                       t56 * 0.006197);
  t273 = t273_tmp * 0.135862;
  t287 = -(t120 * t282_tmp);
  t17 = t203_tmp * t239;
  t5 = (t36 + 1.0) * t239;
  t20 = in2[1] * t251;
  t14 = ((in3[1] * 0.033451 - t31 * 0.07189799999999999) + t110) + t224;
  t291 = t203_tmp * t251 + (t36 + 1.0) * t249;
  t307 = ((((in2[2] * 0.116695 - t136) - t191) + t212) + t17) + t25;
  t7 = t56_tmp * t291;
  t301_tmp = t110_tmp * (((-(t110_tmp * 0.033349) + t35 * 0.008999) +
                          -t22 * (t11 * 0.003342 - t82 * 0.033451)) +
                         0.008999) -
             (t35 + 1.0) * (((t110_tmp * 0.008999 + t35 * 0.033349) -
                             t22 * (t11 * 0.033451 + t82 * 0.003342)) +
                            0.033349);
  t301 = in2[0] * 0.000102 + -in2[0] * t301_tmp;
  t32_tmp = in2[0] * t301_tmp;
  t303 = in2[0] * 9.384E-5 + t32_tmp * -0.92;
  t82 = ((((in2[2] * 0.006197 - t113) + t203) + t206) - t5) + t20;
  t310 = ((((in2[1] * 0.006197 + t113) - t203) - t206) + t5) - t20;
  t11 = ((((t148 - t49 * 0.002261558852) - t191 * 0.135862) + t212 * 0.135862) +
         t17 * 0.135862) +
        t25 * 0.135862;
  t314 = t8 * t11;
  t5 = ((((in2[2] * 0.000841936814 - t43 * 0.002261558852) + t203 * 0.135862) +
         t206 * 0.135862) -
        t5 * 0.135862) +
       t20 * 0.135862;
  t317 = t120 * t11;
  t320_tmp = t203_tmp * t249 - (t36 + 1.0) * t251;
  t20 = (-in2[0] * in1[1] * t13 * t22 * t320_tmp + t7) + t301;
  t322 = t82 * t11;
  t316 = t8 * t5;
  t324 = ((in2[0] * 1.3857924E-5 + t32_tmp * -0.135862) +
          t86_tmp * t320_tmp * -0.135862) +
         t7 * 0.135862;
  t323 = -(t307 * t5);
  t325 = t120 * t324;
  t334_tmp = in3[1] * t251;
  t113 = in2[2] * (((((in2[1] * 0.116695 + t136) + t191) - t212) - t17) - t25);
  t43 = (t36 + 1.0) * t248;
  t13 = t170 * t185_tmp;
  t22 = t203_tmp * t14;
  t191 = (((((((-(in3[2] * 0.000841936814) + t162_tmp * 0.002261558852) +
               t13 * 0.135862) -
              t334_tmp * 0.135862) +
             t43 * 0.135862) -
            t22 * 0.135862) +
           t113 * 0.135862) +
          t314) +
         -t324 * t200_tmp;
  t212 = t203_tmp * t185_tmp;
  t136 = in3[1] * t249;
  t203 = (t36 + 1.0) * t14;
  t56 = t203_tmp * t248;
  t24 = (((((((in3[2] * 0.01585441609 + t212 * 0.002261558852) -
              t52 * (t99 + 0.016646) * 0.135862) +
             t136 * 0.135862) +
            t56 * 0.135862) +
           t203 * 0.135862) +
          in2[2] * t310 * 0.135862) +
         t316) +
        t325;
  t49 = t203_tmp * t24;
  t206 = (t36 + 1.0) * t191;
  t23 = ((((((((((in3[1] * 2.55679E-7 + in3[2] * 2.55679E-7) +
                 t162_tmp * 0.001088793059) +
                t212 * 7.117814E-6) -
               t171_tmp * 7.117814E-6) +
              b_t185_tmp * 0.001088793059) +
             t192_tmp * 0.001088793059) +
            b_t200_tmp * 7.117814E-6) -
           t8 * t281) +
          t120 * t280) -
         t82 * t324) +
        t5 * t20;
  t72 = ((((((in3[1] * 0.00307464 + t32 * 0.058094319999999991) + t135 * 0.92) -
            t168 * 0.92) +
           in2[1] * t196) +
          t56_tmp * t303) +
         t49) +
        t206;
  t48 = in3[0] * t301_tmp;
  t16 = t291 * t185_tmp;
  t7 = t5 * t200_tmp;
  t17 = t52 * t320_tmp;
  t14 = t16 * 0.135862;
  t25 = t17 * 0.135862;
  t27_tmp = t56_tmp * t241;
  t6 = (((((((-(t97_tmp * 1.33280622) - in3[0] * 1.3857924E-5) +
             t228_tmp * 0.135862) +
            t273) +
           t317) +
          t48 * 0.135862) +
         t14) +
        t7) +
       t25;
  t5 = ((((((((((-(in3[1] * 2.077264E-6) - in3[2] * 2.077264E-6) +
                t162_tmp * 7.117814E-6) -
               t171_tmp * 2.4787446E-5) +
              t192_tmp * 7.117814E-6) -
             t8 * t282_tmp) +
            t307 * t324) -
           t11 * t20) +
          b_t200_tmp * 2.4787446E-5) +
         b_t185_tmp * 7.117814E-6) +
        t280 * t200_tmp) +
       t212 * 2.4787446E-5;
  t20 = t203_tmp * t191;
  t32_tmp = t86_tmp * t196;
  t82 = in2[1] * t241;
  t11 = (t36 + 1.0) * t24;
  taulist[0] =
      ((((((in3[0] * 0.000379294663816248 - t317 * 0.000102) +
           (((t228_tmp * -0.000107697924 - t273_tmp * 1.3857924E-5) +
             (t35 + 1.0) * t72 * 0.008752) -
            (t35 * 0.07189799999999999 + 0.07189799999999999) * t72)) +
          (t48 * -0.000107697924 - t16 * 1.3857924E-5)) +
         ((((t7 * -0.000102 - t17 * 1.3857924E-5) +
            t301_tmp *
                (((((in3[0] * -0.000107697924 + t273) + t317) +
                   t228_tmp * 1.055862) +
                  t48 * 1.055862) +
                 (((((t14 + t7) + t25) + t27_tmp) - t97_tmp * 10.35800622) +
                  t32_tmp))) -
           (t35 + 1.0) * ((((((in3[1] * -5.7496807E-5 + t31 * 0.000218457134) +
                              t32 * 0.004431760472) -
                             t41 * 0.004431760472) +
                            t42 * 0.000218457134) +
                           (((((t49 * 0.016646 - in2[1] * t232) + t291 * t6) +
                              (t36 + 1.0) * t23) +
                             (t99 + 0.016646) * t191) +
                            t239 * t303)) +
                          ((-t241 * t301 + t203_tmp * t5) + t86_tmp * t231))) -
          t27_tmp * 0.000102)) +
        ((t97_tmp * 0.00164788305444 + t82_tmp * 0.05074155792) +
         t110_tmp *
             ((((((((in3[1] * 0.000572001265 + t31 * 0.000740309489) +
                    t32 * 0.000218457134) -
                   t41 * 0.000218457134) +
                  t42 * 0.000740309489) -
                 in2[1] * t234) +
                (((-t186 * t303 + t196 * t301) - (t99 + 0.016646) * t24) +
                 t320_tmp * t6)) +
               (-(t36 + 1.0) * t5 + t56_tmp * t231)) +
              (t20 * 0.016646 + t203_tmp * t23)))) +
       t110_tmp *
           (((((((in3[1] * 0.03077492 - t31 * 0.06614616) + t110 * 0.92) +
                t224 * 0.92) -
               t82) +
              t11) -
             t20) +
            t86_tmp * t303) *
           -0.063146) +
      (t32_tmp * -0.000102 + 0.05074155792);
  taulist[1] =
      (((((in3[1] * 0.0066258277698 + in3[2] * 0.001100428748) -
          t31 * 0.00164065393316) +
         (((t32 * 0.00013665441044 + t41 * 5.7496807E-5) +
           t42 * 0.000572001265) +
          t110 * 0.03077492)) +
        (((((((((((t135 * 0.00307464 - t168 * 0.00307464) + t178) + t185) +
                t194) +
               t200) +
              t287) +
             t290) +
            t322) +
           t323) +
          t49 * 0.003342) +
         t206 * 0.003342)) +
       ((((((((((((t82 * -0.033451 + t61 * t196) + t67 * t223) +
                 t11 * 0.033451) +
                t86 * t303) +
               t112 * t303) +
              t186 * t241) -
             t196 * t239) +
            t249 * t24) -
           t251 * t191) -
          t56_tmp * t232) +
         t162_tmp * 2.55679E-7) -
        t20 * 0.033451)) +
      (t212 * -2.077264E-6 + t86_tmp * t234);
  taulist[2] =
      (((((((((((((in3[1] * 0.001100428748 + in3[2] * 0.0029557773160589071) +
                  t178) +
                 t185) +
                t194) +
               t200) +
              t287) +
             t290) -
            t314 * 0.006197) +
           ((((t316 * 0.116695 + t322) + t323) + t325 * 0.116695) +
            t136 * 0.01585441609)) +
          (t334_tmp * 0.000841936814 - t113 * 0.000841936814)) +
         (t52 * t170 * -0.01585441609 - t43 * 0.000841936814)) +
        (((t203 * 0.01585441609 + t148 * t310) - t13 * 0.000841936814) +
         t324 * t200_tmp * 0.006197)) +
       (t162_tmp * -1.3759201205844E-5 + t56 * 0.01585441609)) +
      (t22 * 0.000841936814 + t212 * 0.00026183534623414);
}

// End of code generation (go1_RR_leg_inverse_dynamics.cpp)