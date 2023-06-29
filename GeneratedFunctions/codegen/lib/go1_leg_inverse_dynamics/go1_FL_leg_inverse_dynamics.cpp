//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// go1_FL_leg_inverse_dynamics.cpp
//
// Code generation for function 'go1_FL_leg_inverse_dynamics'
//

// Include files
#include "go1_FL_leg_inverse_dynamics.h"
#include <cmath>

// Function Definitions
void go1_FL_leg_inverse_dynamics(const double in1[3], const double in2[3],
                                 const double in3[3], double taulist[3])
{
  double b_t185_tmp;
  double b_t196_tmp;
  double b_t331_tmp;
  double t102;
  double t11;
  double t113;
  double t115;
  double t115_tmp;
  double t117;
  double t123;
  double t13;
  double t138;
  double t139;
  double t14;
  double t150;
  double t152;
  double t16;
  double t163_tmp;
  double t169;
  double t17;
  double t170;
  double t171;
  double t172_tmp;
  double t177;
  double t182;
  double t185;
  double t185_tmp;
  double t188_tmp;
  double t189;
  double t190;
  double t191;
  double t196;
  double t196_tmp;
  double t198;
  double t198_tmp;
  double t20;
  double t201;
  double t205;
  double t217;
  double t22;
  double t221_tmp;
  double t225;
  double t226;
  double t228;
  double t23;
  double t231;
  double t234;
  double t24;
  double t240;
  double t241;
  double t243;
  double t25;
  double t263;
  double t263_tmp;
  double t270;
  double t272_tmp;
  double t277;
  double t280;
  double t281;
  double t286_tmp;
  double t291_tmp;
  double t296;
  double t297;
  double t301;
  double t302;
  double t304;
  double t307;
  double t308;
  double t31;
  double t311;
  double t312;
  double t316;
  double t317;
  double t318_tmp;
  double t32;
  double t331_tmp;
  double t36;
  double t36_tmp;
  double t37;
  double t42;
  double t43;
  double t44;
  double t49;
  double t5;
  double t50;
  double t51;
  double t51_tmp;
  double t54;
  double t59;
  double t6;
  double t69;
  double t7;
  double t76;
  double t8;
  double t86;
  double t86_tmp;
  double t89;
  double t89_tmp;
  double t99_tmp;
  // go1_FL_leg_inverse_dynamics
  //     TAULIST = go1_FL_leg_inverse_dynamics(IN1,IN2,IN3)
  //     This function was generated by the Symbolic Math Toolbox version 9.2.
  //     29-Jun-2023 11:42:51
  t5 = std::abs(in1[0]);
  t6 = std::abs(in1[1]);
  t7 = std::abs(in1[2]);
  t8 = in2[1] + in2[2];
  t16 = in1[1] * in1[1];
  t17 = in1[2] * in1[2];
  t69 = in2[1] * 0.003342;
  t76 = in2[2] * 2.55679E-7;
  t150 = in2[2] * 0.01585441609;
  t152 = in2[2] * 0.00084193681400000016;
  t11 = std::cos(t7);
  t13 = std::sin(t6);
  t14 = std::sin(t7);
  t20 = 1.0 / t5;
  t22 = 1.0 / t6;
  t24 = 1.0 / t7;
  t23 = t22 * t22;
  t25 = t24 * t24;
  t31 = in3[0] * in1[1] * t13 * t22;
  t171 = in2[0] * in2[1];
  t32 = t171 * in1[1] * t13 * t22;
  t86 = in2[0] * in1[1];
  t44 = t86 * in1[2] * t13 * t14 * t22 * t24;
  t89_tmp = t86 * t13 * t22;
  t89 = t89_tmp * 0.033451;
  t99_tmp = in1[0] * std::sin(t5) * t20;
  t36_tmp = std::cos(t6) - 1.0;
  t36 = t16 * t23 * t36_tmp;
  t37 = t17 * t25 * (t11 - 1.0);
  t113 = t44 * 0.019462;
  t182 = in2[1] * 0.033451 + t89_tmp * 0.063146;
  t189 = in2[1] * 0.03077492 + t89_tmp * 0.058094319999999991;
  t86_tmp = in1[0] * in1[0] * (t20 * t20) * (std::cos(t5) - 1.0);
  t86 = (-(in3[0] * 0.008752) + t86_tmp * 9.81) + 9.81;
  t5 = t36 * 0.07189799999999999;
  t102 = t37 * 0.019462;
  t198_tmp = in1[2] * t14 * t24;
  t198 = t198_tmp * t182;
  t42 = in3[0] * (t36 + 1.0);
  t43 = t171 * (t36 + 1.0);
  t49 = t89_tmp * (t37 + 1.0);
  t50 = in2[0] * in1[2] * t14 * t24 * (t36 + 1.0);
  t51_tmp = in2[0] * (t36 + 1.0);
  t51 = t51_tmp * 0.008752;
  t59 = t51_tmp * (t37 + 1.0);
  t115_tmp = in1[1] * t13 * t22;
  t115 = t115_tmp * t86;
  t117 = t51_tmp * 0.003342;
  t139 = (t36 + 1.0) * t86;
  t169 = t37 * 0.019462 + 0.019462;
  t205 = (t37 + 1.0) * t182;
  t54 = t31 + t43;
  t123 = t49 + t50;
  t138 = t50 * 0.019462;
  t170 = in3[0] * (t5 + 0.07189799999999999);
  t171 = in2[0] * (t5 + 0.07189799999999999);
  t185_tmp = t32 - t42;
  b_t185_tmp = (t37 + 1.0) * t185_tmp;
  t185 = b_t185_tmp * 2.55679E-7;
  t190 = t89_tmp * (t102 + 0.019462);
  t196_tmp = t44 - t59;
  b_t196_tmp = in2[2] * t196_tmp;
  t196 = b_t196_tmp * -2.077264E-6;
  t201 = t51_tmp * (t102 + 0.019462);
  t225 = (in2[1] * 0.004485671726 + t89_tmp * 0.000572001265) +
         t51_tmp * 5.7496807E-5;
  t228 = (in2[1] * 5.7496807E-5 - t89_tmp * 0.000218457134) +
         t51_tmp * 0.004431760472;
  t163_tmp = t198_tmp * t54;
  t172_tmp = (t37 + 1.0) * t54;
  t177 = t172_tmp * 2.077264E-6;
  t188_tmp = in2[2] * t123;
  t191 = t76 * t123;
  t221_tmp = in2[1] * (t89 + t117);
  t226 = (in2[1] * 0.000572001265 + t89_tmp * 0.000740309489) -
         t51_tmp * 0.000218457134;
  t231 = (-t51 + t69) + t171;
  t240 = ((in3[1] * 0.003342 - t32 * 0.063146) + t139) + t170;
  t86 = t17 * t24 * (t11 - 1.0);
  t5 = in1[2] * (t7 + -t17 * t25 * (t7 - t14));
  t241 = ((-(t198_tmp * 0.009539) + t37 * 0.296244) +
          -t24 * (t86 * 0.116695 - t5 * 0.0061970000000000011)) +
         0.296244;
  t25 = ((((in2[1] * 2.077264E-6 + in2[2] * 2.077264E-6) - t44 * 7.117814E-6) +
          t49 * 2.4787446E-5) +
         t50 * 2.4787446E-5) +
        t59 * 7.117814E-6;
  t7 = t198_tmp * t231;
  t234 = (-(t51_tmp * 0.00805184) + in2[1] * 0.00307464) + t171 * 0.92;
  t14 = (t37 + 1.0) * t231;
  t17 = in2[1] * t241;
  t11 = t16 * t22 * t36_tmp;
  t20 = in1[1] * (t6 + -t16 * t23 * (t6 - t13));
  t270 = ((((in2[1] * 0.001100428748 + in2[2] * 0.001100428748) +
            t44 * 2.55679E-7) +
           t49 * 2.077264E-6) +
          t50 * 2.077264E-6) -
         t59 * 2.55679E-7;
  t272_tmp = ((((in2[1] * 2.55679E-7 + t76) + t44 * 0.001088793059) -
               t49 * 7.117814E-6) -
              t50 * 7.117814E-6) -
             t59 * 0.001088793059;
  t280 = t25 * t196_tmp;
  t217 = in2[1] * (t51 - t171);
  t243 = ((t198_tmp * 0.296244 + t37 * 0.009539) -
          t24 * (t86 * 0.0061970000000000011 + t5 * 0.116695)) +
         0.009539;
  t263_tmp =
      in2[2] *
      (((t44 * 0.0061970000000000011 + t49 * 0.116695) + t50 * 0.116695) -
       t59 * 0.0061970000000000011);
  t263 = t263_tmp * 0.135862;
  t277 = -(t123 * t272_tmp);
  t301 = ((((in2[2] * 0.116695 + t138) + t190) + t205) + t7) + t17;
  t302 = ((((-(in2[1] * 0.116695) + t138) + t190) + t205) + t7) + t17;
  t86 = in2[1] * t243;
  t286_tmp = t115_tmp * (((t115_tmp * 0.033349 + t36 * 0.002315) +
                          t22 * (t11 * 0.003342 - t20 * 0.033451)) +
                         0.002315) -
             (t36 + 1.0) * (((t115_tmp * 0.002315 - t36 * 0.033349) +
                             t22 * (t11 * 0.033451 + t20 * 0.003342)) -
                            0.033349);
  t20 = in2[0] * t286_tmp;
  t291_tmp = in3[0] * t286_tmp;
  t307 =
      ((((t150 + t50 * 0.002644146244) + t190 * 0.135862) + t205 * 0.135862) +
       t7 * 0.135862) +
      t17 * 0.135862;
  t11 = ((in3[1] * 0.033451 + t31 * 0.07189799999999999) + t115) - t217;
  t281 = t198_tmp * t243 + (t37 + 1.0) * t241;
  t296 = in2[0] * 0.000102 + t20;
  t7 = ((((in2[2] * 0.0061970000000000011 + t113) + t198) - t201) - t14) + t86;
  t308 = t8 * t307;
  t312 = t123 * t307;
  t5 = t51_tmp * t281;
  t297 = in2[0] * 9.384E-5 + t20 * 0.92;
  t304 =
      ((((in2[1] * 0.0061970000000000011 - t113) - t198) + t201) + t14) - t86;
  t86 = ((((t152 + t44 * 0.002644146244) + t198 * 0.135862) - t201 * 0.135862) -
         t14 * 0.135862) +
        t86 * 0.135862;
  t317 = t7 * t307;
  t311 = t8 * t86;
  t318_tmp = t198_tmp * t241 - (t37 + 1.0) * t243;
  t76 = (-in2[0] * in1[1] * t13 * t22 * t318_tmp + t5) + t296;
  t316 = -(t301 * t86);
  t5 = ((in2[0] * 1.3857924E-5 + t89_tmp * t318_tmp * -0.135862) +
        t20 * 0.135862) +
       t5 * 0.135862;
  t50 = t123 * t5;
  t201 = t5 * t196_tmp;
  t198 = in3[1] * t243;
  t113 = (t37 + 1.0) * t240;
  t44 = t169 * t185_tmp;
  t13 = t198_tmp * t11;
  t22 = (((((((in3[2] * 0.00084193681400000016 + t163_tmp * 0.002644146244) +
              t44 * 0.135862) +
             t198 * 0.135862) -
            t113 * 0.135862) +
           t13 * 0.135862) +
          in2[2] * t302 * 0.135862) -
         t308) +
        t201;
  t331_tmp = t198_tmp * t185_tmp;
  b_t331_tmp = in3[1] * t241;
  t205 = t54 * t169;
  t190 = (t37 + 1.0) * t11;
  t49 = t198_tmp * t240;
  t59 = (((((((in3[2] * 0.01585441609 + t331_tmp * -0.002644146244) +
              t205 * 0.135862) +
             b_t331_tmp * 0.135862) +
            t49 * 0.135862) +
           t190 * 0.135862) +
          in2[2] * t304 * 0.135862) +
         t311) +
        t50;
  t24 = t198_tmp * t59;
  t138 = (t37 + 1.0) * t22;
  t23 = ((((((((((in3[1] * 2.55679E-7 + in3[2] * 2.55679E-7) +
                 t163_tmp * 0.001088793059) +
                t331_tmp * 7.117814E-6) -
               t172_tmp * 7.117814E-6) +
              b_t185_tmp * 0.001088793059) +
             t188_tmp * 0.001088793059) +
            b_t196_tmp * 7.117814E-6) -
           t8 * t25) +
          t123 * t270) -
         t7 * t5) +
        t86 * t76;
  t51 = ((((((in3[1] * 0.00307464 - t32 * 0.058094319999999991) + t139 * 0.92) +
            t170 * 0.92) +
           in2[1] * t189) +
          t51_tmp * t297) +
         t24) -
        t138;
  t16 = t281 * t185_tmp;
  t6 = t86 * t196_tmp;
  t17 = t54 * t318_tmp;
  t14 = t16 * 0.135862;
  t25 = t17 * 0.135862;
  t36_tmp = t51_tmp * t234;
  t171 = (((((((-(t99_tmp * 1.33280622) - in3[0] * 1.3857924E-5) +
               t221_tmp * 0.135862) +
              t263) +
             t291_tmp * -0.135862) +
            t312) +
           t14) +
          t6) +
         t25;
  t5 = ((((((((((-(in3[1] * 2.077264E-6) - in3[2] * 2.077264E-6) +
                t163_tmp * 7.117814E-6) -
               t172_tmp * 2.4787446E-5) +
              t188_tmp * 7.117814E-6) -
             t8 * t272_tmp) +
            t301 * t5) -
           t307 * t76) +
          b_t196_tmp * 2.4787446E-5) +
         b_t185_tmp * 7.117814E-6) +
        t270 * t196_tmp) +
       t331_tmp * 2.4787446E-5;
  t20 = t198_tmp * t22;
  t86 = t89_tmp * t189;
  t11 = in2[1] * t234;
  t7 = (t37 + 1.0) * t59;
  taulist[0] =
      (((((((in3[0] * 0.000379294663816248 - t312 * 0.000102) -
            (t36 + 1.0) *
                ((((((in3[1] * -5.7496807E-5 + t31 * 0.000218457134) +
                     t32 * 0.004431760472) -
                    t42 * 0.004431760472) +
                   t43 * 0.000218457134) +
                  ((((((t24 * -0.019462 + t281 * t171) - in2[1] * t226) +
                      (t37 + 1.0) * t23) +
                     (t102 + 0.019462) * t22) +
                    t231 * t297) -
                   t234 * t296)) +
                 (t198_tmp * t5 + t89_tmp * t225))) +
           (((t221_tmp * -0.000107697924 - t263_tmp * 1.3857924E-5) -
             (t36 + 1.0) * t51 * 0.008752) +
            (t36 * 0.07189799999999999 + 0.07189799999999999) * t51)) +
          (t291_tmp * 0.000107697924 - t16 * 1.3857924E-5)) +
         (((t6 * -0.000102 - t17 * 1.3857924E-5) -
           t286_tmp *
               (((((in3[0] * -0.000107697924 + t263) + t312) +
                  t221_tmp * 1.055862) -
                 t291_tmp * 1.055862) +
                (((((t14 + t6) + t25) + t36_tmp) - t99_tmp * 10.35800622) +
                 t86))) -
          t36_tmp * 0.000102)) +
        (t99_tmp * 0.00164788305444 - t86_tmp * 0.05074155792)) +
       (t115_tmp *
            (((((((in3[1] * 0.03077492 + t31 * 0.06614616) + t115 * 0.92) -
                 t217 * 0.92) -
                t11) +
               t7) +
              t20) +
             t89_tmp * t297) *
            0.063146 +
        t115_tmp *
            ((((((((in3[1] * 0.000572001265 + t31 * 0.000740309489) +
                   t32 * 0.000218457134) -
                  t42 * 0.000218457134) +
                 t43 * 0.000740309489) -
                in2[1] * t228) +
               (((-t182 * t297 + t189 * t296) + (t102 + 0.019462) * t59) +
                t318_tmp * t171)) +
              (-(t37 + 1.0) * t5 + t51_tmp * t225)) +
             (t20 * 0.019462 + t198_tmp * t23)))) +
      (t86 * -0.000102 - 0.05074155792);
  taulist[1] =
      (((((in3[1] * 0.0066258277698 + in3[2] * 0.001100428748) +
          t31 * 0.00278465646316) +
         (((t32 * -0.00025164802444 + t42 * 5.7496807E-5) +
           t43 * 0.000572001265) +
          t115 * 0.03077492)) +
        (((((((((((t139 * 0.00307464 + t170 * 0.00307464) + t177) + t185) +
                t191) +
               t196) -
              t217 * 0.03077492) +
             t277) +
            t280) +
           t316) +
          t317) +
         t24 * 0.003342)) +
       (((((((((((t138 * -0.003342 - t11 * 0.033451) + t69 * t189) +
                t7 * 0.033451) +
               t89 * t297) +
              t117 * t297) +
             t182 * t234) -
            t189 * t231) +
           t241 * t59) +
          t243 * t22) -
         t51_tmp * t226) +
        t163_tmp * 2.55679E-7)) +
      ((t20 * 0.033451 - t331_tmp * 2.077264E-6) + t89_tmp * t228);
  taulist[2] =
      (((((((((((((in3[1] * 0.001100428748 + in3[2] * 0.0029557773160589071) +
                  t177) +
                 t185) +
                t191) +
               t196) +
              t277) +
             t280) -
            t308 * 0.0061970000000000011) +
           (((((t311 * 0.116695 + t316) + t317) + t50 * 0.116695) +
             t201 * 0.0061970000000000011) +
            b_t331_tmp * 0.01585441609)) +
          (t198 * 0.00084193681400000016 + t205 * 0.01585441609)) +
         (((t113 * -0.00084193681400000016 + t190 * 0.01585441609) +
           t150 * t304) +
          t152 * t302)) +
        (t44 * 0.00084193681400000016 + t163_tmp * 1.6641453274068E-5)) +
       (t49 * 0.01585441609 + t13 * 0.00084193681400000016)) +
      t331_tmp * -0.00031063590994357987;
}

// End of code generation (go1_FL_leg_inverse_dynamics.cpp)
