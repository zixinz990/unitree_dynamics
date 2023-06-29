//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// go1_FR_leg_inverse_dynamics_hip_zero.cpp
//
// Code generation for function 'go1_FR_leg_inverse_dynamics_hip_zero'
//

// Include files
#include "go1_FR_leg_inverse_dynamics_hip_zero.h"

#include <cmath>

// Function Definitions
void go1_FR_leg_inverse_dynamics_hip_zero() {
    taulist.setZero();
    double b_t175_tmp;
    double b_t190_tmp;
    double b_t328_tmp;
    double c_t328_tmp;
    double d_t328_tmp;
    double t10;
    double t105;
    double t106;
    double t11;
    double t112;
    double t12;
    double t127;
    double t138;
    double t15;
    double t152_tmp;
    double t158;
    double t16;
    double t160;
    double t161_tmp;
    double t168;
    double t17;
    double t175;
    double t175_tmp;
    double t176;
    double t18;
    double t181;
    double t182_tmp;
    double t184;
    double t186;
    double t190;
    double t190_tmp;
    double t194;
    double t194_tmp;
    double t196;
    double t202;
    double t212;
    double t214;
    double t218_tmp;
    double t221;
    double t222;
    double t224;
    double t228;
    double t23;
    double t230;
    double t233;
    double t238;
    double t24;
    double t240;
    double t242;
    double t25;
    double t267;
    double t267_tmp;
    double t27;
    double t270;
    double t271;
    double t272_tmp;
    double t277;
    double t27_tmp;
    double t28;
    double t280;
    double t281;
    double t286_tmp;
    double t291_tmp;
    double t296;
    double t297;
    double t301;
    double t304;
    double t307;
    double t309;
    double t310;
    double t311;
    double t315;
    double t316_tmp;
    double t317;
    double t319;
    double t328;
    double t328_tmp;
    double t329_tmp;
    double t33;
    double t34;
    double t35;
    double t4;
    double t40;
    double t41;
    double t43;
    double t43_tmp;
    double t45;
    double t49;
    double t49_tmp;
    double t5;
    double t58;
    double t6;
    double t60;
    double t61;
    double t66;
    double t79;
    double t79_tmp;
    double t8;
    double t88;
    double t9;
    double t91;
    // go1_FR_leg_inverse_dynamics_hip_zero
    //     TAULIST = go1_FR_leg_inverse_dynamics_hip_zero(IN1,IN2,IN3)
    //     This function was generated by the Symbolic Math Toolbox version 9.2.
    //     29-Jun-2023 13:49:12
    t4 = std::abs(q[1]);
    t5 = std::abs(q[2]);
    t6 = dq[1] + dq[2];
    t11 = q[1] * q[1];
    t12 = q[2] * q[2];
    t25 = ddq[0] * 0.008752;
    t58 = dq[1] * 0.003342;
    t60 = dq[1] * 0.03077492;
    t66 = dq[2] * 2.55679E-7;
    t138 = dq[2] * 0.01585441609;
    t8 = std::cos(t5);
    t9 = std::sin(t4);
    t10 = std::sin(t5);
    t15 = 1.0 / t4;
    t17 = 1.0 / t5;
    t16 = t15 * t15;
    t18 = t17 * t17;
    t23 = ddq[0] * q[1] * t9 * t15;
    t233 = dq[0] * dq[1];
    t24 = t233 * q[1] * t9 * t15;
    t88 = dq[0] * q[1];
    t35 = t88 * q[2] * t9 * t10 * t15 * t17;
    t43_tmp = q[1] * t9 * t15;
    t43 = t43_tmp * (t25 + 9.81);
    t79_tmp = t88 * t9 * t15;
    t79 = t79_tmp * 0.033451;
    t27_tmp = std::cos(t4) - 1.0;
    t27 = t11 * t16 * t27_tmp;
    t28 = t12 * t18 * (t8 - 1.0);
    t106 = t35 * 0.016646;
    t88 = t27 * 0.07189799999999999;
    t91 = t28 * 0.016646;
    t176 = dq[1] * 0.033451 - t79_tmp * 0.063146;
    t186 = t60 - t79_tmp * 0.058094319999999991;
    t33 = ddq[0] * (t27 + 1.0);
    t34 = t233 * (t27 + 1.0);
    t40 = t79_tmp * (t28 + 1.0);
    t41 = dq[0] * q[2] * t10 * t17 * (t27 + 1.0);
    t49_tmp = dq[0] * (t27 + 1.0);
    t49 = t49_tmp * (t28 + 1.0);
    t61 = (t27 + 1.0) * (t25 + 9.81);
    t105 = t49_tmp * 0.003342;
    t160 = t28 * 0.016646 + 0.016646;
    t194_tmp = q[2] * t10 * t17;
    t194 = t194_tmp * t176;
    t202 = (t28 + 1.0) * t176;
    t45 = t23 + t34;
    t112 = t40 + t41;
    t127 = t41 * 0.016646;
    t158 = ddq[0] * (t88 + 0.07189799999999999);
    t25 = dq[0] * (t88 + 0.07189799999999999);
    t175_tmp = t24 - t33;
    b_t175_tmp = (t28 + 1.0) * t175_tmp;
    t175 = b_t175_tmp * 2.55679E-7;
    t181 = t79_tmp * (t91 + 0.016646);
    t190_tmp = t35 - t49;
    b_t190_tmp = dq[2] * t190_tmp;
    t190 = b_t190_tmp * -2.077264E-6;
    t196 = t49_tmp * (t91 + 0.016646);
    t221 = (dq[1] * 0.004485671726 + t79_tmp * 0.000572001265) +
           t49_tmp * 5.7496807E-5;
    t224 = (dq[1] * 5.7496807E-5 - t79_tmp * 0.000218457134) +
           t49_tmp * 0.004431760472;
    t152_tmp = t194_tmp * t45;
    t161_tmp = (t28 + 1.0) * t45;
    t168 = t161_tmp * 2.077264E-6;
    t182_tmp = dq[2] * t112;
    t184 = t66 * t112;
    t218_tmp = dq[1] * (t79 + t105);
    t222 = (dq[1] * 0.000572001265 + t79_tmp * 0.000740309489) -
           t49_tmp * 0.000218457134;
    t88 = t12 * t17 * (t8 - 1.0);
    t233 = q[2] * (t5 + -t12 * t18 * (t5 - t10));
    t240 = ((-(t194_tmp * 0.009539) + t28 * 0.296244) +
            -t17 * (t88 * 0.116695 - t233 * 0.0061970000000000011)) +
           0.296244;
    t271 = ((((dq[1] * 2.077264E-6 + dq[2] * 2.077264E-6) - t35 * 7.117814E-6) +
             t40 * 2.4787446E-5) +
            t41 * 2.4787446E-5) +
           t49 * 7.117814E-6;
    t212 = t49_tmp * 0.008752 - t25;
    t238 = ((ddq[1] * 0.003342 + t61) + t24 * 0.063146) - t158;
    t18 = dq[1] * t240;
    t5 = t11 * t15 * t27_tmp;
    t8 = q[1] * (t4 + -t11 * t16 * (t4 - t9));
    t270 = ((((dq[1] * 0.001100428748 + dq[2] * 0.001100428748) +
              t35 * 2.55679E-7) +
             t40 * 2.077264E-6) +
            t41 * 2.077264E-6) -
           t49 * 2.55679E-7;
    t272_tmp = ((((dq[1] * 2.55679E-7 + t66) + t35 * 0.001088793059) -
                 t40 * 7.117814E-6) -
                t41 * 7.117814E-6) -
               t49 * 0.001088793059;
    t280 = t271 * t190_tmp;
    t214 = dq[1] * t212;
    t228 = t58 + t212;
    t230 = (t49_tmp * 0.00805184 + dq[1] * 0.00307464) - t25 * 0.92;
    t242 = ((t194_tmp * 0.296244 + t28 * 0.009539) -
            t17 * (t88 * 0.0061970000000000011 + t233 * 0.116695)) +
           0.009539;
    t267_tmp =
        dq[2] *
        (((t35 * 0.0061970000000000011 + t40 * 0.116695) + t41 * 0.116695) -
         t49 * 0.0061970000000000011);
    t267 = t267_tmp * 0.135862;
    t277 = -(t112 * t272_tmp);
    t12 = t194_tmp * t228;
    t233 = (t28 + 1.0) * t228;
    t10 = ((t43 + ddq[1] * 0.033451) - t23 * 0.07189799999999999) + t214;
    t25 = dq[1] * t242;
    t286_tmp = t43_tmp * (((t43_tmp * 0.033349 + t27 * 0.002315) +
                           t15 * (t5 * 0.003342 - t8 * 0.033451)) +
                          0.002315) -
               (t27 + 1.0) * (((t43_tmp * 0.002315 - t27 * 0.033349) +
                               t15 * (t5 * 0.033451 + t8 * 0.003342)) -
                              0.033349);
    t88 = dq[0] * t286_tmp;
    t291_tmp = ddq[0] * t286_tmp;
    t281 = t194_tmp * t242 + (t28 + 1.0) * t240;
    t296 = dq[0] * 0.000102 + t88;
    t301 = ((((dq[2] * 0.116695 - t127) - t181) + t202) + t12) + t18;
    t8 = t49_tmp * t281;
    t297 = dq[0] * 9.384E-5 + t88 * 0.92;
    t5 = ((((dq[2] * 0.0061970000000000011 - t106) + t194) + t196) - t233) + t25;
    t304 =
        ((((dq[1] * 0.0061970000000000011 + t106) - t194) - t196) + t233) - t25;
    t307 =
        ((((t138 - t41 * 0.002261558852) - t181 * 0.135862) + t202 * 0.135862) +
         t12 * 0.135862) +
        t18 * 0.135862;
    t25 = ((((dq[2] * 0.00084193681400000016 - t35 * 0.002261558852) +
             t194 * 0.135862) +
            t196 * 0.135862) -
           t233 * 0.135862) +
          t25 * 0.135862;
    t309 = t6 * t307;
    t311 = t112 * t307;
    t315 = t5 * t307;
    t316_tmp = t194_tmp * t240 - (t28 + 1.0) * t242;
    t9 = (-dq[0] * q[1] * t9 * t15 * t316_tmp + t8) + t296;
    t310 = t6 * t25;
    t15 = ((dq[0] * 1.3857924E-5 + t79_tmp * t316_tmp * -0.135862) +
           t88 * 0.135862) +
          t8 * 0.135862;
    t317 = -(t301 * t25);
    t319 = t112 * t15;
    t328_tmp = t194_tmp * t175_tmp;
    b_t328_tmp = ddq[1] * t240;
    c_t328_tmp = (t28 + 1.0) * t10;
    d_t328_tmp = t194_tmp * t238;
    t328 = (((((((ddq[2] * 0.01585441609 + t328_tmp * 0.002261558852) -
                 t45 * (t91 + 0.016646) * 0.135862) +
                d_t328_tmp * 0.135862) +
               b_t328_tmp * 0.135862) +
              c_t328_tmp * 0.135862) +
             dq[2] * t304 * 0.135862) +
            t310) +
           t319;
    t329_tmp = ddq[1] * t242;
    t35 = dq[2] * (((((dq[1] * 0.116695 + t127) + t181) - t202) - t12) - t18);
    t41 = (t28 + 1.0) * t238;
    t194 = t160 * t175_tmp;
    t233 = t194_tmp * t10;
    t17 = (((((((-(ddq[2] * 0.00084193681400000016) + t152_tmp * 0.002261558852) +
                t194 * 0.135862) +
               t41 * 0.135862) -
              t233 * 0.135862) -
             t329_tmp * 0.135862) +
            t35 * 0.135862) +
           t309) +
          -t15 * t190_tmp;
    t196 = t194_tmp * t328;
    t106 = (t28 + 1.0) * t17;
    t40 = ((((((((((ddq[1] * 2.55679E-7 + ddq[2] * 2.55679E-7) +
                   t152_tmp * 0.001088793059) +
                  t328_tmp * 7.117814E-6) -
                 t161_tmp * 7.117814E-6) +
                b_t175_tmp * 0.001088793059) +
               t182_tmp * 0.001088793059) +
              b_t190_tmp * 7.117814E-6) -
             t6 * t271) +
            t112 * t270) -
           t5 * t15) +
          t25 * t9;
    t49 = ((((((ddq[1] * 0.00307464 + t61 * 0.92) + t24 * 0.058094319999999991) -
              t158 * 0.92) +
             dq[1] * t186) +
            t49_tmp * t297) +
           t196) +
          t106;
    t16 = t281 * t175_tmp;
    t66 = t16 * 0.135862;
    t10 = t25 * t190_tmp;
    t18 = t45 * t316_tmp;
    t27_tmp = t18 * 0.135862;
    t4 = t49_tmp * t230;
    t11 = ((((((-(ddq[0] * 1.3857924E-5) + t218_tmp * 0.135862) + t267) +
              t291_tmp * -0.135862) +
             t311) +
            t66) +
           t10) +
          t27_tmp;
    t25 = ((((((((((-(ddq[1] * 2.077264E-6) - ddq[2] * 2.077264E-6) +
                   t152_tmp * 7.117814E-6) -
                  t161_tmp * 2.4787446E-5) +
                 t182_tmp * 7.117814E-6) -
                t6 * t272_tmp) +
               t301 * t15) -
              t307 * t9) +
             b_t190_tmp * 2.4787446E-5) +
            b_t175_tmp * 7.117814E-6) +
           t270 * t190_tmp) +
          t328_tmp * 2.4787446E-5;
    t88 = t194_tmp * t17;
    t8 = t79_tmp * t186;
    t5 = dq[1] * t230;
    t12 = (t28 + 1.0) * t328;
    taulist[0] =
        ((((((ddq[0] * 0.000379294663816248 - t311 * 0.000102) -
             (t27 + 1.0) *
                 ((((((ddq[1] * -5.7496807E-5 + t23 * 0.000218457134) +
                      t24 * 0.004431760472) -
                     t33 * 0.004431760472) +
                    t34 * 0.000218457134) +
                   ((((((t196 * 0.016646 - dq[1] * t222) + (t28 + 1.0) * t40) +
                       (t91 + 0.016646) * t17) +
                      t228 * t297) -
                     t230 * t296) +
                    t281 * t11)) +
                  (t194_tmp * t25 + t79_tmp * t221))) +
            ((((t218_tmp * -0.000107697924 - t267_tmp * 1.3857924E-5) -
               t286_tmp * (((((ddq[0] * -0.000107697924 + t267) + t311) +
                             t218_tmp * 1.055862) -
                            t291_tmp * 1.055862) +
                           ((((t66 + t10) + t27_tmp) + t4) + t8))) +
              (t27 + 1.0) * t49 * 0.008752) -
             (t27 * 0.07189799999999999 + 0.07189799999999999) * t49)) +
           (t291_tmp * 0.000107697924 - t16 * 1.3857924E-5)) +
          ((t10 * -0.000102 - t18 * 1.3857924E-5) - t4 * 0.000102)) +
         (t43_tmp *
              (((((((ddq[1] * 0.03077492 - t23 * 0.06614616) + t43 * 0.92) +
                   t214 * 0.92) -
                  t5) +
                 t12) -
                t88) +
               t79_tmp * t297) *
              -0.063146 +
          t43_tmp * ((((((((ddq[1] * 0.000572001265 + t23 * 0.000740309489) +
                           t24 * 0.000218457134) -
                          t33 * 0.000218457134) +
                         t34 * 0.000740309489) -
                        dq[1] * t224) +
                       (((-t176 * t297 + t186 * t296) - (t91 + 0.016646) * t328) +
                        t316_tmp * t11)) +
                      (-(t28 + 1.0) * t25 + t49_tmp * t221)) +
                     (t88 * 0.016646 + t194_tmp * t40)))) +
        (t8 * -0.000102 + 0.05074155792);
    taulist[1] =
        (((((ddq[1] * 0.0066258277698 + ddq[2] * 0.001100428748) -
            t23 * 0.00164065393316) +
           (((t24 * 0.00013665441044 + t33 * 5.7496807E-5) +
             t34 * 0.000572001265) +
            t43 * 0.03077492)) +
          (((((((((((t61 * 0.00307464 - t158 * 0.00307464) + t168) + t175) +
                  t184) +
                 t190) +
                t277) +
               t280) +
              t315) +
             t317) +
            t196 * 0.003342) +
           t106 * 0.003342)) +
         ((((((((((((t5 * -0.033451 + t58 * t186) + t60 * t212) +
                   t12 * 0.033451) +
                  t79 * t297) +
                 t105 * t297) +
                t176 * t230) -
               t186 * t228) +
              t240 * t328) -
             t242 * t17) -
            t49_tmp * t222) +
           t152_tmp * 2.55679E-7) -
          t88 * 0.033451)) +
        (t328_tmp * -2.077264E-6 + t79_tmp * t224);
    taulist[2] =
        (((((((((((((ddq[1] * 0.001100428748 + ddq[2] * 0.0029557773160589071) +
                    t168) +
                   t175) +
                  t184) +
                 t190) +
                t277) +
               t280) -
              t309 * 0.0061970000000000011) +
             ((((t310 * 0.116695 + t315) + t317) + t319 * 0.116695) +
              b_t328_tmp * 0.01585441609)) +
            (t329_tmp * 0.00084193681400000016 - t35 * 0.00084193681400000016)) +
           (t45 * t160 * -0.01585441609 - t41 * 0.00084193681400000016)) +
          (((c_t328_tmp * 0.01585441609 + t138 * t304) -
            t194 * 0.00084193681400000016) +
           t15 * t190_tmp * 0.0061970000000000011)) +
         (t152_tmp * -1.3759201205844E-5 + d_t328_tmp * 0.01585441609)) +
        (t233 * 0.00084193681400000016 + t328_tmp * 0.00026183534623414);
}

// End of code generation (go1_FR_leg_inverse_dynamics_hip_zero.cpp)