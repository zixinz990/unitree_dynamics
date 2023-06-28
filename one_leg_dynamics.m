close all; clear; clc; format long;

addpath("ModernRobotics/packages/MATLAB/mr")
go1_const;

%% NO SYMBOLIC TEST
thetalist = [0; 0; 0];
dthetalist = [0; 0; 0];
ddthetalist = [0; 0; 0];
g = [0; 0; -9.81];
Ftip = [0; 0; 0; 0; 0; 0];
Mlist = cat(3, M_bh, M_ht, M_tc, M_cf);
Glist = cat(3, hip_G, thigh_G, calf_G);
Slist = [s_1, s_2, s_3];
taulist = InverseDynamics(thetalist, dthetalist, ddthetalist, g, Ftip, Mlist, Glist, Slist);
display(taulist);