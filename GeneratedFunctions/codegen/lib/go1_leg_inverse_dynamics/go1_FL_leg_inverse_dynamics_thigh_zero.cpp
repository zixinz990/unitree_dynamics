//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// go1_FL_leg_inverse_dynamics_thigh_zero.cpp
//
// Code generation for function 'go1_FL_leg_inverse_dynamics_thigh_zero'
//

// Include files
#include "go1_FL_leg_inverse_dynamics_thigh_zero.h"

#include <cmath>

// Function Definitions
void go1_FL_leg_inverse_dynamics_thigh_zero() {
    taulist.setZero();
    double b_t165_tmp;
    double c_t165_tmp;
    double d_t165_tmp;
    double t10;
    double t103;
    double t103_tmp;
    double t108;
    double t11;
    double t12;
    double t120;
    double t121;
    double t122;
    double t124;
    double t126;
    double t127;
    double t129;
    double t14;
    double t141;
    double t142;
    double t144;
    double t147;
    double t148;
    double t151;
    double t152;
    double t153;
    double t155;
    double t157;
    double t159;
    double t16;
    double t160;
    double t162;
    double t163;
    double t164_tmp;
    double t165;
    double t165_tmp;
    double t18;
    double t19;
    double t23;
    double t4;
    double t41;
    double t42;
    double t43;
    double t44;
    double t46;
    double t48;
    double t5;
    double t50;
    double t50_tmp;
    double t51;
    double t51_tmp;
    double t52;
    double t6;
    double t61;
    double t62;
    double t68;
    double t68_tmp;
    double t69_tmp;
    double t77;
    double t77_tmp;
    double t79;
    double t8;
    double t80;
    double t82;
    double t84;
    double t85;
    double t88;
    double t91;
    double t92;
    double t93;
    double t95;
    double t97;
    double t97_tmp;
    double t98;
    // go1_FL_leg_inverse_dynamics_thigh_zero
    //     TAULIST = go1_FL_leg_inverse_dynamics_thigh_zero(IN1,IN2,IN3)
    //     This function was generated by the Symbolic Math Toolbox version 9.2.
    //     29-Jun-2023 13:46:55
    t4 = std::abs(q[0]);
    t5 = std::abs(q[2]);
    t6 = dq[1] + dq[2];
    t11 = dq[0] * dq[0];
    t12 = dq[1] * dq[1];
    t14 = q[2] * q[2];
    t41 = dq[1] * 2.55679E-7;
    t42 = dq[2] * 2.55679E-7;
    t43 = dq[1] * 2.077264E-6;
    t44 = dq[2] * 2.077264E-6;
    t46 = dq[0] * 0.033451;
    t48 = dq[0] * 0.063146;
    t82 = dq[2] * 0.01585441609;
    t84 = dq[2] * 0.00084193681400000016;
    t85 = dq[0] * 0.0045447197620000013;
    t8 = std::cos(t5);
    t10 = std::sin(t5);
    t16 = 1.0 / t4;
    t18 = 1.0 / t5;
    t91 = dq[1] * 0.003342 + t48;
    t19 = t18 * t18;
    t50_tmp = dq[0] * q[2] * t10 * t18;
    t50 = t50_tmp * 0.116695;
    t51_tmp = dq[1] * q[2] * t10 * t18;
    t51 = t51_tmp * 0.033451;
    t52 = t50_tmp * 0.019462;
    t62 = t50_tmp * t42;
    t88 = t50_tmp * 0.002644146244;
    t92 = ddq[1] * 0.033451 + dq[1] * t48;
    t97_tmp = q[2] * t10 * t18;
    t97 = t97_tmp * t91;
    t23 = t14 * t19 * (t8 - 1.0);
    t61 = t23 * 0.019462;
    t103_tmp = q[0] * q[0] * (t16 * t16) * (std::cos(t4) - 1.0);
    t103 = ((t103_tmp * 9.81 + ddq[1] * 0.003342) + ddq[0] * 0.063146) + 9.81;
    t68_tmp = dq[1] * (t23 + 1.0);
    t68 = t68_tmp * 0.033451;
    t69_tmp = dq[0] * (t23 + 1.0);
    t79 = t69_tmp * t43;
    t80 = t69_tmp * t44;
    t93 = t23 * 0.019462 + 0.019462;
    t98 = (t23 + 1.0) * t91;
    t77_tmp = ddq[0] * (t23 + 1.0);
    t77 = -(t77_tmp * 2.55679E-7);
    t95 = dq[0] * (t61 + 0.019462);
    t122 = ((t43 + t44) + t50_tmp * 2.4787446E-5) + t69_tmp * 7.117814E-6;
    t108 = t95 * 0.135862;
    t120 = ((dq[1] * 0.001100428748 + dq[2] * 0.001100428748) +
            t50_tmp * 2.077264E-6) -
           t69_tmp * 2.55679E-7;
    t121 = ((t41 + t42) - t50_tmp * 7.117814E-6) - t69_tmp * 0.001088793059;
    t43 = t14 * t18 * (t8 - 1.0);
    t48 = q[2] * (t5 + -t14 * t19 * (t5 - t10));
    t127 = ((-(t97_tmp * 0.009539) + t23 * 0.296244) +
            -t18 * (t43 * 0.116695 - t48 * 0.0061970000000000011)) +
           0.296244;
    t126 = -(t69_tmp * t122);
    t44 = dq[1] * t127;
    t124 = -(t50_tmp * t121);
    t129 = ((t97_tmp * 0.296244 + t23 * 0.009539) -
            t18 * (t43 * 0.0061970000000000011 + t48 * 0.116695)) +
           0.009539;
    t141 = (((dq[2] * 0.116695 + t52) + t68) + t97) + t44;
    t142 = (((-(dq[1] * 0.116695) + t52) + t68) + t97) + t44;
    t48 = dq[1] * t129;
    t153 = (((t82 + t88) + t68_tmp * 0.0045447197620000013) + t97 * 0.135862) +
           t44 * 0.135862;
    t144 = t97_tmp * t129 + (t23 + 1.0) * t127;
    t148 = (((dq[2] * 0.0061970000000000011 + t51) - t95) - t98) + t48;
    t155 = t6 * t153;
    t43 = dq[0] * t144;
    t147 = (((dq[1] * 0.0061970000000000011 - t51) + t95) + t98) - t48;
    t159 = (((t84 + t51_tmp * 0.0045447197620000013) - t108) - t98 * 0.135862) +
           t48 * 0.135862;
    t163 = t148 * t153;
    t151 = t46 + t43;
    t160 = t6 * t159;
    t152 = t85 + t43 * 0.135862;
    t162 = -(t141 * t159);
    t157 = t69_tmp * t152;
    t165_tmp = ddq[0] * q[2] * t10 * t18;
    b_t165_tmp = ddq[1] * t127;
    c_t165_tmp = (t23 + 1.0) * t92;
    d_t165_tmp = t97_tmp * t103;
    t165 = (((((((ddq[2] * 0.01585441609 + t165_tmp * 0.002644146244) +
                 dq[1] * t108) +
                c_t165_tmp * 0.135862) +
               d_t165_tmp * 0.135862) +
              b_t165_tmp * 0.135862) +
             dq[2] * t147 * 0.135862) +
            t50_tmp * t152) +
           t160;
    t164_tmp = ddq[1] * t129;
    t108 = (t23 + 1.0) * t103;
    t51_tmp = t97_tmp * t92;
    t52 = (((((((ddq[2] * 0.00084193681400000016 + dq[1] * t88) -
                ddq[0] * (t61 + 0.019462) * 0.135862) +
               t51_tmp * 0.135862) -
              t108 * 0.135862) +
             t164_tmp * 0.135862) +
            dq[2] * t142 * 0.135862) -
           t155) -
          t157;
    t97 = dq[0] * dq[1];
    t68_tmp = dq[0] * dq[2];
    t51 = ddq[0] * t144;
    t98 = dq[2] * (t50 - t69_tmp * 0.0061970000000000011);
    t8 = q[0] * std::sin(t4) * t16;
    t5 = t97_tmp * t127 - (t23 + 1.0) * t129;
    t14 = t97 * (t23 + 1.0);
    t19 = t68_tmp * (t23 + 1.0);
    t68 = t97 * q[2] * t10 * t18;
    t68_tmp = t68_tmp * q[2] * t10 * t18;
    t48 = t50_tmp * t153;
    t43 = (t23 + 1.0) * t52;
    t44 = dq[1] * 0.000572001265 - dq[0] * 0.000218457134;
    t42 = t97_tmp * t165;
    taulist[0] =
        (((((ddq[0] * 0.0096609453510266615 +
             (ddq[1] * 0.00025164802444 + t11 * 0.00194331309832)) +
            (t12 * 0.00194331309832 - t97 * 0.000336495370084604)) +
           (((((t51 * 0.0045447197620000013 - dq[0] * t91 * 0.03077492) -
               t43 * 0.063146) -
              t93 * t52) -
             (t23 + 1.0) * (((((((ddq[1] * 2.55679E-7 + ddq[2] * 2.55679E-7) -
                                 t77_tmp * 0.001088793059) -
                                t6 * t122) -
                               t148 * t152) +
                              t151 * t159) -
                             t14 * 7.117814E-6) +
                            ((((t19 * -7.117814E-6 - t165_tmp * 7.117814E-6) +
                               t68 * 0.001088793059) +
                              t68_tmp * 0.001088793059) +
                             t50_tmp * t120))) +
            dq[1] * t44)) +
          ((t98 * -0.0045447197620000013 +
            t144 * (((ddq[0] * 0.0045447197620000013 - t97 * 0.000454050804) +
                     t51 * 0.135862) +
                    ((((t98 * -0.135862 + t69_tmp * t159) + t8 * 1.33280622) -
                      t97 * t5 * 0.135862) -
                     t48))) +
           t8 * 0.34707703248522)) +
         (((((t103_tmp * 0.51916372127999988 + (t23 + 1.0) * t46 * t159) -
             dq[1] * t85 * t5) +
            t42 * 0.082607999999999987) +
           t97_tmp * (((((((ddq[1] * 2.077264E-6 + ddq[2] * 2.077264E-6) +
                           t77_tmp * 7.117814E-6) +
                          t6 * t121) -
                         t141 * t152) +
                        t151 * t153) +
                       t14 * 2.4787446E-5) +
                      ((((t19 * 2.4787446E-5 + t69_tmp * t120) +
                         t165_tmp * 2.4787446E-5) -
                        t68 * 7.117814E-6) -
                       t68_tmp * 7.117814E-6))) -
          t48 * 0.033451)) +
        0.51916372127999988;
    taulist[1] =
        (((((ddq[0] * 0.00025164802444 + ddq[1] * 0.0066258277698) +
            ddq[2] * 0.001100428748) +
           (((((((((t11 * 0.00010284978264 + t12 * 0.00010284978264) + t62) +
                  t77) +
                 t79) +
                t80) +
               t124) +
              t126) +
             t162) +
            t163)) +
          (((t97 * 0.00251531436332 - dq[1] * t91 * 0.03077492) -
            t43 * 0.003342) +
           (t23 + 1.0) * t165 * 0.033451)) +
         (((((((t127 * t165 + t129 * t52) - dq[0] * t44) +
              t103_tmp * 0.0301622184) +
             t165_tmp * 2.077264E-6) +
            t97_tmp * t52 * 0.033451) +
           t42 * 0.003342) +
          t50_tmp * t41)) +
        0.0301622184;
    taulist[2] =
        (((((((((((((ddq[1] * 0.001100428748 + ddq[2] * 0.0029557773160589071) +
                    t62) +
                   t77) +
                  t79) +
                 t80) +
                t124) +
               t126) -
              t155 * 0.0061970000000000011) +
             ((((t157 * -0.0061970000000000011 + t160 * 0.116695) + t162) +
               t163) -
              ddq[0] * t93 * 0.00084193681400000016)) +
            (b_t165_tmp * 0.01585441609 + t164_tmp * 0.00084193681400000016)) +
           (dq[1] * t95 * 0.01585441609 + c_t165_tmp * 0.01585441609)) +
          ((((t108 * -0.00084193681400000016 + t50 * t152) + t84 * t142) +
            t82 * t147) +
           t165_tmp * 0.00031063590994357987)) +
         (t51_tmp * 0.00084193681400000016 + d_t165_tmp * 0.01585441609)) +
        t68 * 1.6641453274068E-5;
}

// End of code generation (go1_FL_leg_inverse_dynamics_thigh_zero.cpp)