//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// go1_RR_leg_inverse_dynamics_hip_thigh_zero.cpp
//
// Code generation for function 'go1_RR_leg_inverse_dynamics_hip_thigh_zero'
//

// Include files
#include "go1_RR_leg_inverse_dynamics_hip_thigh_zero.h"

#include <cmath>

// Function Definitions
void go1_RR_leg_inverse_dynamics_hip_thigh_zero() {
    taulist.setZero();
    double b_t161_tmp;
    double b_t162_tmp;
    double c_t161_tmp;
    double c_t162_tmp;
    double d_t161_tmp;
    double t11;
    double t117;
    double t118;
    double t119;
    double t12;
    double t121;
    double t123;
    double t124;
    double t126;
    double t140;
    double t142;
    double t145;
    double t15;
    double t150;
    double t151;
    double t153;
    double t154;
    double t155;
    double t156;
    double t157;
    double t158;
    double t160;
    double t161;
    double t161_tmp;
    double t162_tmp;
    double t2;
    double t33;
    double t34;
    double t35;
    double t36;
    double t38;
    double t4;
    double t42;
    double t42_tmp;
    double t44;
    double t44_tmp;
    double t48;
    double t5;
    double t55;
    double t56;
    double t6;
    double t62;
    double t62_tmp;
    double t65_tmp;
    double t7;
    double t71;
    double t71_tmp;
    double t73;
    double t74;
    double t8;
    double t81;
    double t84;
    double t89;
    double t9;
    double t90;
    double t90_tmp;
    double t91;
    double t93;
    double t94;
    double t95;
    double t95_tmp;
    double t98;
    // go1_RR_leg_inverse_dynamics_hip_thigh_zero
    //     TAULIST = go1_RR_leg_inverse_dynamics_hip_thigh_zero(IN1,IN2,IN3)
    //     This function was generated by the Symbolic Math Toolbox version 9.2.
    //     29-Jun-2023 13:52:25
    t2 = std::abs(q[2]);
    t4 = dq[1] + dq[2];
    t7 = dq[0] * dq[0];
    t8 = dq[1] * dq[1];
    t9 = q[2] * q[2];
    t33 = dq[1] * 2.55679E-7;
    t34 = dq[2] * 2.55679E-7;
    t35 = dq[1] * 2.077264E-6;
    t36 = dq[2] * 2.077264E-6;
    t38 = dq[0] * 0.033451;
    t81 = dq[0] * 0.0045447197620000013;
    t5 = std::cos(t2);
    t6 = std::sin(t2);
    t11 = 1.0 / t2;
    t90_tmp = dq[0] * dq[1];
    t90 = ddq[1] * 0.033451 + t90_tmp * -0.063146;
    t12 = t11 * t11;
    t42_tmp = dq[0] * q[2] * t6 * t11;
    t42 = t42_tmp * 0.116695;
    t44_tmp = dq[1] * q[2] * t6 * t11;
    t44 = t44_tmp * 0.033451;
    t48 = t42_tmp * 0.016646;
    t56 = t42_tmp * t34;
    t84 = t42_tmp * 0.002261558852;
    t89 = -(dq[1] * 0.003342) + dq[0] * 0.063146;
    t94 = (ddq[1] * 0.003342 - ddq[0] * 0.063146) + 9.81;
    t15 = t9 * t12 * (t5 - 1.0);
    t95_tmp = q[2] * t6 * t11;
    t95 = t95_tmp * t89;
    t55 = t15 * 0.016646;
    t62_tmp = dq[1] * (t15 + 1.0);
    t62 = t62_tmp * 0.033451;
    t65_tmp = dq[0] * (t15 + 1.0);
    t73 = t65_tmp * t35;
    t74 = t65_tmp * t36;
    t91 = t15 * 0.016646 + 0.016646;
    t98 = (t15 + 1.0) * t89;
    t71_tmp = ddq[0] * (t15 + 1.0);
    t71 = -(t71_tmp * 2.55679E-7);
    t93 = dq[0] * (t55 + 0.016646);
    t119 = ((t35 + t36) + t42_tmp * 2.4787446E-5) + t65_tmp * 7.117814E-6;
    t117 = ((dq[1] * 0.001100428748 + dq[2] * 0.001100428748) +
            t42_tmp * 2.077264E-6) -
           t65_tmp * 2.55679E-7;
    t118 = ((t33 + t34) - t42_tmp * 7.117814E-6) - t65_tmp * 0.001088793059;
    t36 = t9 * t11 * (t5 - 1.0);
    t35 = q[2] * (t2 + -t9 * t12 * (t2 - t6));
    t124 = ((-(t95_tmp * 0.009539) + t15 * 0.296244) +
            -t11 * (t36 * 0.116695 - t35 * 0.006197)) +
           0.296244;
    t123 = -(t65_tmp * t119);
    t34 = dq[1] * t124;
    t121 = -(t42_tmp * t118);
    t126 = ((t95_tmp * 0.296244 + t15 * 0.009539) -
            t11 * (t36 * 0.006197 + t35 * 0.116695)) +
           0.009539;
    t140 = (((dq[2] * 0.116695 - t48) + t62) - t95) + t34;
    t36 = dq[1] * t126;
    t153 = (((dq[2] * 0.01585441609 - t84) + t62_tmp * 0.0045447197620000013) -
            t95 * 0.135862) +
           t34 * 0.135862;
    t142 = t95_tmp * t126 + (t15 + 1.0) * t124;
    t145 = (((dq[2] * 0.006197 + t44) + t93) + t98) + t36;
    t154 = t4 * t153;
    t35 = dq[0] * t142;
    t156 = (((dq[2] * 0.000841936814 + t44_tmp * 0.0045447197620000013) +
             t93 * 0.135862) +
            t98 * 0.135862) +
           t36 * 0.135862;
    t158 = t145 * t153;
    t150 = t38 + t35;
    t157 = t4 * t156;
    t151 = t81 + t35 * 0.135862;
    t160 = -(t140 * t156);
    t155 = t65_tmp * t151;
    t161_tmp = ddq[1] * t126;
    b_t161_tmp = dq[2] * ((((dq[1] * 0.116695 + t48) - t62) + t95) - t34);
    c_t161_tmp = (t15 + 1.0) * t94;
    d_t161_tmp = t95_tmp * t90;
    t161 = (((((((-(ddq[2] * 0.000841936814) + dq[1] * t84) -
                 ddq[0] * (t55 + 0.016646) * 0.135862) -
                d_t161_tmp * 0.135862) +
               c_t161_tmp * 0.135862) -
              t161_tmp * 0.135862) +
             b_t161_tmp * 0.135862) +
            t154) +
           t155;
    t162_tmp = ddq[0] * q[2] * t6 * t11;
    b_t162_tmp = ddq[1] * t124;
    c_t162_tmp = dq[1] * t93;
    t44 = dq[2] * ((((-(dq[1] * 0.006197) + t44) + t93) + t98) + t36);
    t55 = (t15 + 1.0) * t90;
    t2 = t95_tmp * t94;
    t9 = (((((((ddq[2] * 0.01585441609 - t162_tmp * 0.002261558852) +
               c_t162_tmp * -0.135862) +
              t55 * 0.135862) +
             t2 * 0.135862) +
            b_t162_tmp * 0.135862) -
           t44 * 0.135862) +
          t42_tmp * t151) +
         t157;
    t12 = dq[0] * dq[2];
    t62_tmp = ddq[0] * t142;
    t44_tmp = dq[2] * (t42 - t65_tmp * 0.006197);
    t48 = t95_tmp * t124 - (t15 + 1.0) * t126;
    t95 = t90_tmp * (t15 + 1.0);
    t62 = t12 * (t15 + 1.0);
    t84 = t90_tmp * q[2] * t6 * t11;
    t12 = t12 * q[2] * t6 * t11;
    t35 = t42_tmp * t153;
    t36 = (t15 + 1.0) * t161;
    t34 = dq[1] * 0.000572001265 - dq[0] * 0.000218457134;
    t5 = t95_tmp * t9;
    taulist[0] =
        ((((ddq[0] * 0.0096609453510266615 +
            (ddq[1] * -0.00013665441044 - t7 * 0.00194331309832)) +
           (t8 * -0.00194331309832 - t90_tmp * 0.000336495370084604)) +
          (((((t62_tmp * 0.0045447197620000013 + dq[0] * t89 * 0.03077492) -
              t36 * 0.063146) -
             t91 * t161) -
            (t15 + 1.0) * (((((((ddq[1] * 2.55679E-7 + ddq[2] * 2.55679E-7) -
                                t71_tmp * 0.001088793059) -
                               t4 * t119) -
                              t145 * t151) +
                             t150 * t156) -
                            t95 * 7.117814E-6) +
                           ((((t62 * -7.117814E-6 - t162_tmp * 7.117814E-6) +
                              t84 * 0.001088793059) +
                             t12 * 0.001088793059) +
                            t42_tmp * t117))) +
           dq[1] * t34)) +
         (((((t44_tmp * -0.0045447197620000013 -
              t142 * (((ddq[0] * -0.0045447197620000013 +
                        t90_tmp * 0.0004540508040000001) -
                       t62_tmp * 0.135862) +
                      (((t44_tmp * 0.135862 - t65_tmp * t156) +
                        t90_tmp * t48 * 0.135862) +
                       t35))) +
             (t15 + 1.0) * t38 * t156) -
            dq[1] * t81 * t48) -
           t5 * 0.079791999999999988) +
          t95_tmp * (((((((ddq[1] * 2.077264E-6 + ddq[2] * 2.077264E-6) +
                          t71_tmp * 7.117814E-6) +
                         t4 * t118) -
                        t140 * t151) +
                       t150 * t153) +
                      t95 * 2.4787446E-5) +
                     ((((t62 * 2.4787446E-5 + t65_tmp * t117) +
                        t162_tmp * 2.4787446E-5) -
                       t84 * 7.117814E-6) -
                      t12 * 7.117814E-6)))) +
        (t35 * -0.033451 - 0.51916372127999988);
    taulist[1] =
        ((((ddq[0] * -0.00013665441044 + ddq[1] * 0.0066258277698) +
           ddq[2] * 0.001100428748) +
          (((((((((t7 * 0.00010284978264 + t8 * 0.00010284978264) + t56) + t71) +
                t73) +
               t74) +
              t121) +
             t123) +
            t158) +
           t160)) +
         ((((t90_tmp * -0.00137131183332 + dq[1] * t89 * 0.03077492) +
            t36 * 0.003342) +
           (t15 + 1.0) * t9 * 0.033451) +
          t124 * t9)) +
        ((((((-t126 * t161 - dq[0] * t34) + t162_tmp * 2.077264E-6) -
            t95_tmp * t161 * 0.033451) +
           t5 * 0.003342) +
          t42_tmp * t33) +
         0.0301622184);
    taulist[2] =
        ((((((((((((((ddq[1] * 0.001100428748 + ddq[2] * 0.0029557773160589071) +
                     t56) +
                    t71) +
                   t73) +
                  t74) +
                 t121) +
                t123) -
               t154 * 0.006197) +
              ((((t155 * -0.006197 + t157 * 0.116695) + t158) + t160) +
               ddq[0] * t91 * 0.000841936814)) +
             (b_t162_tmp * 0.01585441609 + t161_tmp * 0.000841936814)) +
            (c_t162_tmp * -0.01585441609 - b_t161_tmp * 0.000841936814)) +
           (t44 * -0.01585441609 + t55 * 0.01585441609)) +
          ((c_t161_tmp * -0.000841936814 + t42 * t151) -
           t162_tmp * 0.00026183534623414)) +
         (d_t161_tmp * 0.000841936814 + t2 * 0.01585441609)) +
        t84 * -1.3759201205844E-5;
}

// End of code generation (go1_RR_leg_inverse_dynamics_hip_thigh_zero.cpp)
