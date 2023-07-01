#pragma once

#include <Eigen/Dense>

class Go1Dynamics {
public:
    Go1Dynamics() {};
    ~Go1Dynamics() {};
    void go1_FL_inverse_dynamics_task_space(const Eigen::Vector3d &q[3], const Eigen::Vector3d &v[3], const Eigen::Vector3d &a[3], Eigen::Vector3d &tau[3]);
    void go1_FR_inverse_dynamics_task_space(const Eigen::Vector3d &q[3], const Eigen::Vector3d &v[3], const Eigen::Vector3d &a[3], Eigen::Vector3d &tau[3]);
    void go1_RL_inverse_dynamics_task_space(const Eigen::Vector3d &q[3], const Eigen::Vector3d &v[3], const Eigen::Vector3d &a[3], Eigen::Vector3d &tau[3]);
    void go1_RR_inverse_dynamics_task_space(const Eigen::Vector3d &q[3], const Eigen::Vector3d &v[3], const Eigen::Vector3d &a[3], Eigen::Vector3d &tau[3]);
}
