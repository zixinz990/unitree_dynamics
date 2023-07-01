clc; close all; clear all; format long;
addpath("ModernRobotics/packages/MATLAB/mr")
addpath("ModernRobotics/packages/MATLAB/mr/Symbolic")
global M_bh M_ht M_tc M_cf s_1 s_2 s_3

load_go1_const(0); % FL, FR, RL, RR: 0, 1, 2, 3
g = [0; 0; -9.81];
Ftip = [0; 0; 0; 0; 0; 0];
M_bf = M_bh * M_ht * M_tc * M_cf;
Slist = [s_1, s_2, s_3];

%% TEST
syms t1 t2 t3 dt1 dt2 dt3 ddt1 ddt2 ddt3
thetalist = [t1; t2; t3];
T_bf = FKinSpaceSymbolic(M_bf, Slist, thetalist);
p = simplify(T_bf(1:3, 4)); % p = f1(q)

%% CALCULATE dq USING v and q
syms vx vy vz real
v = [vx; vy; vz];
dq_sym = simplify(inv(jacobian(p, thetalist)) * v);
% matlabFunction(dq_sym, ...
%                'file', 'GeneratedFunctions/cal_go1_FL_dq.m', ...
%                'vars', {[t1; t2; t3], [vx; vy; vz]});

%% CALCULATE ddq USING a and dq
dthetalist = [dt1; dt2; dt3];
syms ax ay az real
a = [ax; ay; az];
f2 = jacobian(p, thetalist) * dthetalist;
df2_dq = jacobian(f2, thetalist);
df2_ddq = jacobian(f2, dthetalist);
ddq_sym = simplify(inv(df2_ddq) * (a - df2_dq * dthetalist));
% matlabFunction(ddq_sym, ...
%                'file', 'GeneratedFunctions/cal_go_FL_ddq.m', ...
%                'vars', {[t1; t2; t3], [dt1; dt2; dt3], [ax; ay; az]});
