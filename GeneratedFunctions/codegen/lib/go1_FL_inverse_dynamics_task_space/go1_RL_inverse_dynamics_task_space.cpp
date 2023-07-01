//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// go1_RL_inverse_dynamics_task_space.cpp
//
// Code generation for function 'go1_RL_inverse_dynamics_task_space'
//

// Include files
#include "go1_RL_inverse_dynamics_task_space.h"
#include <cmath>

// Function Definitions
void go1_RL_inverse_dynamics_task_space(const double &q[3], const double &v[3], const double &a[3], double &tau[3]) {
  double a_tmp;
  double b_t323_tmp;
  double b_t416_tmp;
  double t10;
  double t100;
  double t104;
  double t106;
  double t11;
  double t12;
  double t124;
  double t13;
  double t136;
  double t138;
  double t139;
  double t14;
  double t144;
  double t147;
  double t157;
  double t161;
  double t20;
  double t21;
  double t225;
  double t225_tmp;
  double t230;
  double t230_tmp;
  double t236;
  double t239;
  double t26;
  double t265;
  double t266;
  double t279;
  double t280;
  double t29;
  double t291;
  double t297;
  double t297_tmp;
  double t299;
  double t30;
  double t300;
  double t302;
  double t308;
  double t317_tmp;
  double t323;
  double t323_tmp;
  double t329;
  double t331;
  double t332;
  double t333;
  double t333_tmp;
  double t334;
  double t34;
  double t35;
  double t351;
  double t37;
  double t379;
  double t379_tmp;
  double t381;
  double t385;
  double t388;
  double t389;
  double t391;
  double t40;
  double t403;
  double t416;
  double t416_tmp;
  double t417;
  double t418;
  double t419;
  double t42;
  double t420;
  double t429;
  double t429_tmp;
  double t430;
  double t431;
  double t45;
  double t46;
  double t463;
  double t464;
  double t465_tmp;
  double t470;
  double t48;
  double t49;
  double t492_tmp;
  double t494;
  double t5;
  double t503;
  double t51;
  double t513;
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
  double t78;
  double t8;
  double t82;
  double t83;
  double t84;
  double t85;
  double t86;
  double t9;
  double t93;
  // go1_RL_inverse_dynamics_task_space
  //     TAU = go1_RL_inverse_dynamics_task_space(IN1,IN2,IN3)
  //     This function was generated by the Symbolic Math Toolbox version 9.2.
  //     01-Jul-2023 18:28:07
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
  t503 = t5 * v[1];
  t82 = t503 * 81200.0;
  t83 = t5 * v[2] * 213000.0;
  t332 = t8 * v[2];
  t84 = t332 * 81200.0;
  t85 = t9 * v[0] * 213000.0;
  t86 = t8 * v[1] * 213000.0;
  t104 = t6 * t8 * v[1] * -213000.0;
  t124 = t5 * t9 * t10 * v[2] * -213000.0;
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
  t30 = t6 * t83;
  t100 = t7 * t85;
  a_tmp = t9 - t29;
  t106 = 1.0 / (a_tmp * a_tmp);
  t136 = t503 * 1000.0 + t332 * 1000.0;
  t280 = (t10 * 0.179549 + t7 * 0.00334200000000002) + 0.00619699999999998;
  t64 = t63 * t63;
  t144 = t136 * t136;
  t279 = (t7 * 0.179549 - t10 * 0.00334200000000002) + 0.116695;
  t138 = 1.0 / (t6 * 213.0 + t26 * 213.0);
  t147 = 1.0 / (t6 * 1065.0 + t26 * 1065.0);
  t429 = t9 * t10;
  t513 = t6 * t10;
  t291 = (((((((((t85 - t82) - t84) + t30) + t513 * v[0] * 213000.0) + t100) +
             t104) +
            t7 * t30) +
           t429 * t86) +
          t7 * t104) +
         t124;
  t30 = t5 * t20;
  t332 = t6 * t7;
  t59 = t332 * t8;
  t503 = t5 * t6 * t7;
  t331 = ((((((((((((((((((((((t83 - t86) - std::sin(t14) * v[0] * 106500.0) -
                             std::sin(q[2] * 2.0) * v[0] * 106500.0) +
                            t6 * t100) +
                           t429 * t82) +
                          t429 * t84) +
                         t10 * t20 * v[0] * 213000.0) +
                        t20 * t86) +
                       t21 * t86) +
                      t503 * v[1] * -81200.0) +
                     t59 * v[2] * -81200.0) +
                    t30 * v[2] * -213000.0) +
                   t5 * t21 * v[2] * -213000.0) +
                  t429 * (t6 * t86)) +
                 t7 * (t20 * t83)) +
                t6 * t9 * t21 * v[0] * 426000.0) +
               t7 * t10 * t20 * v[0] * 426000.0) +
              t6 * t124) +
             t7 * t8 * t20 * v[1] * -213000.0) +
            t30 * t21 * v[2] * 426000.0) +
           t59 * t9 * t10 * v[1] * 426000.0) -
          t503 * t9 * t10 * v[2] * 426000.0) -
         t8 * t20 * t21 * v[1] * 426000.0;
  t139 = t138 * t138;
  t157 = t332 * t136 * t138;
  t100 = t513 * t136 * t138;
  t20 = t7 * t9 * t136 * t138;
  t161 = t429 * t136 * t138;
  t225_tmp = t9 * t136 * t138;
  t225 = t225_tmp * 0.033451;
  t230_tmp = t6 * t136 * t138;
  t230 = t230_tmp * 0.0033420000000000121;
  t297_tmp = t37 * t291;
  t297 = t297_tmp * 3.4945482796623249E-7;
  t299 = t297_tmp * 1.8557535189226069E-8;
  t300 = t297_tmp * 5.6355440939848791E-12;
  t302 = t297_tmp * 4.5785977209107538E-11;
  t308 = t7 * t279 + t10 * t280;
  t323_tmp = t136 * t138;
  b_t323_tmp = t6 * ((t9 * 0.0056569999999999884 - t6 * 0.0001019999999999979) +
                     0.033451) -
               t9 * ((t6 * 0.0056569999999999884 + t9 * 0.0001019999999999979) +
                     0.0033420000000000121);
  t323 = t323_tmp * b_t323_tmp;
  t332 = t331 * t331;
  t333_tmp = t63 * t331;
  t333 = t333_tmp * -2.2041482069254338E-5 / a_tmp;
  t334 = t333_tmp / (t9 * 45369.0 - t29 * 45369.0);
  t351 = t333_tmp * 7.3662633075448263E-8 / a_tmp;
  t21 = t37 * t63 * t291 * t331 * 9.71653863618521E-10 / a_tmp;
  t236 = t157 * 0.019462;
  t239 = t161 * 0.019462;
  t265 = t100 + t20;
  t266 = t157 + t10 * -t9 * t136 * t138;
  t82 = t37 * t37 * (t291 * t291) * 4.8582693180926035E-10;
  t30 = t230_tmp * t308;
  t329 = t323_tmp * 0.000102 + t323;
  t83 = t64 * t106 * t332 * 9.71653863618521E-10;
  t381 = t225_tmp * 0.063146 + t333_tmp * 7.3730961669862691E-7 / a_tmp;
  t385 = t230_tmp * 0.063146 + t351;
  t59 = t279 * t334;
  t389 = t280 * t333;
  t403 = t297_tmp / 45369.0 + t334;
  t317_tmp = t37 * t265 * t291;
  t85 = t7 * t381;
  t388 = t10 * t381;
  t391 = t7 * t385;
  t104 = t10 * t385;
  t416_tmp = t10 * t279 - t7 * t280;
  b_t416_tmp = -t9 * t136 * t138;
  t416 = (t30 + b_t416_tmp * t416_tmp) + t329;
  t84 = a[1] * t5;
  t86 = a[2] * t8;
  t124 = t139 * t144;
  t503 = t29 * t37 * t136 * t138 * t291;
  t429_tmp = t9 * t63 * t136 * t138 * t331;
  t513 = t29 * t63 * t136 * t138 * t331;
  t429 = ((((t84 * 5000.0 + t86 * 5000.0) + t124 * 406.0) +
           t503 * 0.046948356807511735) +
          t429_tmp * 0.046948356807511735 / a_tmp) +
         t513 * 0.046948356807511735 / a_tmp;
  t417 =
      ((((t157 * 0.001088793059 - t161 * 0.001088793059) + t100 * 7.117814E-6) +
        t20 * 7.117814E-6) -
       t300) +
      t333_tmp * -5.6355440939848791E-12 / a_tmp;
  t418 = ((((t161 * 2.55679E-7 - t157 * 2.55679E-7) + t100 * 2.077264E-6) +
           t20 * 2.077264E-6) +
          t297_tmp * 2.4255080517534E-8) +
         t333_tmp * 2.4255080517534E-8 / a_tmp;
  t419 = ((((t100 * 2.4787446E-5 + t20 * 2.4787446E-5) + t157 * 7.117814E-6) -
           t161 * 7.117814E-6) +
          t302) +
         t333_tmp * 4.5785977209107538E-11 / a_tmp;
  t420 = ((t323_tmp * 1.3857924E-5 + t30 * 0.135862) +
          t225_tmp * t416_tmp * -0.135862) +
         t323 * 0.135862;
  t430 = t6 * t147 * t429;
  t431 = t9 * t147 * t429;
  t30 = t100 * 0.019462 + t20 * 0.019462;
  t463 = (((t30 + t297_tmp * 2.5721307500716351E-6) + t59) + t85) + t104;
  t470 =
      (((t30 + t333_tmp * -2.5721307500716351E-6 / a_tmp) + t59) + t85) + t104;
  t494 =
      ((((((((((((((((((((((((((((((((((((((a[1] * t8 * 2.347417840375587 -
                                            a[2] * t5 * 2.347417840375587) -
                                           a[0] * t10 * 2.347417840375587) +
                                          a[1] * t34 * 0.8948841720117261) +
                                         a[2] * t35 * 0.8948841720117261) +
                                        a[1] * std::sin(t12) *
                                            1.173708920187793) -
                                       a[2] * std::cos(t12) *
                                           1.173708920187793) +
                                      a[1] * t71 * 0.8948841720117261) +
                                     a[1] * std::sin(t46) *
                                         1.173708920187793) -
                                    a[2] * t72 * 0.8948841720117261) -
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
                 t6 * t82) +
                t26 * t82) +
               t37 * t69 * t136 * t138 * t291 * 8.4026682818002442E-6) +
              t6 * t64 * t106 * t332 * 7.2874039771389057E-10) +
             t26 * t64 * t106 * t332 * 7.2874039771389057E-10) +
            t42 * t64 * t106 * t332 * 2.4291346590463017E-10) +
           t56 * t64 * t106 * t332 * 2.4291346590463017E-10) +
          t10 * t63 * t136 * t138 * t331 * -8.4026682818002442E-6 / a_tmp) +
         t45 * t63 * t136 * t138 * t331 * 8.4026682818002442E-6 / a_tmp) +
        t63 * t69 * t136 * t138 * t331 * 8.4026682818002442E-6 / a_tmp) +
       t6 * t21) +
      t26 * t21;
  t379_tmp =
      t297_tmp *
      (((t100 * 0.116695 + t20 * 0.116695) + t161 * 0.00619699999999998) -
       t157 * 0.00619699999999998);
  t379 = t379_tmp * 2.9945998368930331E-6;
  t59 = t225_tmp * t333 + t430;
  t332 = t230_tmp * t334 + t431;
  t464 = ((((t239 - t236) + t297_tmp * 1.365910643831687E-7) + t388) +
          t280 * t334) -
         t391;
  t465_tmp = t63 * t279;
  t100 = ((((t100 * 0.002644146244 + t20 * 0.002644146244) + t297) +
           t465_tmp * t331 * 2.9945998368930331E-6 / a_tmp) +
          t85 * 0.135862) +
         t104 * 0.135862;
  t492_tmp =
      t37 * (((((((((((((((((((((((((t84 * 1.789768344023452 +
                                     t86 * 1.789768344023452) -
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
                          t124 * 1.145329189534704) +
                         t7 * t139 * t144) +
                        std::cos(t14) * t139 * t144 * 0.5) +
                       std::cos(t40) * t139 * t144) +
                      std::cos(t51) * t139 * t144 * 0.5) +
                     t82) +
                    t7 * t82) +
                   t503 * 1.6805336563600488E-5) +
                  t83) +
                 t7 * t83) +
                t429_tmp * 1.6805336563600488E-5 / a_tmp) +
               t513 * 1.6805336563600488E-5 / a_tmp) +
              t21) +
             t7 * t21);
  t34 = t147 * t429;
  t30 = t5 * 9.81 - t34 * 0.008752;
  t35 = t10 * t332;
  t104 = t37 * t266 * t291;
  t72 = t323_tmp * 9.384E-5 + t323 * 0.92;
  t71 = t225_tmp * 0.058094319999999991 +
        t333_tmp * 6.7832484736273673E-7 / a_tmp;
  t11 = t230_tmp * 0.058094319999999991 +
        t333_tmp * 6.7769622429412388E-8 / a_tmp;
  t14 = (t225_tmp * 0.000572001265 + t230_tmp * 5.7496807E-5) +
        t333_tmp * 9.887085291719015E-8 / a_tmp;
  t40 = t265 * t420;
  t48 = t266 * t420;
  t51 = t6 * t30;
  t69 = t9 * t30;
  t144 = t10 * t59;
  t147 = t7 * t59;
  t291 = t7 * t332;
  t45 = t308 * t59;
  t56 = t45 * 0.135862;
  t85 = t63 * t280;
  t30 = ((((t161 * 0.002644146244 - t157 * 0.002644146244) + t299) +
          t85 * t331 * 2.9945998368930331E-6 / a_tmp) +
         t388 * 0.135862) -
        t391 * 0.135862;
  t70 = t265 * t100;
  t12 = t403 * t100;
  t13 = t464 * t100;
  t26 = t266 * t30;
  t46 = t403 * t30;
  t49 = -(t463 * t30);
  t42 = t63 * t494;
  t106 = t6 * t63 * t136 * t138 * t331;
  t503 = ((t106 * 1.3918314267451341E-6 / a_tmp + t69) +
          t431 * 0.07189799999999999) +
         t42 * -0.033451 / a_tmp;
  t59 = ((t429_tmp * -1.3918314267451341E-6 / a_tmp + t51) +
         t430 * 0.07189799999999999) +
        t42 * -0.0033420000000000121 / a_tmp;
  t323 = t332 * t416_tmp;
  t64 = t34 * b_t323_tmp;
  t78 = t63 * (t225 + t230) * t331;
  t93 = (((((((t8 * 1.33280622 - t379) + t78 * -2.9945998368930331E-6 / a_tmp) +
             t34 * 1.3857924E-5) +
            t64 * 0.135862) +
           t56) +
          t323 * -0.135862) -
         t70) +
        t26;
  t429 = ((((((((((-(t317_tmp * 2.3998612687077079E-8) +
                   t104 * 1.568871696532875E-10) -
                  t265 * t418) +
                 t403 * t419) +
                t147 * 0.001088793059) +
               t144 * 7.117814E-6) -
              t35 * 0.001088793059) +
             t291 * 7.117814E-6) +
            t420 * t464) -
           t416 * t30) +
          t492_tmp * 2.55679E-7) +
         t42 * 2.55679E-7 / a_tmp;
  t139 = t7 * t503;
  t323_tmp = t10 * t59;
  t86 = t465_tmp * t494;
  t124 = (((((((t40 + t144 * 0.002644146244) + t291 * 0.002644146244) +
              t297_tmp *
                  (((((t236 - t239) - t388) + t389) + t391) +
                   t333_tmp * 1.365910643831687E-7 / a_tmp) *
                  2.9945998368930331E-6) +
             t46) -
            t492_tmp * 0.01585441609) +
           t86 * -0.135862 / a_tmp) +
          t323_tmp * 0.135862) +
         t139 * 0.135862;
  t84 = t7 * t59;
  t83 = t10 * t503;
  t82 = t85 * t494;
  t513 = (((((((t48 + t147 * 0.002644146244) - t35 * 0.002644146244) -
              t297_tmp * t470 * 2.9945998368930331E-6) +
             t12) +
            t492_tmp * 0.00084193681399999745) +
           t82 * 0.135862 / a_tmp) +
          t84 * 0.135862) -
         t83 * 0.135862;
  t20 = t7 * t124;
  t21 = t10 * t513;
  t30 = ((((((((((t317_tmp * 1.568871696532875E-10 -
                  t104 * 5.4635204655161008E-10) -
                 t266 * t418) +
                t403 * t417) -
               t144 * 2.4787446E-5) -
              t147 * 7.117814E-6) -
             t291 * 2.4787446E-5) +
            t35 * 7.117814E-6) +
           t420 * t463) -
          t416 * t100) +
         t492_tmp * 2.077264E-6) +
        t42 * 2.077264E-6 / a_tmp;
  t59 = t7 * t513;
  t503 = t10 * t124;
  t332 = t230_tmp * t11;
  t85 = t225_tmp * t71;
  t104 = (t225_tmp * 0.000740309489 - t230_tmp * 0.000218457134) +
         t333_tmp * 1.26077556260883E-8 / a_tmp;
  t100 = (t230_tmp * 0.004431760472 - t225_tmp * 0.000218457134) +
         t333_tmp * 1.2673148405298769E-9 / a_tmp;
  tau[0] =
      ((((((((t5 * -0.05074155792 + t8 * 0.00164788305444) - t70 * 0.000102) +
            t26 * 0.000102) -
           t9 * (((((((((t430 * 0.000218457134 - t431 * 0.000740309489) -
                        t20 * 0.019462) +
                       t10 * t429) +
                      t21 * 0.019462) -
                     t329 * t71) +
                    t72 * t381) +
                   t93 * t416_tmp) +
                  (((t7 * t30 + t334 * t100) + t42 * 0.000572001265 / a_tmp) -
                   t230_tmp * t14)) +
                 (t106 * -1.6317518327492342E-8 / a_tmp -
                  t429_tmp * 4.8151190019616922E-9 / a_tmp))) +
          t9 *
              (((((((t431 * 0.06614616 + t69 * 0.92) + t20) - t21) +
                  t333 * t11) -
                 t42 * 0.03077492 / a_tmp) +
                t225_tmp * t72) +
               t106 * 1.2804849126055231E-6 / a_tmp) *
              0.063146) +
         ((((-((((((((((t8 * -10.35800622 + t379) - t56) + t70) - t26) -
                    t34 * 0.000107697924) +
                   t323 * 0.135862) -
                  t64 * 1.055862) +
                 t332) +
                t85) +
               t78 * 2.3272763340607019E-5 / a_tmp) *
                 b_t323_tmp +
             t34 * 0.000379294663816248) +
            t45 * 1.3857924E-5) -
           t323 * 1.3857924E-5) +
          t6 * ((((((t430 * 0.004431760472 - t431 * 0.000218457134) +
                    t334 * t104) +
                   t7 * t429) +
                  t59 * 0.019462) +
                 ((((((t503 * 0.019462 + t329 * t11) - t72 * t385) +
                     t308 * t93) -
                    t10 * t30) -
                   t42 * 5.7496807E-5 / a_tmp) +
                  b_t416_tmp * t14)) +
                (t106 * -4.8151190019616922E-9 / a_tmp -
                 t429_tmp * 9.7682568978818128E-8 / a_tmp)))) +
        t6 *
            (((((((t430 * 0.06614616 + t51 * 0.92) + t59) + t503) +
                t334 * t71) -
               t42 * 0.0030746400000000109 / a_tmp) +
              t230_tmp * t72) -
             t429_tmp * 1.2804849126055231E-6 / a_tmp) *
            0.063146) +
       (((t379_tmp * -3.0544918336308929E-10 + t64 * 0.000107697924) -
         t332 * 0.000102) -
        t85 * 0.000102)) +
      t78 * -2.3738218607419161E-9 / a_tmp;
  t30 = ((t265 * t300 + t266 * t302) + t265 * t417) - t266 * t419;
  tau[1] =
      ((((((((((t30 + t430 * 0.00027855727372000068) +
               t431 * 0.00278465646316) +
              t51 * 0.0030746400000000109) +
             t69 * 0.03077492) +
            t49) +
           t13) -
          t147 * 2.55679E-7) +
         (((t291 * 2.077264E-6 + t144 * 2.077264E-6) + t35 * 2.55679E-7) +
          t59 * 0.0033420000000000121)) +
        (((((((((((t20 * 0.033451 - t21 * 0.033451) +
                  t503 * 0.0033420000000000121) -
                 t492_tmp * 0.001100428748) +
                t225 * t72) +
               t230 * t72) +
              t333_tmp * -7.3730961669862691E-7 / a_tmp * t11) +
             t351 * t71) +
            t381 * t11) -
           t71 * t385) +
          t279 * t124) -
         t280 * t513)) +
       ((t42 * -0.0066258277698 / a_tmp - t230_tmp * t104) + t225_tmp * t100)) +
      (t106 * 5.5441256437655659E-8 / a_tmp -
       t429_tmp * 5.54669541845755E-9 / a_tmp);
  tau[2] =
      (((((((((t30 + t40 * 0.116695) - t48 * 0.00619699999999998) -
             t12 * 0.00619699999999998) +
            t46 * 0.116695) +
           t49) +
          t13) -
         t147 * 1.664145327406795E-5) +
        ((((t291 * 0.00031063590994357987 + t144 * 0.00031063590994357987) +
           t35 * 1.664145327406795E-5) +
          t139 * 0.01585441609) -
         t84 * 0.00084193681399999745)) +
       ((((t83 * 0.00084193681399999745 + t323_tmp * 0.01585441609) -
          t492_tmp * 0.0029557773160589071) +
         t299 * t470) +
        t297 * (((((t236 - t239) - t388) + t389) + t391) +
                t331 * t63 * 1.365910643831687E-7 / (t9 - t29)))) +
      ((t42 * -0.001100428748 / a_tmp - t86 * 0.01585441609 / a_tmp) -
       t82 * 0.00084193681399999745 / a_tmp);
}

// End of code generation (go1_RL_inverse_dynamics_task_space.cpp)