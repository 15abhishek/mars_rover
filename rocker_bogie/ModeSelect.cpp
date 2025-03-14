#include "ModeSelect.h"
#include "Motor.h"
#include "math.h"

ModeSelect::ModeSelect() {
    int m1,m2 = 0;
    int s1,s2,s3,s4,s5 = 90;
    float track_width = 150; //mm change this
    float diagonal_length = 400; //mm change this
    float wheel_base = 370; //mm change this
}

ModeSelect::Angle_n_Speed ModeSelect::selectMode(int reverse, int speed, int steer, int mode){
    Angle_n_Speed cmd;
    switch (mode)
    {
    case ACKERMANN_DRIVE:
    cmd= ModeSelect::ackermannKinematics(reverse, speed, steer);
        break;
    case ZERO_RADIUS:
    cmd= ModeSelect::zeroRadiusKinematics(reverse, speed);
        break;
    case SWERVE_DRIVE:
    cmd= ModeSelect::swerveKinematics(reverse, speed, steer);
        break;
    default:
    cmd= ModeSelect::ackermannKinematics(reverse, speed, steer);
        break;
    }
    return  cmd;
}

ModeSelect::Angle_n_Speed ModeSelect::ackermannKinematics(int reverse, int speed, int steer){
    Angle_n_Speed cmd;
    //////////////// Kinematics ////////////////
    
    ////////////////////////////////////////////
    return  cmd;
}

ModeSelect::Angle_n_Speed ModeSelect::zeroRadiusKinematics(int reverse, int speed){
    Angle_n_Speed cmd;
    //////////////// Kinematics ////////////////
    s2, s4 = 90;
    s1, s6 = asin(track_width/diagonal_length);
    s3, s5 = 90 - s1;
    ////////////////////////////////////////////
    return cmd;
}

ModeSelect::Angle_n_Speed ModeSelect::swerveKinematics(int reverse, int speed, int steer){
    Angle_n_Speed cmd;
    int m1,m2,s1,s2,s3,s4,s5,s6;
    //////////////// Kinematics ////////////////
    m1,m2 = speed;
    s1 = steer;
    s2 = steer;
    s3 = steer;
    s4 = steer;
    s5 = steer;
    s6 = steer;
    ////////////////////////////////////////////
    return  cmd;
}