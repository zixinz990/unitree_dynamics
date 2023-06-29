//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// go1_FL_leg_inverse_dynamics_hip_thigh_zero.cpp
//
// Code generation for function 'go1_FL_leg_inverse_dynamics_hip_thigh_zero'
//

// Include files
#include "go1_FL_leg_inverse_dynamics_hip_thigh_zero.h"

#include <cmath>

// Function Definitions
void go1_FL_leg_inverse_dynamics_hip_thigh_zero() {
    taulist.setZero();
    double b_t156_tmp;
    double c_t156_tmp;
    double d_t156_tmp;
    double t11;
    double t111;
    double t112;
    double t113;
    double t115;
    double t117;
    double t118;
    double t12;
    double t120;
    double t132;
    double t133;
    double t135;
    double t138;
    double t139;
    double t142;
    double t143;
    double t144;
    double t146;
    double t148;
    double t15;
    double t150;
    double t151;
    double t153;
    double t154;
    double t155_tmp;
    double t156_tmp;
    double t2;
    double t32;
    double t33;
    double t34;
    double t35;
    double t37;
    double t39;
    double t4;
    double t41;
    double t41_tmp;
    double t42;
    double t42_tmp;
    double t43;
    double t5;
    double t52;
    double t53;
    double t59;
    double t59_tmp;
    double t6;
    double t60_tmp;
    double t68;
    double t68_tmp;
    double t7;
    double t70;
    double t71;
    double t73;
    double t75;
    double t76;
    double t79;
    double t8;
    double t82;
    double t83;
    double t84;
    double t86;
    double t88;
    double t89;
    double t89_tmp;
    double t9;
    double t90;
    double t99;
    // go1_FL_leg_inverse_dynamics_hip_thigh_zero
    //     TAULIST = go1_FL_leg_inverse_dynamics_hip_thigh_zero(IN1,IN2,IN3)
    //     This function was generated by the Symbolic Math Toolbox version 9.2.
    //     29-Jun-2023 13:46:02
    t2 = std::abs(q[2]);
    t4 = dq[1] + dq[2];
    t7 = dq[0] * dq[0];
    t8 = dq[1] * dq[1];
    t9 = q[2] * q[2];
    t32 = dq[1] * 2.55679E-7;
    t33 = dq[2] * 2.55679E-7;
    t34 = dq[1] * 2.077264E-6;
    t35 = dq[2] * 2.077264E-6;
    t37 = dq[0] * 0.033451;
    t39 = dq[0] * 0.063146;
    t73 = dq[2] * 0.01585441609;
    t75 = dq[2] * 0.00084193681400000016;
    t76 = dq[0] * 0.0045447197620000013;
    t5 = std::cos(t2);
    t6 = std::sin(t2);
    t11 = 1.0 / t2;
    t82 = dq[1] * 0.003342 + t39;
    t88 = (ddq[1] * 0.003342 + ddq[0] * 0.063146) + 9.81;
    t12 = t11 * t11;
    t41_tmp = dq[0] * q[2] * t6 * t11;
    t41 = t41_tmp * 0.116695;
    t42_tmp = dq[1] * q[2] * t6 * t11;
    t42 = t42_tmp * 0.033451;
    t43 = t41_tmp * 0.019462;
    t53 = t41_tmp * t33;
    t79 = t41_tmp * 0.002644146244;
    t83 = ddq[1] * 0.033451 + dq[1] * t39;
    t89_tmp = q[2] * t6 * t11;
    t89 = t89_tmp * t82;
    t15 = t9 * t12 * (t5 - 1.0);
    t52 = t15 * 0.019462;
    t59_tmp = dq[1] * (t15 + 1.0);
    t59 = t59_tmp * 0.033451;
    t60_tmp = dq[0] * (t15 + 1.0);
    t70 = t60_tmp * t34;
    t71 = t60_tmp * t35;
    t84 = t15 * 0.019462 + 0.019462;
    t90 = (t15 + 1.0) * t82;
    t68_tmp = ddq[0] * (t15 + 1.0);
    t68 = -(t68_tmp * 2.55679E-7);
    t86 = dq[0] * (t52 + 0.019462);
    t113 = ((t34 + t35) + t41_tmp * 2.4787446E-5) + t60_tmp * 7.117814E-6;
    t99 = t86 * 0.135862;
    t111 = ((dq[1] * 0.001100428748 + dq[2] * 0.001100428748) +
            t41_tmp * 2.077264E-6) -
           t60_tmp * 2.55679E-7;
    t112 = ((t32 + t33) - t41_tmp * 7.117814E-6) - t60_tmp * 0.001088793059;
    t34 = t9 * t11 * (t5 - 1.0);
    t39 = q[2] * (t2 + -t9 * t12 * (t2 - t6));
    t118 = ((-(t89_tmp * 0.009539) + t15 * 0.296244) +
            -t11 * (t34 * 0.116695 - t39 * 0.0061970000000000011)) +
           0.296244;
    t117 = -(t60_tmp * t113);
    t35 = dq[1] * t118;
    t115 = -(t41_tmp * t112);
    t120 = ((t89_tmp * 0.296244 + t15 * 0.009539) -
            t11 * (t34 * 0.0061970000000000011 + t39 * 0.116695)) +
           0.009539;
    t132 = (((dq[2] * 0.116695 + t43) + t59) + t89) + t35;
    t133 = (((-(dq[1] * 0.116695) + t43) + t59) + t89) + t35;
    t39 = dq[1] * t120;
    t144 = (((t73 + t79) + t59_tmp * 0.0045447197620000013) + t89 * 0.135862) +
           t35 * 0.135862;
    t135 = t89_tmp * t120 + (t15 + 1.0) * t118;
    t139 = (((dq[2] * 0.0061970000000000011 + t42) - t86) - t90) + t39;
    t146 = t4 * t144;
    t34 = dq[0] * t135;
    t138 = (((dq[1] * 0.0061970000000000011 - t42) + t86) + t90) - t39;
    t150 = (((t75 + t42_tmp * 0.0045447197620000013) - t99) - t90 * 0.135862) +
           t39 * 0.135862;
    t154 = t139 * t144;
    t142 = t37 + t34;
    t151 = t4 * t150;
    t143 = t76 + t34 * 0.135862;
    t153 = -(t132 * t150);
    t148 = t60_tmp * t143;
    t156_tmp = ddq[0] * q[2] * t6 * t11;
    b_t156_tmp = ddq[1] * t118;
    c_t156_tmp = (t15 + 1.0) * t83;
    d_t156_tmp = t89_tmp * t88;
    t99 = (((((((ddq[2] * 0.01585441609 + t156_tmp * 0.002644146244) +
                dq[1] * t99) +
               c_t156_tmp * 0.135862) +
              d_t156_tmp * 0.135862) +
             b_t156_tmp * 0.135862) +
            dq[2] * t138 * 0.135862) +
           t41_tmp * t143) +
          t151;
    t155_tmp = ddq[1] * t120;
    t42_tmp = (t15 + 1.0) * t88;
    t90 = t89_tmp * t83;
    t5 = (((((((ddq[2] * 0.00084193681400000016 + dq[1] * t79) -
               ddq[0] * (t52 + 0.019462) * 0.135862) +
              t90 * 0.135862) -
             t42_tmp * 0.135862) +
            t155_tmp * 0.135862) +
           dq[2] * t133 * 0.135862) -
          t146) -
         t148;
    t2 = dq[0] * dq[1];
    t9 = dq[0] * dq[2];
    t12 = ddq[0] * t135;
    t59 = dq[2] * (t41 - t60_tmp * 0.0061970000000000011);
    t43 = t89_tmp * t118 - (t15 + 1.0) * t120;
    t89 = t2 * (t15 + 1.0);
    t59_tmp = t9 * (t15 + 1.0);
    t42 = t2 * q[2] * t6 * t11;
    t9 = t9 * q[2] * t6 * t11;
    t39 = t41_tmp * t144;
    t34 = (t15 + 1.0) * t5;
    t35 = dq[1] * 0.000572001265 - dq[0] * 0.000218457134;
    t33 = t89_tmp * t99;
    taulist[0] =
        ((((ddq[0] * 0.0096609453510266615 +
            (ddq[1] * 0.00025164802444 + t7 * 0.00194331309832)) +
           (t8 * 0.00194331309832 - t2 * 0.000336495370084604)) +
          (((((t12 * 0.0045447197620000013 - dq[0] * t82 * 0.03077492) -
              t34 * 0.063146) -
             t84 * t5) -
            (t15 + 1.0) * (((((((ddq[1] * 2.55679E-7 + ddq[2] * 2.55679E-7) -
                                t68_tmp * 0.001088793059) -
                               t4 * t113) -
                              t139 * t143) +
                             t142 * t150) -
                            t89 * 7.117814E-6) +
                           ((((t59_tmp * -7.117814E-6 - t156_tmp * 7.117814E-6) +
                              t42 * 0.001088793059) +
                             t9 * 0.001088793059) +
                            t41_tmp * t111))) +
           dq[1] * t35)) +
         (((((t59 * -0.0045447197620000013 -
              t135 * (((ddq[0] * -0.0045447197620000013 + t2 * 0.000454050804) -
                       t12 * 0.135862) +
                      (((t59 * 0.135862 - t60_tmp * t150) + t2 * t43 * 0.135862) +
                       t39))) +
             (t15 + 1.0) * t37 * t150) -
            dq[1] * t76 * t43) +
           t33 * 0.082607999999999987) +
          t89_tmp * (((((((ddq[1] * 2.077264E-6 + ddq[2] * 2.077264E-6) +
                          t68_tmp * 7.117814E-6) +
                         t4 * t112) -
                        t132 * t143) +
                       t142 * t144) +
                      t89 * 2.4787446E-5) +
                     ((((t59_tmp * 2.4787446E-5 + t60_tmp * t111) +
                        t156_tmp * 2.4787446E-5) -
                       t42 * 7.117814E-6) -
                      t9 * 7.117814E-6)))) +
        (t39 * -0.033451 + 0.51916372127999988);
    taulist[1] =
        ((((ddq[0] * 0.00025164802444 + ddq[1] * 0.0066258277698) +
           ddq[2] * 0.001100428748) +
          (((((((((t7 * 0.00010284978264 + t8 * 0.00010284978264) + t53) + t68) +
                t70) +
               t71) +
              t115) +
             t117) +
            t153) +
           t154)) +
         (((t2 * 0.00251531436332 - dq[1] * t82 * 0.03077492) - t34 * 0.003342) +
          (t15 + 1.0) * t99 * 0.033451)) +
        (((((((t118 * t99 + t120 * t5) - dq[0] * t35) + t156_tmp * 2.077264E-6) +
            t89_tmp * t5 * 0.033451) +
           t33 * 0.003342) +
          t41_tmp * t32) +
         0.0301622184);
    taulist[2] =
        (((((((((((((ddq[1] * 0.001100428748 + ddq[2] * 0.0029557773160589071) +
                    t53) +
                   t68) +
                  t70) +
                 t71) +
                t115) +
               t117) -
              t146 * 0.0061970000000000011) +
             ((((t148 * -0.0061970000000000011 + t151 * 0.116695) + t153) +
               t154) -
              ddq[0] * t84 * 0.00084193681400000016)) +
            (b_t156_tmp * 0.01585441609 + t155_tmp * 0.00084193681400000016)) +
           (dq[1] * t86 * 0.01585441609 + c_t156_tmp * 0.01585441609)) +
          ((((t42_tmp * -0.00084193681400000016 + t41 * t143) + t75 * t133) +
            t73 * t138) +
           t156_tmp * 0.00031063590994357987)) +
         (t90 * 0.00084193681400000016 + d_t156_tmp * 0.01585441609)) +
        t42 * 1.6641453274068E-5;
}

// End of code generation (go1_FL_leg_inverse_dynamics_hip_thigh_zero.cpp)
