#pragma once

#include <Eigen/Dense>
#include <cmath>

class Go1LegInverseDynamics {
   public:
    Go1LegInverseDynamics();
    ~Go1LegInverseDynamics();
    Eigen::Vector3d getTorque(const int leg_index, const Eigen::Matrix3d &J, const Eigen::Matrix3d &dJ,
                              const Eigen::Vector3d &foot_pos_body, const Eigen::Vector3d &foot_vel_body, const Eigen::Vector3d &foot_acc_body);

   private:
    Eigen::Vector3d taulist;
    Eigen::Vector3d q;    // joint angle
    Eigen::Vector3d dq;   // joint velocity
    Eigen::Vector3d ddq;  // joint acceleration

    // Compute q, dq, ddq based on foot pos, vel, acc
    void trans_foot_to_joint(const Eigen::Matrix3d &J, const Eigen::Matrix3d &dJ,
                             const Eigen::Vector3d &foot_pos_body, const Eigen::Vector3d &foot_vel_body, const Eigen::Vector3d &foot_acc_body);

    void go1_FL_leg_inverse_dynamics();
    void go1_FL_leg_inverse_dynamics_hip_zero();
    void go1_FL_leg_inverse_dynamics_thigh_zero();
    void go1_FL_leg_inverse_dynamics_hip_thigh_zero();

    void go1_FR_leg_inverse_dynamics();
    void go1_FR_leg_inverse_dynamics_hip_zero();
    void go1_FR_leg_inverse_dynamics_thigh_zero();
    void go1_FR_leg_inverse_dynamics_hip_thigh_zero();

    void go1_RL_leg_inverse_dynamics();
    void go1_RL_leg_inverse_dynamics_hip_zero();
    void go1_RL_leg_inverse_dynamics_thigh_zero();
    void go1_RL_leg_inverse_dynamics_hip_thigh_zero();
};