clc; close all; clear all; format long;

addpath("ModernRobotics/packages/MATLAB/mr")
addpath("ModernRobotics/packages/MATLAB/mr/Symbolic")
global hip_G thigh_G calf_G M_bh M_ht M_tc M_cf s_1 s_2 s_3

load_go1_const(3); % FL, FR, RL, RR: 0, 1, 2, 3
g = [0; 0; -9.81];
Ftip = [0; 0; 0; 0; 0; 0];
Mlist = cat(3, M_bh, M_ht, M_tc, M_cf);
Glist = cat(3, hip_G, thigh_G, calf_G);
Slist = [s_1, s_2, s_3];

% %% NO SYMBOLIC TEST
% thetalist_ = [0.0; rand; rand - 1.2];
% dthetalist_ = [rand; rand; rand];
% ddthetalist_ = [rand; rand; rand];
% 
% taulist = InverseDynamics(thetalist_, dthetalist_, ddthetalist_, g, Ftip, Mlist, Glist, Slist);
% disp(taulist);

%% SYMBOLIC TEST
syms t1 t2 t3 dt1 dt2 dt3 ddt1 ddt2 ddt3 real
thetalist = [t1; 0.0; t3];
dthetalist = [dt1; dt2; dt3];
ddthetalist = [ddt1; ddt2; ddt3];

% if (NearZero(thetalist_(1)) && NearZero(thetalist_(2)))
%     taulist_sym = InverseDynamicsHipThighZero(thetalist, dthetalist, ddthetalist, g, Ftip, Mlist, Glist, Slist);
% elseif(NearZero(thetalist_(1)) && ~NearZero(thetalist_(2)))
%     taulist_sym = InverseDynamicsHipZero(thetalist, dthetalist, ddthetalist, g, Ftip, Mlist, Glist, Slist);
% elseif(~NearZero(thetalist_(1)) && NearZero(thetalist_(2)))
    taulist_sym = InverseDynamicsThighZero(thetalist, dthetalist, ddthetalist, g, Ftip, Mlist, Glist, Slist);
% else
%     taulist_sym = InverseDynamicsSymbolic(thetalist, dthetalist, ddthetalist, g, Ftip, Mlist, Glist, Slist);
% end

% taulist_ = double(subs(taulist_sym, [thetalist; dthetalist; ddthetalist], [thetalist_; dthetalist_; ddthetalist_]));
% disp(taulist_);

%% GENERATE C++ FUNCTION
% Change function name based on the index of leg
matlabFunction(taulist_sym, ...
               'file', 'GeneratedFunctions/go1_RR_leg_inverse_dynamics_thigh_zero.m', ...
               'vars', {[t1; t2; t3], [dt1; dt2; dt3], [ddt1; ddt2; ddt3]}, ...
               'outputs', {'taulist'});
