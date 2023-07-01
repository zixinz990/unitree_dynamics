//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// go1_RR_inverse_dynamics_task_space.cpp
//
// Code generation for function 'go1_RR_inverse_dynamics_task_space'
//

// Include files
#include "go1_RR_inverse_dynamics_task_space.h"
#include <cmath>

// Function Definitions
void go1_RR_inverse_dynamics_task_space(const double &q[3], const double &v[3], const double &a[3], double &tau[3]) {
  double a_tmp;
  double b_t417_tmp;
  double b_t435_tmp;
  double ct_idx_101;
  double ct_idx_105;
  double ct_idx_107_tmp;
  double ct_idx_113;
  double ct_idx_36_tmp;
  double ct_idx_45;
  double ct_idx_55;
  double ct_idx_55_tmp;
  double ct_idx_57;
  double ct_idx_58;
  double ct_idx_67_tmp;
  double ct_idx_69;
  double ct_idx_76;
  double ct_idx_77;
  double ct_idx_79;
  double ct_idx_80;
  double ct_idx_88_tmp;
  double t10;
  double t100;
  double t104;
  double t106;
  double t11;
  double t12;
  double t123;
  double t13;
  double t136;
  double t138;
  double t139;
  double t14;
  double t144;
  double t147;
  double t163;
  double t20;
  double t21;
  double t230;
  double t230_tmp;
  double t235;
  double t235_tmp;
  double t239;
  double t245;
  double t248;
  double t251;
  double t26;
  double t270;
  double t271;
  double t284;
  double t285;
  double t287;
  double t288;
  double t29;
  double t296;
  double t30;
  double t302_tmp;
  double t304;
  double t307;
  double t308;
  double t311;
  double t313;
  double t318;
  double t330_tmp;
  double t335;
  double t335_tmp;
  double t34;
  double t341;
  double t343;
  double t345;
  double t345_tmp;
  double t346;
  double t35;
  double t358;
  double t365;
  double t37;
  double t385;
  double t388;
  double t389;
  double t390;
  double t391;
  double t393;
  double t394;
  double t399;
  double t40;
  double t400;
  double t403;
  double t417;
  double t417_tmp;
  double t418;
  double t419;
  double t42;
  double t420;
  double t421;
  double t435;
  double t435_tmp;
  double t45;
  double t46;
  double t464;
  double t464_tmp;
  double t48;
  double t49;
  double t495;
  double t5;
  double t51;
  double t56;
  double t59;
  double t6;
  double t63;
  double t64;
  double t69;
  double t7;
  double t70;
  double t71;
  double t72;
  double t73;
  double t73_tmp;
  double t74;
  double t74_tmp;
  double t78;
  double t8;
  double t84;
  double t84_tmp;
  double t85;
  double t86;
  double t87;
  double t88;
  double t9;
  double t93;
  // go1_RR_inverse_dynamics_task_space
  //     TAU = go1_RR_inverse_dynamics_task_space(IN1,IN2,IN3)
  //     This function was generated by the Symbolic Math Toolbox version 9.2.
  //     01-Jul-2023 18:28:36
  t5 = std::cos(q[0]);
  t6 = std::cos(q[1]);
  t7 = std::cos(q[2]);
  t8 = std::sin(q[0]);
  t9 = std::sin(q[1]);
  t10 = std::sin(q[2]);
  t11 = q[0] + q[1];
  t12 = q[0] + q[2];
  t13 = q[1] + q[2];
  t14 = q[1] * 2.0;
  t20 = t6 * t6;
  t21 = t7 * t7;
  t26 = std::cos(t13);
  t29 = std::sin(t13);
  t30 = q[2] + t11;
  t37 = 1.0 / t10;
  t40 = q[1] + t13;
  t46 = t11 + t13;
  t48 = q[0] - q[1];
  t49 = q[0] - q[2];
  t51 = t13 * 2.0;
  t59 = t13 - q[0];
  t73_tmp = a[1] * t5;
  t73 = t73_tmp * 5000.0;
  t74_tmp = a[2] * t8;
  t74 = t74_tmp * 5000.0;
  t84_tmp = t5 * v[1];
  t84 = t84_tmp * 81200.0;
  t85 = t5 * v[2] * 213000.0;
  t335 = t8 * v[2];
  t86 = t335 * 81200.0;
  t87 = t9 * v[0] * 213000.0;
  t88 = t8 * v[1] * 213000.0;
  t104 = t6 * t8 * v[1] * -213000.0;
  t139 = t5 * t9 * t10;
  t123 = t139 * v[2] * -213000.0;
  t34 = std::cos(t30);
  t35 = std::sin(t30);
  t42 = std::cos(q[2] + t13);
  t45 = std::sin(t40);
  t56 = std::cos(q[1] - q[2]);
  t63 = 1.0 / (t7 + 1.0);
  t69 = std::sin(t51);
  t70 = t13 + t30;
  t71 = std::cos(t59);
  t72 = std::sin(t59);
  t78 = -q[0] + t40;
  t93 = -q[0] + t51;
  t30 = t6 * t85;
  t100 = t7 * t87;
  a_tmp = t9 - t29;
  t106 = 1.0 / (a_tmp * a_tmp);
  t136 = t84_tmp * 1000.0 + t335 * 1000.0;
  t285 = (t10 * 0.179549 + t7 * 0.00334200000000002) + 0.00619699999999998;
  t64 = t63 * t63;
  t144 = t136 * t136;
  t284 = (t7 * 0.179549 - t10 * 0.00334200000000002) + 0.116695;
  t288 = t7 * t285;
  t138 = 1.0 / (t6 * 213.0 + t26 * 213.0);
  t147 = 1.0 / (t6 * 1065.0 + t26 * 1065.0);
  t287 = t10 * t284;
  t335 = t9 * t10;
  t84_tmp = t6 * t10;
  t296 =
      (((((((((t84 + t86) + t87) + t30) + t84_tmp * v[0] * 213000.0) + t100) +
          t104) +
         t7 * t30) +
        t335 * t88) +
       t7 * t104) +
      t123;
  t59 = t6 * t7;
  t30 = t5 * t20;
  t343 = ((((((((((((((((((((((t85 - t88) - std::sin(t14) * v[0] * 106500.0) -
                             std::sin(q[2] * 2.0) * v[0] * 106500.0) +
                            t59 * t84) +
                           t59 * t86) +
                          t6 * t100) +
                         t10 * t20 * v[0] * 213000.0) +
                        t20 * t88) +
                       t21 * t88) +
                      t139 * v[1] * -81200.0) +
                     t8 * t9 * t10 * v[2] * -81200.0) +
                    t30 * v[2] * -213000.0) +
                   t5 * t21 * v[2] * -213000.0) +
                  t335 * (t6 * t88)) +
                 t7 * (t20 * t85)) +
                t6 * t9 * t21 * v[0] * 426000.0) +
               t7 * t10 * t20 * v[0] * 426000.0) +
              t6 * t123) +
             t7 * t8 * t20 * v[1] * -213000.0) +
            t30 * t21 * v[2] * 426000.0) +
           t59 * t8 * t9 * t10 * v[1] * 426000.0) -
          t5 * t6 * t7 * t9 * t10 * v[2] * 426000.0) -
         t8 * t20 * t21 * v[1] * 426000.0;
  t139 = t138 * t138;
  t104 = t59 * t136 * t138;
  t100 = t84_tmp * t136 * t138;
  t20 = t7 * t9 * t136 * t138;
  t87 = t335 * t136 * t138;
  t230_tmp = t9 * t136 * t138;
  t230 = t230_tmp * 0.033451;
  t235_tmp = t6 * t136 * t138;
  t235 = t235_tmp * 0.0033420000000000121;
  t84_tmp = t136 * t138;
  t239 = t84_tmp * 0.000102;
  t302_tmp = t37 * t296;
  t304 = t302_tmp * 3.4945482796623249E-7;
  t307 = t302_tmp * 1.8557535189226069E-8;
  t308 = t302_tmp * 5.6355440939848791E-12;
  t311 = t302_tmp * 4.5785977209107538E-11;
  t21 = t29 * t37 * t136 * t138 * t296;
  t313 = t21 * 0.046948356807511735;
  t318 = t7 * t284 + t10 * t285;
  t335_tmp = t6 * ((t9 * 0.0056569999999999884 - t6 * 0.0001019999999999979) +
                   0.033451) -
             t9 * ((t6 * 0.0056569999999999884 + t9 * 0.0001019999999999979) +
                   0.0033420000000000121);
  t335 = t84_tmp * t335_tmp;
  t59 = t343 * t343;
  t345_tmp = t63 * t343;
  t345 = t345_tmp * -2.2041482069254338E-5 / a_tmp;
  t346 = t345_tmp / (t9 * 45369.0 - t29 * 45369.0);
  t358 = t345_tmp * -7.3662633075448263E-8 / a_tmp;
  t84 = t37 * t63 * t296 * t343 * 9.71653863618521E-10 / a_tmp;
  t85 = t139 * t144;
  t163 = t85 * 406.0;
  t123 = t87 * 0.016646;
  t245 = t104 * 0.016646;
  t248 = t104 * 0.002261558852;
  t251 = t87 * 0.002261558852;
  t270 = t100 + t20;
  t271 = t104 + t10 * -t9 * t136 * t138;
  t86 = t37 * t37 * (t296 * t296) * 4.8582693180926035E-10;
  t30 = t235_tmp * t318;
  t341 = t239 + t335;
  t365 = t230_tmp * t345;
  t88 = t64 * t106 * t59 * 9.71653863618521E-10;
  t385 = t230_tmp * 0.063146 + t345_tmp * -7.3730961669862691E-7 / a_tmp;
  t388 = t235_tmp * 0.063146 + t358;
  t389 = t284 * t345;
  t403 = t302_tmp / 45369.0 + t346;
  t330_tmp = t37 * t271 * t296;
  t390 = t7 * t385;
  t391 = t10 * t385;
  t393 = t7 * t388;
  t394 = t10 * t388;
  t417_tmp = t287 - t288;
  b_t417_tmp = -t9 * t136 * t138;
  t417 = (t30 + b_t417_tmp * t417_tmp) + t341;
  t399 = t391 * 0.135862;
  t400 = t393 * 0.135862;
  t418 =
      ((((t104 * 0.001088793059 - t87 * 0.001088793059) + t100 * 7.117814E-6) +
        t20 * 7.117814E-6) -
       t308) +
      t345_tmp * -5.6355440939848791E-12 / a_tmp;
  t419 = ((((t87 * 2.55679E-7 - t104 * 2.55679E-7) + t100 * 2.077264E-6) +
           t20 * 2.077264E-6) +
          t302_tmp * 2.4255080517534E-8) +
         t345_tmp * 2.4255080517534E-8 / a_tmp;
  t420 = ((((t100 * 2.4787446E-5 + t20 * 2.4787446E-5) + t104 * 7.117814E-6) -
           t87 * 7.117814E-6) +
          t311) +
         t345_tmp * 4.5785977209107538E-11 / a_tmp;
  t421 = ((t84_tmp * 1.3857924E-5 + t30 * 0.135862) +
          t230_tmp * t417_tmp * -0.135862) +
         t335 * 0.135862;
  t435_tmp = t9 * t63 * t136 * t138 * t343;
  t30 = t29 * t63 * t136 * t138 * t343;
  b_t435_tmp = ((((t73 + t74) - t163) + t313) +
                t435_tmp * 0.046948356807511735 / a_tmp) +
               t30 * 0.046948356807511735 / a_tmp;
  t435 = t5 * 9.81 + t147 * b_t435_tmp * 0.008752;
  t464_tmp = t100 * 0.016646 + t20 * 0.016646;
  t464 = (((t464_tmp - t302_tmp * 2.5721307500716351E-6) + t389) + t390) + t394;
  t495 =
      ((((((((((((((((((((((((((((((((((((((a[1] * t8 * 2.347417840375587 -
                                            a[2] * t5 * 2.347417840375587) -
                                           a[0] * t10 * 2.347417840375587) +
                                          a[1] * std::sin(t12) *
                                              1.173708920187793) -
                                         a[1] * t34 * 0.8948841720117261) -
                                        a[2] * t35 * 0.8948841720117261) -
                                       a[2] * std::cos(t12) *
                                           1.173708920187793) +
                                      a[2] * t72 * 0.8948841720117261) +
                                     a[1] * std::sin(t46) *
                                         1.173708920187793) -
                                    a[1] * t71 * 0.8948841720117261) -
                                   a[0] * t45 * 2.347417840375587) +
                                  a[1] * std::sin(t49) * 1.173708920187793) -
                                 a[2] * std::cos(t49) * 1.173708920187793) -
                                a[2] * std::cos(t46) * 1.173708920187793) +
                               a[1] * std::sin(t70) * 1.173708920187793) -
                              a[0] * t69 * 2.347417840375587) -
                             a[2] * std::cos(t70) * 1.173708920187793) -
                            a[2] * std::cos(t78) * 1.173708920187793) -
                           a[1] * std::sin(t78) * 1.173708920187793) -
                          a[2] * std::cos(t93) * 1.173708920187793) -
                         a[1] * std::sin(t93) * 1.173708920187793) +
                        t6 * t139 * t144) +
                       t26 * t139 * t144 * 1.395329189534704) +
                      t42 * t139 * t144 * 0.5) +
                     std::cos(t13 + t14) * t139 * t144 * 0.25) +
                    t56 * t139 * t144 * 0.25) +
                   std::cos(t13 + t40) * t139 * t144 * 0.5) +
                  std::cos(t13 * 3.0) * t139 * t144 * 0.25) +
                 t6 * t86) +
                t26 * t86) -
               t37 * t69 * t136 * t138 * t296 * 8.4026682818002442E-6) +
              t6 * t64 * t106 * t59 * 7.2874039771389057E-10) +
             t26 * t64 * t106 * t59 * 7.2874039771389057E-10) +
            t42 * t64 * t106 * t59 * 2.4291346590463017E-10) +
           t56 * t64 * t106 * t59 * 2.4291346590463017E-10) +
          t10 * t63 * t136 * t138 * t343 * 8.4026682818002442E-6 / a_tmp) +
         t45 * t63 * t136 * t138 * t343 * -8.4026682818002442E-6 / a_tmp) +
        t63 * t69 * t136 * t138 * t343 * -8.4026682818002442E-6 / a_tmp) +
       t6 * t84) +
      t26 * t84;
  ct_idx_36_tmp = t37 * t270 * t296;
  ct_idx_45 = t84_tmp * 9.384E-5 + t335 * 0.92;
  ct_idx_55_tmp =
      t302_tmp *
      (((t100 * 0.116695 + t20 * 0.116695) + t87 * 0.00619699999999998) -
       t104 * 0.00619699999999998);
  ct_idx_55 = ct_idx_55_tmp * 2.9945998368930331E-6;
  ct_idx_57 = t230_tmp * 0.058094319999999991 +
              t345_tmp * -6.7832484736273673E-7 / a_tmp;
  ct_idx_58 = t235_tmp * 0.058094319999999991 +
              t345_tmp * -6.7769622429412388E-8 / a_tmp;
  ct_idx_67_tmp = t63 * (t230 + t235) * t343;
  ct_idx_69 = (t230_tmp * 0.000572001265 + t235_tmp * 5.7496807E-5) +
              t345_tmp * 9.887085291719015E-8 / a_tmp;
  ct_idx_76 = t270 * t421;
  ct_idx_77 = t271 * t421;
  ct_idx_79 = t6 * t435;
  ct_idx_80 = t9 * t435;
  t104 = t9 * t147 * b_t435_tmp + t235_tmp * t346;
  ct_idx_88_tmp = t10 * t104;
  ct_idx_101 = t417_tmp * t104 * 0.135862;
  t335 = t63 * t284;
  t87 = ((((t100 * 0.002261558852 + t20 * 0.002261558852) - t304) +
          t335 * t343 * -2.9945998368930331E-6 / a_tmp) +
         t390 * 0.135862) +
        t394 * 0.135862;
  ct_idx_105 =
      ((((t123 - t245) + t345_tmp * 1.365910643831687E-7 / a_tmp) + t391) +
       t285 * t345) -
      t393;
  t100 = t63 * t285;
  ct_idx_107_tmp = ((((t248 - t251) + t307) - t399) + t400) +
                   t100 * t343 * 2.9945998368930331E-6 / a_tmp;
  ct_idx_113 = t464 * ct_idx_107_tmp;
  t144 =
      t37 * (((((((((((((((((((((((((-(t73_tmp * 1.789768344023452) -
                                     t74_tmp * 1.789768344023452) -
                                    a[0] * t9 * 4.694835680751174) -
                                   a[0] * t29 * 4.694835680751174) +
                                  a[1] * std::sin(t11) * 2.347417840375587) -
                                 a[2] * std::cos(t11) * 2.347417840375587) +
                                a[1] * t35 * 2.347417840375587) -
                               a[2] * t34 * 2.347417840375587) +
                              a[1] * std::sin(t48) * 2.347417840375587) -
                             a[2] * std::cos(t48) * 2.347417840375587) -
                            a[1] * t72 * 2.347417840375587) -
                           a[2] * t71 * 2.347417840375587) +
                          t85 * 1.145329189534704) +
                         t7 * t139 * t144) +
                        std::cos(t14) * t139 * t144 * 0.5) +
                       std::cos(t40) * t139 * t144) +
                      std::cos(t51) * t139 * t144 * 0.5) +
                     t86) +
                    t7 * t86) -
                   t21 * 1.6805336563600488E-5) +
                  t88) +
                 t7 * t88) +
                t435_tmp * -1.6805336563600488E-5 / a_tmp) +
               t30 * -1.6805336563600488E-5 / a_tmp) +
              t84) +
             t7 * t84);
  t72 = t270 * t87;
  t71 = t403 * t87;
  t56 = ((((-t123 + t245) + t302_tmp * 1.365910643831687E-7) - t391) + t393) +
        t285 * t346;
  t391 = -t87 * t56;
  t30 = t6 * t147 * b_t435_tmp;
  t69 = t63 * t495;
  t59 = ((t435_tmp * 1.3918314267451341E-6 / a_tmp + ct_idx_79) +
         t30 * -0.07189799999999999) +
        t69 * -0.0033420000000000121 / a_tmp;
  t245 = t10 * t59;
  t30 += t365;
  t84_tmp = t7 * t30;
  t49 = ((((((((((ct_idx_36_tmp * 1.568871696532875E-10 -
                  t330_tmp * 5.4635204655161008E-10) -
                 t271 * t419) +
                t403 * t418) +
               t7 * t104 * -2.4787446E-5) +
              t10 * t30 * -2.4787446E-5) +
             t84_tmp * -7.117814E-6) +
            ct_idx_88_tmp * 7.117814E-6) -
           t421 * t464) +
          t417 * t87) +
         t144 * 2.077264E-6) +
        t69 * 2.077264E-6 / a_tmp;
  t42 = t147 * t9 *
        (((((t73 + t74) - t163) + t313) +
          t63 * t9 * t136 * t138 * t343 * 0.046948356807511735 / (t9 - t29)) +
         t29 * t63 * t136 * t138 * t343 * 0.046948356807511735 / (t9 - t29));
  t45 = t6 * t63 * t136 * t138 * t343;
  t30 = ((-t9 * t435 + t42 * 0.07189799999999999) + t69 * 0.033451 / a_tmp) +
        t45 * 1.3918314267451341E-6 / a_tmp;
  t46 = t10 * t30;
  t26 = t7 * t59;
  t13 =
      t302_tmp *
      ((((t464_tmp + t345_tmp * 2.5721307500716351E-6 / a_tmp) + t389) + t390) +
       t394);
  t12 = t100 * t495;
  t78 = (((((((ct_idx_77 + t84_tmp * -0.002261558852) +
              ct_idx_88_tmp * 0.002261558852) +
             t13 * 2.9945998368930331E-6) -
            t71) +
           t144 * 0.00084193681399999745) +
          t12 * 0.135862 / a_tmp) +
         t46 * 0.135862) +
        t26 * 0.135862;
  t93 = t7 * t78;
  t106 = t7 * (t147 * t9 *
                   (((((t73 + t74) - t163) + t313) +
                     t63 * t9 * t136 * t138 * t343 * 0.046948356807511735 /
                         (t9 - t29)) +
                    t29 * t63 * t136 * t138 * t343 * 0.046948356807511735 /
                        (t9 - t29)) +
               t136 * t6 * t138 * t346);
  t70 = t10 * (t365 + t147 * t6 *
                          (((((t73 + t74) - t163) + t313) +
                            t63 * t9 * t136 * t138 * t343 *
                                0.046948356807511735 / (t9 - t29)) +
                           t29 * t63 * t136 * t138 * t343 *
                               0.046948356807511735 / (t9 - t29)));
  t64 = t7 * t30;
  t296 = t335 * t495;
  t139 = ((((((-ct_idx_76 - t302_tmp * ct_idx_105 * 2.9945998368930331E-6) +
              -t403 * ct_idx_107_tmp) +
             t144 * 0.01585441609) -
            t245 * 0.135862) +
           t64 * 0.135862) +
          t106 * 0.002261558852) +
         (t70 * 0.002261558852 + t296 * 0.135862 / a_tmp);
  t123 = t10 * t139;
  t87 = t271 * (((((t248 - t251) + t307) - t399) + t400) +
                t285 * t63 * t343 * 2.9945998368930331E-6 / (t9 - t29));
  t104 = t147 * t6 *
         (((((t73 + t74) - t163) + t313) +
           t63 * t9 * t136 * t138 * t343 * 0.046948356807511735 / (t9 - t29)) +
          t29 * t63 * t136 * t138 * t343 * 0.046948356807511735 / (t9 - t29));
  t100 = t147 *
         (((((t73 + t74) - t163) + t313) +
           t63 * t9 * t136 * t138 * t343 * 0.046948356807511735 / (t9 - t29)) +
          t29 * t63 * t136 * t138 * t343 * 0.046948356807511735 / (t9 - t29));
  t20 = t318 * (t365 + t147 * t6 *
                           (((((t73 + t74) - t163) + t313) +
                             t63 * t9 * t136 * t138 * t343 *
                                 0.046948356807511735 / (t9 - t29)) +
                            t29 * t63 * t136 * t138 * t343 *
                                0.046948356807511735 / (t9 - t29)));
  t21 = t147 * t335_tmp *
        (((((t73 + t74) - t163) + t313) +
          t63 * t9 * t136 * t138 * t343 * 0.046948356807511735 / (t9 - t29)) +
         t29 * t63 * t136 * t138 * t343 * 0.046948356807511735 / (t9 - t29));
  t84 = t20 * 0.135862;
  t85 = ((((((t8 * 1.33280622 - ct_idx_55) +
             ct_idx_67_tmp * -2.9945998368930331E-6 / a_tmp) -
            ct_idx_101) +
           t72) +
          t87) +
         t100 * 1.3857924E-5) +
        (t84 + t21 * 0.135862);
  t86 = t10 * t78;
  t88 = t7 * t139;
  t335 = t7 * (t365 + t147 * t6 *
                          (((((t73 + t74) - t163) + t313) +
                            t63 * t9 * t136 * t138 * t343 *
                                0.046948356807511735 / (t9 - t29)) +
                           t29 * t63 * t136 * t138 * t343 *
                               0.046948356807511735 / (t9 - t29)));
  t30 = (((((((((-(ct_idx_36_tmp * 2.3998612687077079E-8) +
                 t330_tmp * 1.568871696532875E-10) -
                t270 * t419) +
               t403 * t420) +
              ct_idx_88_tmp * -0.001088793059) +
             -t417 * ct_idx_107_tmp) +
            t144 * 2.55679E-7) +
           t421 * t56) +
          t106 * 7.117814E-6) +
         (t335 * 0.001088793059 + t70 * 7.117814E-6)) +
        t69 * 2.55679E-7 / a_tmp;
  t59 = (t230_tmp * 0.000740309489 - t235_tmp * 0.000218457134) +
        t345_tmp * 1.26077556260883E-8 / a_tmp;
  t84_tmp = (t235_tmp * 0.004431760472 - t230_tmp * 0.000218457134) +
            t345_tmp * 1.2673148405298769E-9 / a_tmp;
  tau[0] =
      ((((((t5 * 0.05074155792 + t8 * 0.00164788305444) + t72 * 0.000102) +
          (((t87 * 0.000102 -
             t6 *
                 (((((((ct_idx_79 * 0.92 + t93) + t345 * ct_idx_57) - t123) -
                     t104 * 0.06614616) -
                    t69 * 0.0030746400000000109 / a_tmp) +
                   t235_tmp * ct_idx_45) +
                  t435_tmp * 1.2804849126055231E-6 / a_tmp) *
                 0.063146) -
            t6 * (((((((((t345 * t59 + t93 * 0.016646) + t10 * t49) +
                        t341 * ct_idx_58) -
                       ct_idx_45 * t388) -
                      t123 * 0.016646) -
                     t7 * t30) -
                    t318 * t85) +
                   (t104 * -0.004431760472 + t42 * 0.000218457134)) +
                  (((t69 * 5.7496807E-5 / a_tmp + t230_tmp * ct_idx_69) +
                    t45 * 4.8151190019616922E-9 / a_tmp) +
                   t435_tmp * 9.7682568978818128E-8 / a_tmp))) +
           t9 *
               (((((((ct_idx_80 * -0.92 + t86) + t345 * ct_idx_58) + t88) +
                   t42 * 0.06614616) +
                  t69 * 0.03077492 / a_tmp) +
                 b_t417_tmp * ct_idx_45) +
                t45 * 1.2804849126055231E-6 / a_tmp) *
               0.063146)) +
         (-t9 * (((((((((t417_tmp * t85 + t7 * t49) - t86 * 0.016646) +
                       t341 * ct_idx_57) -
                      ct_idx_45 * t385) -
                     t88 * 0.016646) +
                    t10 * t30) +
                   t346 * t84_tmp) +
                  (t104 * 0.000218457134 - t42 * 0.000740309489)) +
                 (((t69 * 0.000572001265 / a_tmp - t235_tmp * ct_idx_69) -
                   t45 * 1.6317518327492342E-8 / a_tmp) -
                  t435_tmp * 4.8151190019616922E-9 / a_tmp)) +
          t100 * 0.000379294663816248)) +
        ((t287 - t288) *
             (t147 * t9 *
                  (((((t73 + t74) - t163) + t313) +
                    t63 * t9 * t136 * t138 * t343 * 0.046948356807511735 /
                        (t9 - t29)) +
                   t29 * t63 * t136 * t138 * t343 * 0.046948356807511735 /
                       (t9 - t29)) +
              t136 * t6 * t138 * t346) *
             -1.3857924E-5 +
         t20 * 1.3857924E-5)) +
       ((((t335_tmp *
               (((((((t8 * 10.35800622 - ct_idx_55) - ct_idx_101) + t72) +
                   t87) +
                  t100 * 0.000107697924) +
                 (((t84 + t21 * 1.055862) + t235_tmp * ct_idx_58) +
                  t230_tmp * ct_idx_57)) +
                ct_idx_67_tmp * -2.3272763340607019E-5 / a_tmp) +
           t21 * 0.000107697924) +
          t239 * t6 * ct_idx_58) +
         t239 * t9 * ct_idx_57) -
        ct_idx_55_tmp * 3.0544918336308929E-10)) +
      ct_idx_67_tmp * -2.3738218607419161E-9 / a_tmp;
  t87 = ((t270 * t308 + t271 * t311) + t270 * t418) - t271 * t420;
  t85 = t10 * (t147 * t9 *
                   (((((t73 + t74) - t163) + t313) +
                     t63 * t9 * t136 * t138 * t343 * 0.046948356807511735 /
                         (t9 - t29)) +
                    t29 * t63 * t136 * t138 * t343 * 0.046948356807511735 /
                        (t9 - t29)) +
               t136 * t6 * t138 * t346);
  tau[1] =
      ((((((((((((t87 + ct_idx_79 * 0.0030746400000000109) +
                 ct_idx_80 * 0.03077492) +
                ct_idx_113) +
               t391) +
              t93 * 0.0033420000000000121) -
             t86 * 0.033451) -
            t144 * 0.001100428748) +
           ((((((((t230 * ct_idx_45 + t235 * ct_idx_45) + t358 * ct_idx_57) +
                 t385 * ct_idx_58) -
                ct_idx_57 * t388) -
               t285 * t78) -
              t88 * 0.033451) -
             t123 * 0.0033420000000000121) -
            t284 * t139)) +
          (t106 * 2.077264E-6 + t85 * 2.55679E-7)) +
         (t335 * -2.55679E-7 + t70 * 2.077264E-6)) +
        (t104 * -0.00016356365972000069 - t42 * 0.00164065393316)) +
       ((t69 * -0.0066258277698 / a_tmp - t235_tmp * t59) +
        t345_tmp * ct_idx_58 * 7.3730961669862691E-7 / a_tmp)) +
      ((t230_tmp * t84_tmp - t45 * 3.022574518547907E-8 / a_tmp) +
       t435_tmp * 3.0120657373977961E-9 / a_tmp);
  tau[2] =
      ((((((((((((t87 + ct_idx_76 * 0.116695) -
                 ct_idx_77 * 0.00619699999999998) +
                t71 * 0.00619699999999998) +
               t403 * ct_idx_107_tmp * 0.116695) +
              ct_idx_113) +
             t391) +
            t64 * -0.01585441609) +
           t46 * -0.00084193681399999745) -
          t26 * 0.00084193681399999745) +
         (((t245 * 0.01585441609 - t144 * 0.0029557773160589071) +
           t304 * ct_idx_105) -
          t106 * 0.00026183534623414)) +
        (t85 * -1.3759201205843959E-5 + t335 * 1.3759201205843959E-5)) +
       ((t70 * -0.00026183534623414 - t69 * 0.001100428748 / a_tmp) -
        t13 * 1.8557535189226069E-8)) +
      (t296 * -0.01585441609 / a_tmp - t12 * 0.00084193681399999745 / a_tmp);
}

// End of code generation (go1_RR_inverse_dynamics_task_space.cpp)