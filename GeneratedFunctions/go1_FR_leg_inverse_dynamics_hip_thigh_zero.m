function taulist = go1_FR_leg_inverse_dynamics_hip_thigh_zero(in1,in2,in3)
%go1_FR_leg_inverse_dynamics_hip_thigh_zero
%    TAULIST = go1_FR_leg_inverse_dynamics_hip_thigh_zero(IN1,IN2,IN3)

%    This function was generated by the Symbolic Math Toolbox version 9.2.
%    29-Jun-2023 13:48:03

ddt1 = in3(1,:);
ddt2 = in3(2,:);
ddt3 = in3(3,:);
dt1 = in2(1,:);
dt2 = in2(2,:);
dt3 = in2(3,:);
t3 = in1(3,:);
t2 = abs(t3);
t4 = dt2+dt3;
t7 = dt1.^2;
t8 = dt2.^2;
t9 = t3.^2;
t19 = dt2.*1.16695e-1;
t20 = dt3.*1.16695e-1;
t21 = ddt2.*3.3451e-2;
t22 = dt2.*6.197000000000001e-3;
t23 = dt3.*6.197000000000001e-3;
t24 = dt2.*1.100428748e-3;
t25 = dt3.*1.100428748e-3;
t26 = ddt2.*3.342e-3;
t27 = dt2.*3.342e-3;
t28 = dt2.*5.72001265e-4;
t30 = dt1.*2.18457134e-4;
t33 = dt2.*2.55679e-7;
t34 = dt3.*2.55679e-7;
t35 = dt2.*2.077264e-6;
t36 = dt3.*2.077264e-6;
t38 = dt1.*3.3451e-2;
t39 = ddt1.*6.314599999999999e-2;
t40 = dt1.*6.314599999999999e-2;
t45 = dt1.*dt2.*(-6.314599999999999e-2);
t76 = ddt3.*1.585441609e-2;
t77 = dt3.*1.585441609e-2;
t78 = ddt3.*8.419368140000002e-4;
t79 = dt3.*8.419368140000002e-4;
t81 = dt1.*4.544719762000001e-3;
t5 = cos(t2);
t6 = sin(t2);
t10 = -t2;
t11 = 1.0./t2;
t29 = -t22;
t31 = -t27;
t32 = -t28;
t41 = dt2.*t40;
t43 = -t39;
t80 = -t78;
t90 = t21+t45;
t12 = t11.^2;
t13 = t5-1.0;
t14 = t6+t10;
t37 = t3.*t6.*t11.*2.96244e-1;
t42 = dt1.*t3.*t6.*t11.*1.16695e-1;
t44 = dt2.*t3.*t6.*t11.*3.3451e-2;
t46 = t3.*t6.*t11.*9.539000000000001e-3;
t48 = dt1.*t3.*t6.*t11.*1.6646e-2;
t51 = dt1.*t3.*t6.*t11.*2.4787446e-5;
t54 = dt1.*t3.*t6.*t11.*7.117814e-6;
t56 = dt1.*t3.*t6.*t11.*t34;
t58 = dt1.*t3.*t6.*t11.*2.077264e-6;
t82 = t30+t32;
t83 = ddt1.*t3.*t6.*t11.*2.261558852e-3;
t84 = dt1.*t3.*t6.*t11.*2.261558852e-3;
t85 = dt2.*t3.*t6.*t11.*4.544719762000001e-3;
t89 = t31+t40;
t94 = t26+t43+9.81e+2./1.0e+2;
t110 = t3.*t6.*t11.*t90.*1.35862e-1;
t15 = t9.*t12.*t13;
t17 = -t9.*t12.*(t2-t6);
t47 = -t42;
t49 = -t46;
t50 = -t48;
t53 = t9.*t11.*t13.*1.16695e-1;
t59 = t9.*t11.*t13.*6.197000000000001e-3;
t60 = -t54;
t86 = -t83;
t87 = -t84;
t88 = dt2.*t84;
t95 = t3.*t6.*t11.*t89;
t112 = -t110;
t115 = t3.*t6.*t11.*t94.*1.35862e-1;
t16 = t15+1.0;
t18 = t2+t17;
t52 = t15.*2.96244e-1;
t55 = t15.*1.6646e-2;
t57 = -t53;
t61 = t15.*9.539000000000001e-3;
t96 = -t95;
t109 = t95.*1.35862e-1;
t62 = dt2.*t16.*3.3451e-2;
t63 = dt1.*t16.*6.197000000000001e-3;
t65 = dt1.*t16.*1.088793059e-3;
t67 = dt1.*t16.*7.117814e-6;
t68 = ddt1.*t16.*2.55679e-7;
t69 = dt1.*t16.*2.55679e-7;
t70 = t3.*t18.*1.16695e-1;
t71 = t3.*t18.*6.197000000000001e-3;
t74 = dt1.*t16.*t35;
t75 = dt1.*t16.*t36;
t91 = t55+1.6646e-2;
t92 = dt2.*t16.*4.544719762000001e-3;
t98 = t16.*t89;
t111 = -t109;
t114 = t16.*t90.*1.35862e-1;
t116 = t16.*t94.*1.35862e-1;
t64 = -t62;
t66 = -t65;
t72 = -t68;
t73 = -t69;
t93 = dt1.*t91;
t97 = t47+t63;
t99 = t59+t70;
t100 = t57+t71;
t102 = -t11.*(t53-t71);
t104 = ddt1.*t91.*1.35862e-1;
t113 = t98.*1.35862e-1;
t119 = t35+t36+t51+t67;
t101 = t11.*t99;
t105 = t93.*1.35862e-1;
t106 = -t104;
t108 = dt2.*t93.*(-1.35862e-1);
t117 = t24+t25+t58+t73;
t118 = t33+t34+t60+t66;
t122 = dt1.*t16.*t119;
t124 = t49+t52+t102+2.96244e-1;
t103 = -t101;
t107 = dt2.*t105;
t120 = dt1.*t3.*t6.*t11.*t118;
t123 = -t122;
t125 = dt2.*t124;
t129 = t3.*t6.*t11.*t124;
t132 = t16.*t124;
t134 = ddt2.*t124.*1.35862e-1;
t121 = -t120;
t126 = t37+t61+t103+9.539000000000001e-3;
t127 = -t125;
t130 = -t129;
t135 = t125.*1.35862e-1;
t140 = t20+t50+t62+t96+t125;
t128 = dt2.*t126;
t131 = t3.*t6.*t11.*t126;
t133 = t16.*t126;
t136 = ddt2.*t126.*1.35862e-1;
t139 = t19+t48+t64+t95+t127;
t153 = t77+t87+t92+t111+t135;
t137 = t128.*1.35862e-1;
t138 = -t136;
t141 = dt3.*t139.*1.35862e-1;
t142 = t131+t132;
t144 = t130+t133;
t145 = t23+t44+t93+t98+t128;
t146 = t29+t44+t93+t98+t128;
t154 = t4.*t153;
t143 = dt1.*t142;
t148 = dt3.*t146.*1.35862e-1;
t156 = t79+t85+t105+t113+t137;
t158 = t145.*t153;
t147 = t143.*1.35862e-1;
t149 = -t148;
t150 = t38+t143;
t157 = t4.*t156;
t159 = t140.*t156;
t151 = t81+t147;
t160 = -t159;
t152 = dt1.*t3.*t6.*t11.*t151;
t155 = dt1.*t16.*t151;
t161 = t80+t88+t106+t112+t116+t138+t141+t154+t155;
t162 = t76+t86+t108+t114+t115+t134+t149+t152+t157;
et1 = ddt2.*2.55679e-7+ddt3.*2.55679e-7-ddt1.*t16.*1.088793059e-3-t4.*t119-t145.*t151+t150.*t156-dt1.*dt2.*t16.*7.117814e-6;
et2 = dt1.*dt3.*t16.*(-7.117814e-6)-ddt1.*t3.*t6.*t11.*7.117814e-6+dt1.*dt2.*t3.*t6.*t11.*1.088793059e-3+dt1.*dt3.*t3.*t6.*t11.*1.088793059e-3+dt1.*t3.*t6.*t11.*t117;
et3 = ddt1.*(-4.544719762000001e-3)+dt1.*dt2.*4.54050804e-4-ddt1.*t142.*1.35862e-1;
et4 = dt3.*(t42-t63).*1.35862e-1-dt1.*t16.*t156+dt1.*dt2.*(t129-t133).*1.35862e-1+dt1.*t3.*t6.*t11.*t153;
et5 = ddt2.*2.077264e-6+ddt3.*2.077264e-6+ddt1.*t16.*7.117814e-6+t4.*t118-t140.*t151+t150.*t153+dt1.*dt2.*t16.*2.4787446e-5;
et6 = dt1.*dt3.*t16.*2.4787446e-5+dt1.*t16.*t117+ddt1.*t3.*t6.*t11.*2.4787446e-5-dt1.*dt2.*t3.*t6.*t11.*7.117814e-6-dt1.*dt3.*t3.*t6.*t11.*7.117814e-6;
et7 = ddt1.*9.660945351026661e-3;
et8 = ddt2.*(-1.3665441044e-4)-t7.*1.94331309832e-3;
et9 = t8.*(-1.94331309832e-3)-dt1.*dt2.*3.36495370084604e-4;
et10 = ddt1.*t142.*4.544719762000001e-3+dt1.*t89.*3.077492e-2-t16.*t161.*6.314599999999999e-2-t91.*t161-t16.*(et1+et2)+dt2.*(t28-t30);
et11 = dt3.*(t42-t63).*(-4.544719762000001e-3)-t142.*(et3+et4)+t16.*t38.*t156-dt2.*t81.*(t129-t133)-t3.*t6.*t11.*t162.*7.979199999999999e-2+t3.*t6.*t11.*(et5+et6);
et12 = dt1.*t3.*t6.*t11.*t153.*(-3.3451e-2)-5.191637212799999e-1;
et13 = ddt1.*(-1.3665441044e-4)+ddt2.*6.6258277698e-3+ddt3.*1.100428748e-3;
et14 = t7.*1.0284978264e-4+t8.*1.0284978264e-4+t56+t72+t74+t75+t121+t123+t158+t160;
et15 = dt1.*dt2.*(-1.37131183332e-3)+dt2.*t89.*3.077492e-2+t16.*t161.*3.342e-3+t16.*t162.*3.3451e-2+t124.*t162;
et16 = -t126.*t161-dt1.*(t28-t30)+ddt1.*t3.*t6.*t11.*2.077264e-6-t3.*t6.*t11.*t161.*3.3451e-2+t3.*t6.*t11.*t162.*3.342e-3+dt1.*t3.*t6.*t11.*t33+3.01622184e-2;
et17 = ddt2.*1.100428748e-3+ddt3.*2.955777316058907e-3+t56+t72+t74+t75+t121+t123-t154.*6.197000000000001e-3;
et18 = t155.*(-6.197000000000001e-3)+t157.*1.16695e-1+t158+t160+ddt1.*t91.*8.419368140000002e-4;
et19 = ddt2.*t124.*1.585441609e-2+ddt2.*t126.*8.419368140000002e-4;
et20 = dt2.*t93.*(-1.585441609e-2)-dt3.*t139.*8.419368140000002e-4;
et21 = dt3.*t146.*(-1.585441609e-2)+t16.*t90.*1.585441609e-2;
et22 = t16.*t94.*(-8.419368140000002e-4)+t42.*t151-ddt1.*t3.*t6.*t11.*2.6183534623414e-4;
et23 = t3.*t6.*t11.*t90.*8.419368140000002e-4+t3.*t6.*t11.*t94.*1.585441609e-2;
et24 = dt1.*dt2.*t3.*t6.*t11.*(-1.3759201205844e-5);
taulist = [et7+et8+et9+et10+et11+et12;et13+et14+et15+et16;et17+et18+et19+et20+et21+et22+et23+et24];
