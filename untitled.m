close all; clear all; format long;
addpath("ModernRobotics/packages/MATLAB/mr")
addpath("ModernRobotics/packages/MATLAB/mr/Symbolic")
global hip_G thigh_G calf_G M_bh M_ht M_tc M_cf s_1 s_2 s_3
load_go1_const(1); % FL, FR, RL, RR: 0, 1, 2, 3
g = [0; 0; -9.81];
Ftip = [0; 0; 0; 0; 0; 0];
Mlist = cat(3, M_bh, M_ht, M_tc, M_cf);
Glist = cat(3, hip_G, thigh_G, calf_G);
Slist = [s_1, s_2, s_3];

%% BASIC INVERSE DYNAMICS
syms t1 t2 t3 dt1 dt2 dt3 ddt1 ddt2 ddt3 real
thetalist = [t1; t2; t3];
dthetalist = [dt1; dt2; dt3];
ddthetalist = [ddt1; ddt2; ddt3];
taulist_sym = InverseDynamicsSymbolic(thetalist, dthetalist, ddthetalist, ...
                                      g, Ftip, Mlist, Glist, Slist);

%% TASK SPACE TRANS
M_bf = M_bh * M_ht * M_tc * M_cf;
T_bf = FKinSpaceSymbolic(M_bf, Slist, thetalist);
p = simplify(T_bf(1:3, 4));

syms vx vy vz real
v = [vx; vy; vz];
dq_sym = simplify(inv(jacobian(p, thetalist)) * v);

syms ax ay az real
a = [ax; ay; az];
f2 = jacobian(p, thetalist) * dthetalist;
df2_dq = jacobian(f2, thetalist);
df2_ddq = jacobian(f2, dthetalist);
ddq_sym = simplify(inv(df2_ddq) * (a - df2_dq * dthetalist));