function taulist = go1_FL_leg_inverse_dynamics_hip_zero(in1,in2,in3)
%go1_FL_leg_inverse_dynamics_hip_zero
%    TAULIST = go1_FL_leg_inverse_dynamics_hip_zero(IN1,IN2,IN3)

%    This function was generated by the Symbolic Math Toolbox version 9.2.
%    29-Jun-2023 13:44:17

ddt1 = in3(1,:);
ddt2 = in3(2,:);
ddt3 = in3(3,:);
dt1 = in2(1,:);
dt2 = in2(2,:);
dt3 = in2(3,:);
t2 = in1(2,:);
t3 = in1(3,:);
t4 = abs(t2);
t5 = abs(t3);
t6 = dt2+dt3;
t11 = t2.^2;
t12 = t3.^2;
t25 = ddt1.*8.752e-3;
t50 = dt2.*1.16695e-1;
t51 = dt3.*1.16695e-1;
t53 = ddt2.*3.3451e-2;
t54 = dt2.*3.3451e-2;
t56 = dt2.*6.197000000000001e-3;
t57 = dt3.*6.197000000000001e-3;
t58 = dt2.*4.485671726e-3;
t59 = dt2.*1.100428748e-3;
t60 = dt3.*1.100428748e-3;
t61 = ddt2.*3.342e-3;
t62 = dt2.*3.342e-3;
t63 = dt2.*5.72001265e-4;
t64 = dt2.*3.077492e-2;
t65 = dt2.*5.7496807e-5;
t66 = ddt2.*2.55679e-7;
t67 = ddt3.*2.55679e-7;
t68 = dt2.*2.55679e-7;
t69 = dt3.*2.55679e-7;
t70 = dt1.*1.02e-4;
t71 = ddt2.*3.07464e-3;
t72 = dt2.*3.07464e-3;
t74 = ddt2.*2.077264e-6;
t75 = ddt3.*2.077264e-6;
t76 = dt2.*2.077264e-6;
t77 = dt3.*2.077264e-6;
t80 = dt1.*9.384e-5;
t141 = ddt3.*1.585441609e-2;
t142 = dt3.*1.585441609e-2;
t143 = ddt3.*8.419368140000002e-4;
t144 = dt3.*8.419368140000002e-4;
t147 = ddt1.*1.3857924e-5;
t148 = dt1.*1.3857924e-5;
t7 = cos(t4);
t8 = cos(t5);
t9 = sin(t4);
t10 = sin(t5);
t13 = -t4;
t14 = -t5;
t15 = 1.0./t4;
t17 = 1.0./t5;
t38 = t25-9.81e+2./1.0e+2;
t55 = -t50;
t16 = t15.^2;
t18 = t17.^2;
t19 = t7-1.0;
t20 = t8-1.0;
t21 = t9+t13;
t22 = t10+t14;
t23 = ddt1.*t2.*t9.*t15;
t24 = dt1.*dt2.*t2.*t9.*t15;
t35 = dt1.*t2.*t3.*t9.*t10.*t15.*t17;
t45 = t2.*t9.*t15.*t38;
t79 = t3.*t10.*t17.*2.96244e-1;
t81 = t2.*t9.*t15.*3.3349e-2;
t84 = dt1.*t2.*t9.*t15.*3.3451e-2;
t85 = t3.*t10.*t17.*9.539000000000001e-3;
t86 = dt1.*t2.*t9.*t15.*7.40309489e-4;
t87 = t2.*t9.*t15.*2.315e-3;
t90 = dt1.*t2.*t9.*t15.*5.72001265e-4;
t91 = dt1.*t2.*t9.*t15.*2.18457134e-4;
t106 = dt1.*t2.*t9.*t15.*6.314599999999999e-2;
t119 = dt1.*t2.*t9.*t15.*5.809431999999999e-2;
t26 = -t24;
t27 = t11.*t16.*t19;
t28 = t12.*t18.*t20;
t31 = -t11.*t16.*(t4-t9);
t32 = -t12.*t18.*(t5-t10);
t39 = -t35;
t48 = -t45;
t82 = t23.*7.189799999999999e-2;
t89 = -t85;
t94 = -t91;
t95 = t12.*t17.*t20.*1.16695e-1;
t96 = t11.*t15.*t19.*3.3451e-2;
t100 = t12.*t17.*t20.*6.197000000000001e-3;
t103 = t11.*t15.*t19.*3.342e-3;
t107 = t24.*6.314599999999999e-2;
t108 = t35.*1.9462e-2;
t110 = t35.*6.197000000000001e-3;
t115 = t35.*1.088793059e-3;
t121 = t24.*5.809431999999999e-2;
t123 = t35.*2.55679e-7;
t125 = t35.*7.117814e-6;
t165 = t35.*2.644146244e-3;
t174 = t54+t106;
t181 = t64+t119;
t29 = t27+1.0;
t30 = t28+1.0;
t36 = t4+t31;
t37 = t5+t32;
t92 = t28.*2.96244e-1;
t93 = t27.*7.189799999999999e-2;
t97 = t28.*1.9462e-2;
t98 = t27.*3.3349e-2;
t99 = -t95;
t101 = t27.*2.315e-3;
t104 = t28.*9.539000000000001e-3;
t105 = -t103;
t109 = -t107;
t113 = -t108;
t126 = -t121;
t128 = -t125;
t186 = dt2.*t181;
t190 = t3.*t10.*t17.*t174;
t33 = ddt1.*t29;
t34 = dt1.*dt2.*t29;
t40 = dt1.*t2.*t9.*t15.*t30;
t41 = dt1.*t3.*t10.*t17.*t29;
t42 = dt1.*t29.*8.752e-3;
t44 = dt1.*t29.*8.05184e-3;
t52 = dt1.*t29.*t30;
t73 = t29.*t38;
t102 = -t98;
t111 = dt1.*t29.*3.342e-3;
t112 = dt1.*t29.*4.431760472e-3;
t114 = dt1.*t29.*2.18457134e-4;
t116 = dt1.*t29.*5.7496807e-5;
t120 = t3.*t37.*1.16695e-1;
t122 = t3.*t37.*6.197000000000001e-3;
t124 = t2.*t36.*3.3451e-2;
t129 = t2.*t36.*3.342e-3;
t160 = t93+7.189799999999999e-2;
t161 = t97+1.9462e-2;
t192 = -t190;
t197 = t30.*t174;
t212 = t190.*1.35862e-1;
t43 = -t42;
t46 = t23+t34;
t47 = -t44;
t49 = t26+t33;
t78 = -t73;
t83 = t73.*(2.3e+1./2.5e+1);
t117 = t40+t41;
t118 = -t114;
t127 = t39+t52;
t130 = t40.*1.16695e-1;
t131 = t41.*1.16695e-1;
t132 = t41.*1.9462e-2;
t133 = t40.*2.4787446e-5;
t134 = t41.*2.4787446e-5;
t135 = t40.*7.117814e-6;
t136 = t41.*7.117814e-6;
t137 = t40.*2.077264e-6;
t138 = t41.*2.077264e-6;
t145 = t52.*6.197000000000001e-3;
t149 = t52.*1.088793059e-3;
t151 = t52.*2.55679e-7;
t152 = t52.*7.117814e-6;
t157 = t3.*t10.*t17.*(t24-t33).*(-2.4787446e-5);
t158 = t3.*t10.*t17.*(t24-t33).*(-7.117814e-6);
t159 = t3.*t10.*t17.*(t24-t33).*7.117814e-6;
t162 = ddt1.*t160;
t163 = dt1.*t160;
t168 = t30.*(t24-t33).*(-1.088793059e-3);
t171 = t30.*(t24-t33).*1.088793059e-3;
t172 = t30.*(t24-t33).*(-7.117814e-6);
t173 = t30.*(t24-t33).*(-2.55679e-7);
t177 = t30.*(t24-t33).*2.55679e-7;
t179 = t41.*2.644146244e-3;
t182 = dt1.*t2.*t9.*t15.*t161;
t185 = dt3.*(t35-t52).*(-2.4787446e-5);
t187 = dt3.*(t35-t52).*(-7.117814e-6);
t188 = dt3.*(t35-t52).*(-2.077264e-6);
t189 = dt3.*(t35-t52).*7.117814e-6;
t191 = t84+t111;
t193 = dt1.*t29.*t161;
t195 = t100+t120;
t196 = t99+t122;
t199 = t96+t129;
t200 = t105+t124;
t201 = t3.*t10.*t17.*(t24-t33).*(-2.644146244e-3);
t203 = -t17.*(t95-t122);
t206 = -t15.*(t103-t124);
t208 = t15.*(t103-t124);
t217 = t58+t90+t116;
t219 = t197.*1.35862e-1;
t220 = t65+t94+t112;
t222 = t161.*(t24-t33).*(-1.35862e-1);
t224 = t161.*(t24-t33).*1.35862e-1;
t88 = -t83;
t139 = -t135;
t140 = -t136;
t146 = -t145;
t150 = -t149;
t153 = -t151;
t154 = t3.*t10.*t17.*t46.*1.088793059e-3;
t155 = t3.*t10.*t17.*t46.*7.117814e-6;
t164 = t30.*t46.*2.4787446e-5;
t166 = -t163;
t167 = t30.*t46.*7.117814e-6;
t169 = t30.*t46.*2.077264e-6;
t175 = t162.*(2.3e+1./2.5e+1);
t176 = t163.*(2.3e+1./2.5e+1);
t178 = dt3.*t117.*1.088793059e-3;
t180 = dt3.*t117.*7.117814e-6;
t183 = t69.*t117;
t194 = -t193;
t198 = t3.*t10.*t17.*t46.*2.644146244e-3;
t202 = t17.*t195;
t204 = t15.*t199;
t211 = t182.*1.35862e-1;
t213 = dt2.*t191.*1.35862e-1;
t214 = t193.*1.35862e-1;
t218 = t63+t86+t118;
t221 = t46.*t161.*1.35862e-1;
t223 = t43+t62+t163;
t232 = t61+t78+t109+t162;
t234 = t89+t92+t203+2.96244e-1;
t240 = t81+t101+t208+2.315e-3;
t249 = t3.*t10.*t17.*(t61-t73+t109+t162).*1.35862e-1;
t251 = t30.*(t61-t73+t109+t162).*1.35862e-1;
t263 = t76+t77+t128+t133+t134+t152;
t156 = -t155;
t170 = -t167;
t184 = -t180;
t205 = -t202;
t207 = t42+t166;
t215 = -t213;
t216 = -t214;
t225 = t3.*t10.*t17.*t223;
t226 = t47+t72+t176;
t227 = t30.*t223;
t235 = dt2.*t234;
t238 = t87+t102+t204-3.3349e-2;
t241 = t110+t130+t131+t146;
t242 = t3.*t10.*t17.*t234;
t245 = t30.*t234;
t246 = t2.*t9.*t15.*t240;
t252 = -t251;
t253 = ddt2.*t234.*1.35862e-1;
t261 = t68+t69+t115+t139+t140+t150;
t262 = t59+t60+t123+t137+t138+t153;
t264 = t6.*(t68+t69+t115-t135-t136+t150);
t265 = t6.*t263;
t267 = t117.*(t68+t69+t115-t135-t136+t150);
t271 = -t263.*(t35-t52);
t272 = t263.*(t35-t52);
t209 = dt2.*t207;
t228 = -t227;
t229 = t225.*1.35862e-1;
t230 = t227.*1.35862e-1;
t236 = t79+t104+t205+9.539000000000001e-3;
t243 = -t242;
t247 = -t246;
t250 = t29.*t238;
t254 = t235.*1.35862e-1;
t258 = dt3.*t241.*1.35862e-1;
t266 = -t265;
t268 = t117.*t262;
t269 = -t267;
t270 = -t262.*(t35-t52);
t293 = t51+t132+t182+t197+t225+t235;
t294 = t55+t132+t182+t197+t225+t235;
t210 = -t209;
t231 = -t230;
t237 = dt2.*t236;
t244 = t3.*t10.*t17.*t236;
t248 = t30.*t236;
t255 = ddt2.*t236.*1.35862e-1;
t259 = -t258;
t276 = t247+t250;
t277 = -dt1.*(t246-t250);
t278 = dt1.*(t246-t250);
t283 = ddt1.*(t246-t250).*(-1.35862e-1);
t285 = ddt1.*(t246-t250).*1.35862e-1;
t297 = dt3.*t294.*1.35862e-1;
t299 = t142+t179+t211+t219+t229+t254;
t233 = t48+t53+t82+t210;
t239 = -t237;
t256 = t237.*1.35862e-1;
t273 = t244+t245;
t274 = t243+t248;
t275 = -dt1.*t2.*t9.*t15.*(t242-t248);
t280 = t278.*(-2.3e+1./2.5e+1);
t281 = t278.*(2.3e+1./2.5e+1);
t282 = dt1.*t2.*t9.*t15.*(t242-t248).*(-1.35862e-1);
t284 = t278.*(-1.35862e-1);
t286 = t278.*1.35862e-1;
t288 = t70+t278;
t290 = t46.*(t242-t248).*(-1.35862e-1);
t295 = t57+t108+t190+t194+t228+t237;
t300 = t6.*t299;
t304 = t117.*t299;
t257 = t3.*t10.*t17.*t233.*1.35862e-1;
t260 = t30.*t233.*1.35862e-1;
t279 = dt1.*t29.*t273;
t289 = t80+t281;
t291 = t273.*(t24-t33).*(-1.35862e-1);
t296 = t56+t113+t192+t193+t227+t239;
t301 = t144+t165+t212+t216+t231+t256;
t302 = -t300;
t305 = -t304;
t309 = t295.*t299;
t287 = t279.*1.35862e-1;
t292 = dt1.*t29.*t289;
t298 = dt3.*t296.*1.35862e-1;
t303 = t6.*t301;
t306 = -t301.*(t35-t52);
t307 = t293.*t301;
t310 = t275+t279+t288;
t308 = -t307;
t311 = t148+t282+t286+t287;
t319 = t299.*t310;
t320 = t301.*t310;
t321 = t147+t215+t259+t285+t290+t291+t305+t306;
t312 = t117.*t311;
t313 = -t311.*(t35-t52);
t314 = t311.*(t35-t52);
t315 = t293.*t311;
t317 = t295.*t311;
t316 = -t315;
t318 = -t317;
t322 = t143+t198+t224+t252+t255+t257+t297+t302+t314;
t323 = t141+t201+t221+t249+t253+t260+t298+t303+t312;
t324 = t3.*t10.*t17.*t323;
t325 = t30.*t322;
t327 = t74+t75+t156+t157+t164+t172+t184+t185+t264+t270+t316+t319;
t328 = t66+t67+t154+t159+t170+t171+t178+t189+t266+t268+t318+t320;
t326 = -t325;
t329 = t71+t88+t126+t175+t186+t292+t324+t326;
et1 = ddt1.*(-1.07697924e-4)+t258+t304+dt2.*t191.*1.055862-ddt1.*(t246-t250).*1.055862;
et2 = t273.*(t24-t33).*1.35862e-1+t301.*(t35-t52)+t46.*(t242-t248).*1.35862e-1+dt1.*t29.*t226+dt1.*t2.*t9.*t15.*t181;
et3 = ddt2.*(-5.7496807e-5)+t23.*2.18457134e-4+t24.*4.431760472e-3-t33.*4.431760472e-3+t34.*2.18457134e-4;
et4 = t324.*(-1.9462e-2)-dt2.*t218+t30.*t328+t161.*t322+t223.*t289-t226.*t288+t273.*(-t147+t213+t258+t283+t304+t273.*(t24-t33).*1.35862e-1+t301.*(t35-t52)+t46.*(t242-t248).*1.35862e-1);
et5 = t3.*t10.*t17.*(-t74-t75+t155-t164+t180-t264+t315-t319+dt3.*(t35-t52).*2.4787446e-5+t30.*(t24-t33).*7.117814e-6+t262.*(t35-t52)+t3.*t10.*t17.*(t24-t33).*2.4787446e-5)+dt1.*t2.*t9.*t15.*t217;
et6 = ddt2.*5.72001265e-4+t23.*7.40309489e-4+t24.*2.18457134e-4-t33.*2.18457134e-4+t34.*7.40309489e-4-dt2.*t220;
et7 = -t174.*t289+t181.*t288+t161.*t323+(t242-t248).*(-t147+t213+t258+t283+t304+t273.*(t24-t33).*1.35862e-1+t301.*(t35-t52)+t46.*(t242-t248).*1.35862e-1);
et8 = -t30.*(-t74-t75+t155-t164+t180-t264+t315-t319+dt3.*(t35-t52).*2.4787446e-5+t30.*(t24-t33).*7.117814e-6+t262.*(t35-t52)+t3.*t10.*t17.*(t24-t33).*2.4787446e-5)+dt1.*t29.*t217;
et9 = t3.*t10.*t17.*t322.*1.9462e-2+t3.*t10.*t17.*t328;
et10 = ddt1.*3.79294663816248e-4-t304.*1.02e-4;
et11 = dt2.*t191.*(-1.07697924e-4)-dt3.*t241.*1.3857924e-5-(t246-t250).*(et1+et2)-t29.*t329.*8.752e-3+t160.*t329-t29.*(et3+et4+et5);
et12 = ddt1.*(t246-t250).*1.07697924e-4-t273.*(t24-t33).*1.3857924e-5;
et13 = t301.*(t35-t52).*(-1.02e-4)-t46.*(t242-t248).*1.3857924e-5-dt1.*t29.*t226.*1.02e-4;
et14 = t2.*t9.*t15.*(ddt2.*3.077492e-2+t23.*6.614615999999999e-2-t45.*(2.3e+1./2.5e+1)-t209.*(2.3e+1./2.5e+1)-dt2.*t226+t30.*t323+t3.*t10.*t17.*t322+dt1.*t2.*t9.*t15.*t289).*6.314599999999999e-2+t2.*t9.*t15.*(et6+et7+et8+et9);
et15 = dt1.*t2.*t9.*t15.*t181.*(-1.02e-4)-5.074155792e-2;
et16 = ddt2.*6.6258277698e-3+ddt3.*1.100428748e-3+t23.*2.78465646316e-3;
et17 = t24.*(-2.5164802444e-4)+t33.*5.7496807e-5+t34.*5.72001265e-4-t45.*3.077492e-2;
et18 = t73.*(-3.07464e-3)+t162.*3.07464e-3+t169+t177+t183+t188-t209.*3.077492e-2+t269+t272+t308+t309+t324.*3.342e-3;
et19 = t325.*(-3.342e-3)-dt2.*t226.*3.3451e-2+t62.*t181+t30.*t323.*3.3451e-2+t84.*t289+t111.*t289+t174.*t226-t181.*t223+t234.*t323+t236.*t322-dt1.*t29.*t218+t3.*t10.*t17.*t46.*2.55679e-7;
et20 = t3.*t10.*t17.*t322.*3.3451e-2-t3.*t10.*t17.*(t24-t33).*2.077264e-6+dt1.*t2.*t9.*t15.*t220;
et21 = ddt2.*1.100428748e-3+ddt3.*2.955777316058907e-3+t169+t177+t183+t188+t269+t272-t300.*6.197000000000001e-3;
et22 = t303.*1.16695e-1+t308+t309+t312.*1.16695e-1+t314.*6.197000000000001e-3+ddt2.*t234.*1.585441609e-2;
et23 = ddt2.*t236.*8.419368140000002e-4+t46.*t161.*1.585441609e-2;
et24 = t30.*t233.*1.585441609e-2+t142.*t296+t144.*t294-t30.*(t61-t73+t109+t162).*8.419368140000002e-4;
et25 = t161.*(t24-t33).*8.419368140000002e-4+t3.*t10.*t17.*t46.*1.6641453274068e-5;
et26 = t3.*t10.*t17.*t233.*8.419368140000002e-4+t3.*t10.*t17.*(t61-t73+t109+t162).*1.585441609e-2;
et27 = t3.*t10.*t17.*(t24-t33).*(-3.106359099435799e-4);
taulist = [et10+et11+et12+et13+et14+et15;et16+et17+et18+et19+et20;et21+et22+et23+et24+et25+et26+et27];