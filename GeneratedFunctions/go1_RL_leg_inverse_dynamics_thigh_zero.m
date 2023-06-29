function taulist = go1_RL_leg_inverse_dynamics_thigh_zero(in1,in2,in3)
%go1_RL_leg_inverse_dynamics_thigh_zero
%    TAULIST = go1_RL_leg_inverse_dynamics_thigh_zero(IN1,IN2,IN3)

%    This function was generated by the Symbolic Math Toolbox version 9.2.
%    29-Jun-2023 13:51:32

ddt1 = in3(1,:);
ddt2 = in3(2,:);
ddt3 = in3(3,:);
dt1 = in2(1,:);
dt2 = in2(2,:);
dt3 = in2(3,:);
t1 = in1(1,:);
t3 = in1(3,:);
t4 = abs(t1);
t5 = abs(t3);
t6 = dt2+dt3;
t11 = dt1.^2;
t12 = dt2.^2;
t13 = t1.^2;
t14 = t3.^2;
t28 = dt2.*1.16695e-1;
t29 = dt3.*1.16695e-1;
t30 = ddt2.*3.3451e-2;
t32 = ddt2.*3.342e-3;
t33 = dt2.*3.342e-3;
t34 = dt2.*1.100428748e-3;
t35 = dt3.*1.100428748e-3;
t36 = dt2.*6.197e-3;
t37 = dt3.*6.197e-3;
t38 = dt2.*5.72001265e-4;
t39 = dt1.*2.18457134e-4;
t41 = dt2.*2.55679e-7;
t42 = dt3.*2.55679e-7;
t43 = dt2.*2.077264e-6;
t44 = dt3.*2.077264e-6;
t46 = dt1.*3.3451e-2;
t47 = ddt1.*6.314599999999999e-2;
t48 = dt1.*6.314599999999999e-2;
t81 = ddt3.*1.585441609e-2;
t82 = dt3.*1.585441609e-2;
t83 = ddt3.*8.419368140000001e-4;
t84 = dt3.*8.419368140000001e-4;
t85 = dt1.*4.544719762000001e-3;
t7 = cos(t4);
t8 = cos(t5);
t9 = sin(t4);
t10 = sin(t5);
t15 = -t5;
t16 = 1.0./t4;
t18 = 1.0./t5;
t31 = -t28;
t40 = -t38;
t49 = dt2.*t48;
t91 = t33+t48;
t17 = t16.^2;
t19 = t18.^2;
t20 = t7-1.0;
t21 = t8-1.0;
t22 = t10+t15;
t45 = t3.*t10.*t18.*2.96244e-1;
t50 = dt1.*t3.*t10.*t18.*1.16695e-1;
t51 = dt2.*t3.*t10.*t18.*3.3451e-2;
t52 = dt1.*t3.*t10.*t18.*1.9462e-2;
t53 = t3.*t10.*t18.*9.539000000000001e-3;
t57 = dt1.*t3.*t10.*t18.*2.4787446e-5;
t60 = dt1.*t3.*t10.*t18.*7.117814e-6;
t62 = dt1.*t3.*t10.*t18.*t42;
t64 = dt1.*t3.*t10.*t18.*2.077264e-6;
t86 = t39+t40;
t87 = ddt1.*t3.*t10.*t18.*2.644146244e-3;
t88 = dt1.*t3.*t10.*t18.*2.644146244e-3;
t89 = dt2.*t3.*t10.*t18.*4.544719762000001e-3;
t92 = t30+t49;
t97 = t3.*t10.*t18.*t91;
t23 = t14.*t19.*t21;
t25 = -t14.*t19.*(t5-t10);
t27 = t13.*t17.*t20.*(9.81e+2./1.0e+2);
t54 = -t50;
t55 = -t51;
t56 = -t53;
t59 = t14.*t18.*t21.*1.16695e-1;
t65 = -t60;
t66 = t14.*t18.*t21.*6.197e-3;
t90 = dt2.*t88;
t112 = t97.*1.35862e-1;
t113 = t3.*t10.*t18.*t92.*1.35862e-1;
t24 = t23+1.0;
t26 = t5+t25;
t58 = t23.*2.96244e-1;
t61 = t23.*1.9462e-2;
t63 = -t59;
t67 = t23.*9.539000000000001e-3;
t103 = t27+t32+t47+9.81e+2./1.0e+2;
t68 = dt2.*t24.*3.3451e-2;
t69 = dt1.*t24.*1.088793059e-3;
t70 = dt1.*t24.*6.197e-3;
t72 = dt1.*t24.*7.117814e-6;
t73 = ddt1.*t24.*2.55679e-7;
t74 = dt1.*t24.*2.55679e-7;
t75 = t3.*t26.*1.16695e-1;
t78 = dt1.*t24.*t43;
t79 = dt1.*t24.*t44;
t80 = t3.*t26.*6.197e-3;
t93 = t61+1.9462e-2;
t94 = dt2.*t24.*4.544719762000001e-3;
t98 = t24.*t91;
t115 = t24.*t92.*1.35862e-1;
t117 = t3.*t10.*t18.*t103.*1.35862e-1;
t118 = t24.*t103.*1.35862e-1;
t71 = -t69;
t76 = -t73;
t77 = -t74;
t95 = dt1.*t93;
t99 = t54+t70;
t100 = -t98;
t101 = t66+t75;
t102 = t63+t80;
t105 = -t18.*(t59-t80);
t107 = ddt1.*t93.*1.35862e-1;
t114 = t98.*1.35862e-1;
t119 = -t118;
t122 = t43+t44+t57+t72;
t96 = -t95;
t104 = t18.*t101;
t108 = t95.*1.35862e-1;
t110 = -t107;
t116 = -t114;
t120 = t34+t35+t64+t77;
t121 = t41+t42+t65+t71;
t125 = dt1.*t24.*t122;
t127 = t56+t58+t105+2.96244e-1;
t106 = -t104;
t109 = dt2.*t108;
t111 = -t108;
t123 = dt1.*t3.*t10.*t18.*t121;
t126 = -t125;
t128 = dt2.*t127;
t132 = t3.*t10.*t18.*t127;
t135 = t24.*t127;
t137 = ddt2.*t127.*1.35862e-1;
t124 = -t123;
t129 = t45+t67+t106+9.539000000000001e-3;
t133 = -t132;
t138 = t128.*1.35862e-1;
t141 = t29+t52+t68+t97+t128;
t142 = t31+t52+t68+t97+t128;
t130 = dt2.*t129;
t134 = t3.*t10.*t18.*t129;
t136 = t24.*t129;
t139 = ddt2.*t129.*1.35862e-1;
t143 = dt3.*t142.*1.35862e-1;
t153 = t82+t88+t94+t112+t138;
t131 = -t130;
t140 = t130.*1.35862e-1;
t144 = t134+t135;
t146 = t133+t136;
t148 = t37+t51+t96+t100+t130;
t155 = t6.*t153;
t145 = dt1.*t144;
t147 = t36+t55+t95+t98+t131;
t156 = -t155;
t159 = t84+t89+t111+t116+t140;
t162 = t148.*t153;
t149 = t145.*1.35862e-1;
t150 = dt3.*t147.*1.35862e-1;
t151 = t46+t145;
t160 = t6.*t159;
t161 = t141.*t159;
t152 = t85+t149;
t163 = -t161;
t154 = dt1.*t3.*t10.*t18.*t152;
t157 = dt1.*t24.*t152;
t158 = -t157;
t165 = t81+t87+t109+t115+t117+t137+t150+t154+t160;
t164 = t83+t90+t110+t113+t119+t139+t143+t156+t158;
et1 = ddt2.*2.55679e-7+ddt3.*2.55679e-7-ddt1.*t24.*1.088793059e-3-t6.*t122-t148.*t152+t151.*t159-dt1.*dt2.*t24.*7.117814e-6;
et2 = dt1.*dt3.*t24.*(-7.117814e-6)-ddt1.*t3.*t10.*t18.*7.117814e-6+dt1.*dt2.*t3.*t10.*t18.*1.088793059e-3+dt1.*dt3.*t3.*t10.*t18.*1.088793059e-3+dt1.*t3.*t10.*t18.*t120;
et3 = ddt1.*4.544719762000001e-3-dt1.*dt2.*4.540508040000001e-4+ddt1.*t144.*1.35862e-1;
et4 = dt3.*(t50-t70).*(-1.35862e-1)+dt1.*t24.*t159+t1.*t9.*t16.*1.33280622-dt1.*dt2.*(t132-t136).*1.35862e-1-dt1.*t3.*t10.*t18.*t153;
et5 = ddt2.*2.077264e-6+ddt3.*2.077264e-6+ddt1.*t24.*7.117814e-6+t6.*t121-t141.*t152+t151.*t153+dt1.*dt2.*t24.*2.4787446e-5;
et6 = dt1.*dt3.*t24.*2.4787446e-5+dt1.*t24.*t120+ddt1.*t3.*t10.*t18.*2.4787446e-5-dt1.*dt2.*t3.*t10.*t18.*7.117814e-6-dt1.*dt3.*t3.*t10.*t18.*7.117814e-6;
et7 = ddt1.*9.660945351026661e-3;
et8 = ddt2.*2.5164802444e-4+t11.*1.94331309832e-3;
et9 = t12.*1.94331309832e-3-dt1.*dt2.*3.36495370084604e-4;
et10 = ddt1.*t144.*4.544719762000001e-3-dt1.*t91.*3.077492e-2-t24.*t164.*6.314599999999999e-2-t93.*t164-t24.*(et1+et2)+dt2.*(t38-t39);
et11 = dt3.*(t50-t70).*(-4.544719762000001e-3)+t144.*(et3+et4)+t1.*t9.*t16.*3.4707703248522e-1;
et12 = t13.*t17.*t20.*5.191637212799999e-1+t24.*t46.*t159-dt2.*t85.*(t132-t136)+t3.*t10.*t18.*t165.*8.260799999999999e-2+t3.*t10.*t18.*(et5+et6)-dt1.*t3.*t10.*t18.*t153.*3.3451e-2;
et13 = 5.191637212799999e-1;
et14 = ddt1.*2.5164802444e-4+ddt2.*6.6258277698e-3+ddt3.*1.100428748e-3;
et15 = t11.*1.0284978264e-4+t12.*1.0284978264e-4+t62+t76+t78+t79+t124+t126+t162+t163;
et16 = dt1.*dt2.*2.51531436332e-3-dt2.*t91.*3.077492e-2-t24.*t164.*3.342e-3+t24.*t165.*3.3451e-2;
et17 = t127.*t165+t129.*t164-dt1.*(t38-t39)+t13.*t17.*t20.*3.01622184e-2+ddt1.*t3.*t10.*t18.*2.077264e-6+t3.*t10.*t18.*t164.*3.3451e-2+t3.*t10.*t18.*t165.*3.342e-3+dt1.*t3.*t10.*t18.*t41;
et18 = 3.01622184e-2;
et19 = ddt2.*1.100428748e-3+ddt3.*2.955777316058907e-3+t62+t76+t78+t79+t124+t126-t155.*6.197e-3;
et20 = t157.*(-6.197e-3)+t160.*1.16695e-1+t162+t163-ddt1.*t93.*8.419368140000001e-4;
et21 = ddt2.*t127.*1.585441609e-2+ddt2.*t129.*8.419368140000001e-4;
et22 = dt2.*t95.*1.585441609e-2+t24.*t92.*1.585441609e-2;
et23 = t24.*t103.*(-8.419368140000001e-4)+t50.*t152+t84.*t142+t82.*t147+ddt1.*t3.*t10.*t18.*3.106359099435799e-4;
et24 = t3.*t10.*t18.*t92.*8.419368140000001e-4+t3.*t10.*t18.*t103.*1.585441609e-2;
et25 = dt1.*dt2.*t3.*t10.*t18.*1.6641453274068e-5;
taulist = [et7+et8+et9+et10+et11+et12+et13;et14+et15+et16+et17+et18;et19+et20+et21+et22+et23+et24+et25];
