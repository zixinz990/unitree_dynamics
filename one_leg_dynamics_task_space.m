clc; close all; clear all;
syms x y z vx vy vz ax ay az real
syms t1 t2 t3 dt1 dt2 dt3 real

p = [x; y; z];
v = [vx; vy; vz];
a = [ax; ay; az];
q = [t1; t2; t3];

%% FL
dq = cal_go1_FL_dq(q, v);
ddq = cal_go1_FL_ddq(q, dq, a);
tau = go1_FL_inverse_dynamics(q, dq, ddq);
matlabFunction(tau, ...
               'file', 'GeneratedFunctions/go1_FL_inverse_dynamics_task_space', ...
               'vars', {q, v, a});

%% FR
dq = cal_go1_FR_dq(q, v);
ddq = cal_go1_FR_ddq(q, dq, a);
tau = go1_FR_inverse_dynamics(q, dq, ddq);
matlabFunction(tau, ...
               'file', 'GeneratedFunctions/go1_FR_inverse_dynamics_task_space', ...
               'vars', {q, v, a});

%% RL
dq = cal_go1_RL_dq(q, v);
ddq = cal_go1_RL_ddq(q, dq, a);
tau = go1_RL_inverse_dynamics(q, dq, ddq);
matlabFunction(tau, ...
               'file', 'GeneratedFunctions/go1_RL_inverse_dynamics_task_space', ...
               'vars', {q, v, a});

%% RR
dq = cal_go1_RR_dq(q, v);
ddq = cal_go1_RR_ddq(q, dq, a);
tau = go1_RR_inverse_dynamics(q, dq, ddq);
matlabFunction(tau, ...
               'file', 'GeneratedFunctions/go1_RR_inverse_dynamics_task_space', ...
               'vars', {q, v, a});