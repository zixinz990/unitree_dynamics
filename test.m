clc; close all; clear all; format long;

addpath("ModernRobotics/packages/MATLAB/mr")
addpath("ModernRobotics/packages/MATLAB/mr/Symbolic")
global hip_G thigh_G calf_G M_bh M_ht M_tc M_cf s_1 s_2 s_3

dthetalist = [rand; rand; rand];
ddthetalist = [rand; rand; rand];

load_go1_const(3); % FL, FR, RL, RR: 0, 1, 2, 3
g = [0; 0; -9.81];
Ftip = [0; 0; 0; 0; 0; 0];
Mlist = cat(3, M_bh, M_ht, M_tc, M_cf);
Glist = cat(3, hip_G, thigh_G, calf_G);
Slist = [s_1, s_2, s_3];

thetalist = [0; 0; rand];
r1_num = InverseDynamics(thetalist, dthetalist, ddthetalist, g, Ftip, Mlist, Glist, Slist);
r1_sym = go1_RR_leg_inverse_dynamics_hip_thigh_zero(thetalist, dthetalist, ddthetalist);
double(r1_num - r1_sym)

thetalist = [0; rand; rand];
r1_num = InverseDynamics(thetalist, dthetalist, ddthetalist, g, Ftip, Mlist, Glist, Slist);
r1_sym = go1_RR_leg_inverse_dynamics_hip_zero(thetalist, dthetalist, ddthetalist);
double(r1_num - r1_sym)

thetalist = [rand; 0; rand];
r1_num = InverseDynamics(thetalist, dthetalist, ddthetalist, g, Ftip, Mlist, Glist, Slist);
r1_sym = go1_RR_leg_inverse_dynamics_thigh_zero(thetalist, dthetalist, ddthetalist);
double(r1_num - r1_sym)
