//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// go1_FR_inverse_dynamics_task_space.cpp
//
// Code generation for function 'go1_FR_inverse_dynamics_task_space'
//

// Include files
#include "go1_FR_inverse_dynamics_task_space.h"
#include <cmath>

// Function Definitions
void go1_FR_inverse_dynamics_task_space(const Eigen::Vector3d &q[3], const Eigen::Vector3d &v[3], const Eigen::Vector3d &a[3], Eigen::Vector3d &tau[3]) {
  double a_tmp;
  double b_t438_tmp;
  double c_t438_tmp;
  double ct_idx_101;
  double ct_idx_105;
  double ct_idx_34_tmp;
  double ct_idx_43;
  double ct_idx_53;
  double ct_idx_53_tmp;
  double ct_idx_54;
  double ct_idx_57;
  double ct_idx_66;
  double ct_idx_67;
  double ct_idx_67_tmp;
  double ct_idx_68;
  double ct_idx_74;
  double ct_idx_75;
  double ct_idx_83_tmp;
  double ct_idx_95;
  double ct_idx_96;
  double ct_idx_99;
  double ct_idx_99_tmp;
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
  double t224;
  double t224_tmp;
  double t231;
  double t231_tmp;
  double t238;
  double t240;
  double t244;
  double t247;
  double t250;
  double t26;
  double t269;
  double t270;
  double t283;
  double t284;
  double t29;
  double t294;
  double t30;
  double t302;
  double t302_tmp;
  double t305;
  double t307;
  double t309;
  double t310;
  double t311;
  double t316;
  double t317;
  double t322;
  double t323;
  double t329_tmp;
  double t34;
  double t344;
  double t346;
  double t348;
  double t348_tmp;
  double t349;
  double t35;
  double t356;
  double t368;
  double t37;
  double t390;
  double t391;
  double t393;
  double t394;
  double t395;
  double t397;
  double t398;
  double t40;
  double t402;
  double t405;
  double t407;
  double t42;
  double t421;
  double t422;
  double t423;
  double t432;
  double t438;
  double t438_tmp;
  double t45;
  double t46;
  double t469;
  double t469_tmp;
  double t48;
  double t49;
  double t5;
  double t500;
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
  // go1_FR_inverse_dynamics_task_space
  //     TAU = go1_FR_inverse_dynamics_task_space(IN1,IN2,IN3)
  //     This function was generated by the Symbolic Math Toolbox version 9.2.
  //     01-Jul-2023 18:27:40
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
  t323 = t8 * v[2];
  t86 = t323 * 81200.0;
  t87 = t9 * v[0] * 213000.0;
  t88 = t8 * v[1] * 213000.0;
  t104 = t6 * t8 * v[1] * -213000.0;
  t310 = t5 * t9 * t10;
  t123 = t310 * v[2] * -213000.0;
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
  t136 = t84_tmp * 1000.0 + t323 * 1000.0;
  t284 = (t10 * 0.179549 + t7 * 0.003341999999999993) + 0.0061970000000000081;
  t64 = t63 * t63;
  t144 = t136 * t136;
  t283 = (t7 * 0.179549 - t10 * 0.003341999999999993) + 0.116695;
  t138 = 1.0 / (t6 * 213.0 + t26 * 213.0);
  t147 = 1.0 / (t6 * 1065.0 + t26 * 1065.0);
  t323 = t9 * t10;
  t84_tmp = t6 * t10;
  t294 =
      (((((((((t84 + t86) + t87) + t30) + t84_tmp * v[0] * 213000.0) + t100) +
          t104) +
         t7 * t30) +
        t323 * t88) +
       t7 * t104) +
      t123;
  t59 = t6 * t7;
  t30 = t5 * t20;
  t346 = ((((((((((((((((((((((t85 - t88) - std::sin(t14) * v[0] * 106500.0) -
                             std::sin(q[2] * 2.0) * v[0] * 106500.0) +
                            t59 * t84) +
                           t59 * t86) +
                          t6 * t100) +
                         t10 * t20 * v[0] * 213000.0) +
                        t20 * t88) +
                       t21 * t88) +
                      t310 * v[1] * -81200.0) +
                     t8 * t9 * t10 * v[2] * -81200.0) +
                    t30 * v[2] * -213000.0) +
                   t5 * t21 * v[2] * -213000.0) +
                  t323 * (t6 * t88)) +
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
  t87 = t59 * t136 * t138;
  t20 = t84_tmp * t136 * t138;
  t21 = t7 * t9 * t136 * t138;
  t59 = t323 * t136 * t138;
  t224_tmp = t6 * t136 * t138;
  t224 = t224_tmp * 0.0033419999999999839;
  t231_tmp = t9 * t136 * t138;
  t231 = t231_tmp * 0.033451;
  t84_tmp = t136 * t138;
  t238 = t84_tmp * 0.000102;
  t302_tmp = t37 * t294;
  t302 = t302_tmp * 3.4945482796623249E-7;
  t305 = t302_tmp * 1.8557535189226148E-8;
  t307 = t302_tmp * 5.6355440939848791E-12;
  t309 = t302_tmp * 4.5785977209107538E-11;
  t85 = t29 * t37 * t136 * t138 * t294;
  t311 = t85 * 0.046948356807511735;
  t316 = t7 * t283 + t10 * t284;
  t317 = t10 * t283 - t7 * t284;
  t322 = t9 * ((-(t6 * 0.0056569999999999841) + t9 * 0.0001019999999999979) +
               0.0033419999999999839) +
         t6 * ((t9 * 0.0056569999999999841 + t6 * 0.0001019999999999979) -
               0.033451);
  t30 = t346 * t346;
  t348_tmp = t63 * t346;
  t348 = t348_tmp * -2.2041482069254338E-5 / a_tmp;
  t349 = t348_tmp / (t9 * 45369.0 - t29 * 45369.0);
  t356 = t348_tmp * -7.3662633075447641E-8 / a_tmp;
  t86 = t37 * t63 * t294 * t346 * 9.71653863618521E-10 / a_tmp;
  t88 = t139 * t144;
  t163 = t88 * 406.0;
  t240 = t59 * 0.016646;
  t244 = t87 * 0.016646;
  t247 = t87 * 0.002261558852;
  t250 = t59 * 0.002261558852;
  t269 = t20 + t21;
  t270 = t87 + t10 * -t9 * t136 * t138;
  t310 = t37 * t37 * (t294 * t294) * 4.8582693180926035E-10;
  t323 = t224_tmp * t316;
  t104 = t84_tmp * t322;
  t368 = t231_tmp * t348;
  t123 = t64 * t106 * t30 * 9.71653863618521E-10;
  t390 = t224_tmp * 0.063146 + t356;
  t391 = t231_tmp * 0.063146 + t348_tmp * -7.3730961669862691E-7 / a_tmp;
  t395 = t283 * t348;
  t407 = t302_tmp / 45369.0 + t349;
  t329_tmp = t37 * t270 * t294;
  t393 = t7 * t390;
  t394 = t10 * t390;
  t397 = t7 * t391;
  t398 = t10 * t391;
  t344 = t238 - t104;
  t402 = t393 * 0.135862;
  t405 = t398 * 0.135862;
  t421 = ((((t87 * 0.001088793059 - t59 * 0.001088793059) + t20 * 7.117814E-6) +
           t21 * 7.117814E-6) -
          t307) +
         t348_tmp * -5.6355440939848791E-12 / a_tmp;
  t422 = ((((t59 * 2.55679E-7 - t87 * 2.55679E-7) + t20 * 2.077264E-6) +
           t21 * 2.077264E-6) +
          t302_tmp * 2.4255080517534E-8) +
         t348_tmp * 2.4255080517534E-8 / a_tmp;
  t423 = ((((t20 * 2.4787446E-5 + t21 * 2.4787446E-5) + t87 * 7.117814E-6) -
           t59 * 7.117814E-6) +
          t309) +
         t348_tmp * 4.5785977209107538E-11 / a_tmp;
  t438_tmp = t9 * t63 * t136 * t138 * t346;
  t432 = t29 * t63 * t136 * t138 * t346;
  b_t438_tmp = ((((t73 + t74) - t163) + t311) +
                t438_tmp * 0.046948356807511735 / a_tmp) +
               t432 * 0.046948356807511735 / a_tmp;
  c_t438_tmp = t147 * b_t438_tmp;
  t438 = t5 * 9.81 + c_t438_tmp * 0.008752;
  t469_tmp = t20 * 0.016646 + t21 * 0.016646;
  t469 = (((t469_tmp - t302_tmp * 2.5721307500716351E-6) + t394) + t395) + t397;
  t500 =
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
                 t6 * t310) +
                t26 * t310) -
               t37 * t69 * t136 * t138 * t294 * 8.4026682818002442E-6) +
              t6 * t64 * t106 * t30 * 7.2874039771389057E-10) +
             t26 * t64 * t106 * t30 * 7.2874039771389057E-10) +
            t42 * t64 * t106 * t30 * 2.4291346590463017E-10) +
           t56 * t64 * t106 * t30 * 2.4291346590463017E-10) +
          t10 * t63 * t136 * t138 * t346 * 8.4026682818002442E-6 / a_tmp) +
         t45 * t63 * t136 * t138 * t346 * -8.4026682818002442E-6 / a_tmp) +
        t63 * t69 * t136 * t138 * t346 * -8.4026682818002442E-6 / a_tmp) +
       t6 * t86) +
      t26 * t86;
  ct_idx_34_tmp = t37 * t269 * t294;
  ct_idx_43 = t84_tmp * 9.384E-5 - t104 * 0.92;
  ct_idx_53_tmp =
      t302_tmp *
      (((t20 * 0.116695 + t21 * 0.116695) + t59 * 0.0061970000000000081) -
       t87 * 0.0061970000000000081);
  ct_idx_53 = ct_idx_53_tmp * 2.9945998368930331E-6;
  ct_idx_54 = t224_tmp * 0.058094319999999991 +
              t348_tmp * -6.7769622429411819E-8 / a_tmp;
  ct_idx_57 = t231_tmp * 0.058094319999999991 +
              t348_tmp * -6.7832484736273673E-7 / a_tmp;
  ct_idx_66 = (t231_tmp * 0.000572001265 + t224_tmp * 5.7496807E-5) +
              t348_tmp * 9.887085291719015E-8 / a_tmp;
  ct_idx_67_tmp = -t9 * t136 * t138;
  ct_idx_67 = (t323 + ct_idx_67_tmp * t317) + t344;
  ct_idx_68 = ((t84_tmp * 1.3857924E-5 + t323 * 0.135862) -
               t231_tmp * t317 * 0.135862) -
              t104 * 0.135862;
  ct_idx_74 = t6 * t438;
  ct_idx_75 = t9 * t438;
  t84 = t9 * t147 * b_t438_tmp;
  t104 = t84 + t224_tmp * t349;
  ct_idx_83_tmp = t10 * t104;
  t30 = t6 * t147 * b_t438_tmp;
  t100 = t368 + t30;
  ct_idx_95 = t316 * t100 * 0.135862;
  ct_idx_96 = t317 * t104 * -0.135862;
  t323 = t63 * t283;
  t87 = ((((t20 * 0.002261558852 + t21 * 0.002261558852) - t302) +
          t323 * t346 * -2.9945998368930331E-6 / a_tmp) +
         t394 * 0.135862) +
        t397 * 0.135862;
  t20 = t63 * t284;
  ct_idx_99_tmp = ((((t247 - t250) + t305) + t402) - t405) +
                  t20 * t346 * 2.9945998368930331E-6 / a_tmp;
  ct_idx_99 = t270 * ct_idx_99_tmp;
  ct_idx_101 = ((((t240 - t244) + t348_tmp * 1.3659106438316931E-7 / a_tmp) +
                 t284 * t348) +
                t398) -
               t393;
  ct_idx_105 = t469 * ct_idx_99_tmp;
  t56 =
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
                          t88 * 1.145329189534704) +
                         t7 * t139 * t144) +
                        std::cos(t14) * t139 * t144 * 0.5) +
                       std::cos(t40) * t139 * t144) +
                      std::cos(t51) * t139 * t144 * 0.5) +
                     t310) +
                    t7 * t310) -
                   t85 * 1.6805336563600488E-5) +
                  t123) +
                 t7 * t123) +
                t438_tmp * -1.6805336563600488E-5 / a_tmp) +
               t432 * -1.6805336563600488E-5 / a_tmp) +
              t86) +
             t7 * t86);
  t69 = t269 * ct_idx_68;
  t432 = t270 * ct_idx_68;
  t139 = t269 * t87;
  t144 = t407 * t87;
  t84_tmp =
      ((((-t240 + t244) + t302_tmp * 1.3659106438316931E-7) + t393) - t398) +
      t284 * t349;
  t42 = -t87 * t84_tmp;
  t45 = t63 * t500;
  t30 = ((t438_tmp * 1.3918314267451341E-6 / a_tmp + ct_idx_74) +
         t30 * -0.07189799999999999) +
        t45 * -0.0033419999999999839 / a_tmp;
  t46 = t10 * t30;
  t49 = t63 * (t224 + t231) * t346;
  t26 = (((((((t8 * 1.33280622 - ct_idx_53) +
              t49 * -2.9945998368930331E-6 / a_tmp) +
             c_t438_tmp * 1.3857924E-5) +
            t147 * t322 * b_t438_tmp * -0.135862) +
           ct_idx_95) +
          ct_idx_96) +
         t139) +
        ct_idx_99;
  t59 = t7 * t100;
  t12 = ((((((((((ct_idx_34_tmp * 1.568871696532875E-10 -
                  t329_tmp * 5.4635204655161008E-10) -
                 t270 * t422) +
                t407 * t421) +
               t7 * t104 * -2.4787446E-5) +
              t10 * t100 * -2.4787446E-5) +
             t59 * -7.117814E-6) +
            ct_idx_83_tmp * 7.117814E-6) -
           ct_idx_68 * t469) +
          ct_idx_67 * t87) +
         t56 * 2.077264E-6) +
        t45 * 2.077264E-6 / a_tmp;
  t13 = t6 * t63 * t136 * t138 * t346;
  t70 = t7 * t30;
  t106 =
      t302_tmp *
      ((((t469_tmp + t348_tmp * 2.5721307500716351E-6 / a_tmp) + t394) + t395) +
       t397);
  t93 = t20 * t500;
  t123 =
      (((((((t432 + t59 * -0.002261558852) + ct_idx_83_tmp * 0.002261558852) +
           t106 * 2.9945998368930331E-6) -
          t144) +
         t56 * 0.00084193681400000124) +
        t93 * 0.135862 / a_tmp) +
       t70 * 0.135862) +
      t10 *
          (((-t9 * t438 + t84 * 0.07189799999999999) + t45 * 0.033451 / a_tmp) +
           t13 * 1.3918314267451341E-6 / a_tmp) *
          0.135862;
  t294 = t7 * (t147 * t9 *
                   (((((t73 + t74) - t163) + t311) +
                     t63 * t9 * t136 * t138 * t346 * 0.046948356807511735 /
                         (t9 - t29)) +
                    t29 * t63 * t136 * t138 * t346 * 0.046948356807511735 /
                        (t9 - t29)) +
               t136 * t6 * t138 * t349);
  t64 = t10 * (t368 + t147 * t6 *
                          (((((t73 + t74) - t163) + t311) +
                            t63 * t9 * t136 * t138 * t346 *
                                0.046948356807511735 / (t9 - t29)) +
                           t29 * t63 * t136 * t138 * t346 *
                               0.046948356807511735 / (t9 - t29)));
  t78 =
      t7 * (((-t9 * t438 + t147 * t9 *
                               (((((t73 + t74) - t163) + t311) +
                                 t63 * t9 * t136 * t138 * t346 *
                                     0.046948356807511735 / (t9 - t29)) +
                                t29 * t63 * t136 * t138 * t346 *
                                    0.046948356807511735 / (t9 - t29)) *
                               0.07189799999999999) +
             t500 * t63 * 0.033451 / (t9 - t29)) +
            t6 * t63 * t136 * t138 * t346 * 1.3918314267451341E-6 / (t9 - t29));
  t310 = t323 * t500;
  t104 = ((((((-t69 - t302_tmp * ct_idx_101 * 2.9945998368930331E-6) +
              -t407 * ct_idx_99_tmp) +
             t56 * 0.01585441609) -
            t46 * 0.135862) +
           t78 * 0.135862) +
          t294 * 0.002261558852) +
         (t64 * 0.002261558852 + t310 * 0.135862 / a_tmp);
  t100 = t10 * t123;
  t20 = t7 * t104;
  t21 = t147 * t6 *
        (((((t73 + t74) - t163) + t311) +
          t63 * t9 * t136 * t138 * t346 * 0.046948356807511735 / (t9 - t29)) +
         t29 * t63 * t136 * t138 * t346 * 0.046948356807511735 / (t9 - t29));
  t84 = t147 * t9 *
        (((((t73 + t74) - t163) + t311) +
          t63 * t9 * t136 * t138 * t346 * 0.046948356807511735 / (t9 - t29)) +
         t29 * t63 * t136 * t138 * t346 * 0.046948356807511735 / (t9 - t29));
  t85 = t7 * t123;
  t86 = t10 * t104;
  t88 = t7 * (t368 + t147 * t6 *
                         (((((t73 + t74) - t163) + t311) +
                           t63 * t9 * t136 * t138 * t346 *
                               0.046948356807511735 / (t9 - t29)) +
                          t29 * t63 * t136 * t138 * t346 *
                              0.046948356807511735 / (t9 - t29)));
  t30 = (((((((((-(ct_idx_34_tmp * 2.3998612687077079E-8) +
                 t329_tmp * 1.568871696532875E-10) -
                t269 * t422) +
               t407 * t423) +
              ct_idx_83_tmp * -0.001088793059) +
             -ct_idx_67 *
                 (((((t247 - t250) + t305) + t402) - t405) +
                  t284 * t63 * t346 * 2.9945998368930331E-6 / (t9 - t29))) +
            t56 * 2.55679E-7) +
           ct_idx_68 * t84_tmp) +
          t294 * 7.117814E-6) +
         (t88 * 0.001088793059 + t64 * 7.117814E-6)) +
        t45 * 2.55679E-7 / a_tmp;
  t59 = t147 *
        (((((t73 + t74) - t163) + t311) +
          t63 * t9 * t136 * t138 * t346 * 0.046948356807511735 / (t9 - t29)) +
         t29 * t63 * t136 * t138 * t346 * 0.046948356807511735 / (t9 - t29));
  t84_tmp =
      t147 * t322 *
      (((((t73 + t74) - t163) + t311) +
        t63 * t9 * t136 * t138 * t346 * 0.046948356807511735 / (t9 - t29)) +
       t29 * t63 * t136 * t138 * t346 * 0.046948356807511735 / (t9 - t29));
  t323 = (t231_tmp * 0.000740309489 - t224_tmp * 0.000218457134) +
         t348_tmp * 1.26077556260883E-8 / a_tmp;
  t87 = (t224_tmp * 0.004431760472 - t231_tmp * 0.000218457134) +
        t348_tmp * 1.2673148405298769E-9 / a_tmp;
  tau[0] =
      (((((((t5 * 0.05074155792 + t8 * 0.00164788305444) + t139 * 0.000102) +
           ct_idx_99 * 0.000102) -
          t6 *
              (((((((ct_idx_74 * 0.92 + t85) + t348 * ct_idx_57) - t86) -
                  t21 * 0.06614616) -
                 t45 * 0.0030746399999999848 / a_tmp) +
                t224_tmp * ct_idx_43) +
               t438_tmp * 1.2804849126055231E-6 / a_tmp) *
              0.063146) +
         (t9 *
              (((((((ct_idx_75 * -0.92 + t100) + t348 * ct_idx_54) + t20) +
                  t84 * 0.06614616) +
                 t45 * 0.03077492 / a_tmp) +
                ct_idx_67_tmp * ct_idx_43) +
               t13 * 1.2804849126055231E-6 / a_tmp) *
              0.063146 -
          t317 *
              (t147 * t9 *
                   (((((t73 + t74) - t163) + t311) +
                     t63 * t9 * t136 * t138 * t346 * 0.046948356807511735 /
                         (t9 - t29)) +
                    t29 * t63 * t136 * t138 * t346 * 0.046948356807511735 /
                        (t9 - t29)) +
               t136 * t6 * t138 * t349) *
              1.3857924E-5)) +
        (((t59 * 0.000379294663816248 +
           t9 * (((((((((-t7 * t12 + t100 * 0.016646) - t344 * ct_idx_57) +
                       ct_idx_43 * t391) -
                      t317 * t26) +
                     t20 * 0.016646) -
                    t10 * t30) +
                   t348 * t87) +
                  (t21 * -0.000218457134 + t84 * 0.000740309489)) +
                 (((t45 * -0.000572001265 / a_tmp + t224_tmp * ct_idx_66) +
                   t13 * 1.6317518327492342E-8 / a_tmp) +
                  t438_tmp * 4.8151190019616922E-9 / a_tmp))) -
          t6 * (((((((((t348 * t323 + t85 * 0.016646) + t10 * t12) +
                      t344 * ct_idx_54) -
                     ct_idx_43 * t390) -
                    t316 * t26) -
                   t86 * 0.016646) -
                  t7 * t30) +
                 (t21 * -0.004431760472 + t84 * 0.000218457134)) +
                (((t45 * 5.7496807E-5 / a_tmp + t231_tmp * ct_idx_66) +
                  t13 * 4.8151190019616922E-9 / a_tmp) +
                 t438_tmp * 9.7682568978818128E-8 / a_tmp))) -
         t322 * (((((((t8 * 10.35800622 - ct_idx_53) + ct_idx_95) + ct_idx_96) +
                    t139) +
                   ct_idx_99) +
                  t59 * 0.000107697924) +
                 (((t84_tmp * -1.055862 + t224_tmp * ct_idx_54) +
                   t231_tmp * ct_idx_57) -
                  t49 * 2.3272763340607019E-5 / a_tmp)))) +
       (((t316 *
              (t368 + t147 * t6 *
                          (((((t73 + t74) - t163) + t311) +
                            t63 * t9 * t136 * t138 * t346 *
                                0.046948356807511735 / (t9 - t29)) +
                           t29 * t63 * t136 * t138 * t346 *
                               0.046948356807511735 / (t9 - t29))) *
              1.3857924E-5 -
          t84_tmp * 0.000107697924) +
         t238 * t6 * ct_idx_54) +
        t238 * t9 * ct_idx_57)) +
      (ct_idx_53_tmp * -3.0544918336308929E-10 -
       t49 * 2.3738218607419161E-9 / a_tmp);
  t30 = ((t269 * t307 + t270 * t309) + t269 * t421) - t270 * t423;
  t59 = t10 * (t147 * t9 *
                   (((((t73 + t74) - t163) + t311) +
                     t63 * t9 * t136 * t138 * t346 * 0.046948356807511735 /
                         (t9 - t29)) +
                    t29 * t63 * t136 * t138 * t346 * 0.046948356807511735 /
                        (t9 - t29)) +
               t136 * t6 * t138 * t349);
  tau[1] =
      (((((((((((((t30 + ct_idx_74 * 0.0030746399999999848) +
                  ct_idx_75 * 0.03077492) +
                 ct_idx_105) +
                t42) +
               t85 * 0.0033419999999999839) -
              t100 * 0.033451) -
             t56 * 0.001100428748) +
            t224 * ct_idx_43) +
           (((((((t231 * ct_idx_43 + t356 * ct_idx_57) + ct_idx_54 * t391) -
                t390 * ct_idx_57) -
               t284 * t123) -
              t20 * 0.033451) -
             t86 * 0.0033419999999999839) -
            t283 * t104)) +
          (t294 * 2.077264E-6 + t59 * 2.55679E-7)) +
         (t88 * -2.55679E-7 + t64 * 2.077264E-6)) +
        (t21 * -0.00016356365971999891 - t84 * 0.00164065393316)) +
       ((t45 * -0.0066258277698 / a_tmp - t224_tmp * t323) +
        t348_tmp * ct_idx_54 * 7.3730961669862691E-7 / a_tmp)) +
      ((t231_tmp * t87 - t13 * 3.022574518547907E-8 / a_tmp) +
       t438_tmp * 3.01206573739776E-9 / a_tmp);
  tau[2] =
      ((((((((((((t30 + t69 * 0.116695) - t432 * 0.0061970000000000081) +
                t144 * 0.0061970000000000081) +
               t407 * ct_idx_99_tmp * 0.116695) +
              ct_idx_105) +
             t42) +
            t78 * -0.01585441609) +
           t10 *
               (((-t9 * t438 + t147 * t9 *
                                   (((((t73 + t74) - t163) + t311) +
                                     t63 * t9 * t136 * t138 * t346 *
                                         0.046948356807511735 / (t9 - t29)) +
                                    t29 * t63 * t136 * t138 * t346 *
                                        0.046948356807511735 / (t9 - t29)) *
                                   0.07189799999999999) +
                 t500 * t63 * 0.033451 / (t9 - t29)) +
                t6 * t63 * t136 * t138 * t346 * 1.3918314267451341E-6 /
                    (t9 - t29)) *
               -0.00084193681400000124) -
          t70 * 0.00084193681400000124) +
         (((t46 * 0.01585441609 - t56 * 0.0029557773160589071) +
           t302 * ct_idx_101) -
          t294 * 0.00026183534623414)) +
        (t59 * -1.375920120584402E-5 + t88 * 1.375920120584402E-5)) +
       ((t64 * -0.00026183534623414 - t45 * 0.001100428748 / a_tmp) -
        t106 * 1.8557535189226148E-8)) +
      (t310 * -0.01585441609 / a_tmp - t93 * 0.00084193681400000124 / a_tmp);
}

// End of code generation (go1_FR_inverse_dynamics_task_space.cpp)
