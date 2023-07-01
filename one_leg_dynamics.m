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

%% TEST
syms t1 t2 t3 dt1 dt2 dt3 ddt1 ddt2 ddt3 real
thetalist = [t1; t2; t3];
dthetalist = [dt1; dt2; dt3];
ddthetalist = [ddt1; ddt2; ddt3];
taulist_sym = InverseDynamicsSymbolic(thetalist, dthetalist, ddthetalist, ...
                                      g, Ftip, Mlist, Glist, Slist);
error = zeros(3, 100);
for i = 1 : 100
    thetalist_ = [rand*2*pi-pi; rand*2*pi-pi; rand*2*pi-pi];
    dthetalist_ = [rand*2*pi-pi; rand*2*pi-pi; rand*2*pi-pi];
    ddthetalist_ = [rand*2*pi-pi; rand*2*pi-pi; rand*2*pi-pi];
    taulist = InverseDynamics(thetalist_, dthetalist_, ddthetalist_, ...
                              g, Ftip, Mlist, Glist, Slist);
    taulist_ = double(subs(taulist_sym, ...
                           [thetalist; dthetalist; ddthetalist], ...
                           [thetalist_; dthetalist_; ddthetalist_]));
    error(:, i) = abs(taulist_ - taulist);
end
error_sum = sum(sum(error));
disp(error_sum);

%% GENERATE C++ FUNCTION
% Change function name based on the index of leg
matlabFunction(taulist_sym, ...
               'file', 'GeneratedFunctions/go1_RR_inverse_dynamics.m', ...
               'vars', {[t1; t2; t3], [dt1; dt2; dt3], [ddt1; ddt2; ddt3]}, ...
               'outputs', {'taulist'});