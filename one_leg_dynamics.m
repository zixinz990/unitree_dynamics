close all; clear; clc; format long;

addpath("ModernRobotics/packages/MATLAB/mr")
go1_const;
g = [0; 0; -9.81];
Ftip = [0; 0; 0; 0; 0; 0];
Mlist = cat(3, M_bh, M_ht, M_tc, M_cf);
Glist = cat(3, hip_G, thigh_G, calf_G);
Slist = [s_1, s_2, s_3];

%% NO SYMBOLIC TEST
thetalist_ = [rad2deg(5); rad2deg(30); rad2deg(-60)];
dthetalist_ = [0.3; 0.4; 0.5];
ddthetalist_ = [0.2; 0.3; 0.4];

taulist = InverseDynamics(thetalist_, dthetalist_, ddthetalist_, g, Ftip, Mlist, Glist, Slist);
disp(taulist);

%% SYMBOLIC TEST
syms t1 t2 t3 dt1 dt2 dt3 ddt1 ddt2 ddt3 real
thetalist = [t1; t2; t3];
dthetalist = [dt1; dt2; dt3];
ddthetalist = [ddt1; ddt2; ddt3];

taulist_sym = InverseDynamicsSymbolic(thetalist, dthetalist, ddthetalist, g, Ftip, Mlist, Glist, Slist);
taulist_ = double(subs(taulist_sym, [thetalist; dthetalist; ddthetalist], [thetalist_; dthetalist_; ddthetalist_]));
disp(taulist_);

%% GENERATE C++ FUNCTION
matlabFunction(taulist_sym, ...
               'file', 'GeneratedFunctions/go1_one_leg_inverse_dynamics.m', ...
               'vars', {[t1; t2; t3], [dt1; dt2; dt3], [ddt1; ddt2; ddt3]}, ...
               'outputs', {'taulist'});