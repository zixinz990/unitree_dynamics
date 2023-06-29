function load_go1_const(leg_index)
global hip_G thigh_G calf_G M_bh M_ht M_tc M_cf s_1 s_2 s_3
% Load Unitree Go1 leg constants
% FL, FR, RL, RR: 0, 1, 2, 3
if (leg_index == 0)
    x_sign = 1;
    y_sign = 1;
elseif (leg_index == 1)
    x_sign = 1;
    y_sign = -1;
elseif (leg_index == 2)
    x_sign = -1;
    y_sign = 1;
else
    x_sign = -1;
    y_sign = -1;
end

% The origin of joint 1 is the same as the base frame
% Position of joint 2 in joint 1 frame
thigh_offset_x = x_sign * 0;
thigh_offset_y = y_sign * 0.0812;
thigh_offset_z = 0;

% Position of joint 3 in joint 2 frame
calf_offset_x = x_sign * 0;
calf_offset_y = y_sign * 0;
calf_offset_z = -0.213;

% Position of foot in joint 3 frame
foot_offset_x = x_sign * 0;
foot_offset_y = y_sign * 0;
foot_offset_z = -0.213;

% Hip link physical properties
hip_mass = 0.591;
% COM position in joint 1 frame
hip_com_x = x_sign * -0.005657;
hip_com_y = y_sign * -0.008752;
hip_com_z = -0.000102;
% Spatial inertia matrix
hip_G = [[0.000334008405, -0.000010826066, 0.000001290732;
          -0.000010826066, 0.000619101213, 0.000001643194;
          0.000001290732, 0.000001643194, 0.00040057614], zeros(3, 3);
          zeros(3, 3), eye(3) * hip_mass];

% Thigh link physical properties
thigh_mass = 0.92;
% COM position in joint 2 frame
thigh_com_x = -0.003342;
thigh_com_y = y_sign * -0.018054;
thigh_com_z = -0.033451;
% Body inertia tensor
thigh_G = [[0.004431760472, 0.000057496807, -0.000218457134;
            0.000057496807, 0.004485671726, 0.000572001265;
            -0.000218457134, 0.000572001265, 0.000740309489], zeros(3, 3);
            zeros(3, 3), eye(3) * thigh_mass];

% Calf physical properties
calf_mass = 0.135862;
% COM poistion in joint 3 frame
calf_com_x = 0.006197;
calf_com_y = 0.001408;
calf_com_z = -0.116695;
calf_G = [[0.001088793059, -0.000000255679, 0.000007117814;
           -0.000000255679, 0.001100428748, 0.000002077264;
           0.000007117814, 0.000002077264, 0.000024787446], zeros(3, 3);
           zeros(3, 3), eye(3) * calf_mass];

%% HOMOGENEOUS TRANSFORMATION
M_bh = [1, 0, 0, hip_com_x;
        0, 1, 0, hip_com_y;
        0, 0, 1, hip_com_z;
        0, 0, 0, 1];
M_ht = [1, 0, 0, -hip_com_x + thigh_offset_x + thigh_com_x;
        0, 1, 0, -hip_com_y + thigh_offset_y + thigh_com_y;
        0, 0, 1, -hip_com_z + thigh_offset_z + thigh_com_z;
        0, 0, 0, 1];
M_tc = [1, 0, 0, -thigh_com_x + calf_offset_x + calf_com_x;
        0, 1, 0, -thigh_com_y + calf_offset_y + calf_com_y;
        0, 0, 1, -thigh_com_z + calf_offset_z + calf_com_z;
        0, 0, 0, 1];
M_cf = [1, 0, 0, -calf_com_x + foot_offset_x;
        0, 1, 0, -calf_com_y + foot_offset_y;
        0, 0, 1, -calf_com_z + foot_offset_z;
        0, 0, 0, 1];

%% SCREW AXES OF JOINTS
w_1 = [1; 0; 0];
p_1 = [0; 0; 0];
s_1 = [w_1; -cross(w_1, p_1)];

w_2 = [0; 1; 0];
p_2 = p_1 + [thigh_offset_x; thigh_offset_y; thigh_offset_z];
s_2 = [w_2; -cross(w_2, p_2)];

w_3 = [0; 1; 0];
p_3 = p_2 + [calf_offset_x; calf_offset_y; calf_offset_z];
s_3 = [w_3; -cross(w_3, p_3)];

end