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

int ModeSelect::selectMode(int reverse, int speed, int steer, int mode){
    switch (mode)
    {
    case ACKERMANN_DRIVE:
    m1,m2,s1,s2,s3,s4,s5,s6= ModeSelect::ackermannKinematics(reverse, speed, steer);
        break;
    case ZERO_RADIUS:
    m1,m2,s1,s2,s3,s4,s5,s6= ModeSelect::zeroRadiusKinematics(reverse, speed, steer);
        break;
    case SWERVE_DRIVE:
    m1,m2,s1,s2,s3,s4,s5,s6= ModeSelect::swerveKinematics(reverse, speed, steer);
        break;
    default:
    m1,m2,s1,s2,s3,s4,s5,s6= ModeSelect::ackermannKinematics(reverse, speed, steer);
        break;
    }
    return  m1,m2,s1,s2,s3,s4,s5,s6;
}

int ModeSelect::ackermannKinematics(int reverse, int speed, int steer){
    //////////////// Kinematics ////////////////
    
    ////////////////////////////////////////////
    return  m1,m2,s1,s2,s3,s4,s5,s6;
}

int ModeSelect::zeroRadiusKinematics(int reverse, int speed){
    //////////////// Kinematics ////////////////
    s2, s4 = 90;
    s1, s6 = asin(track_width/diagonal_length);
    s3, s5 = 90 - s1;
    ////////////////////////////////////////////
    return  m1,m2,s1,s2,s3,s4,s5,s6;
}

int ModeSelect::swerveKinematics(int reverse, int speed, int steer){
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
    return  m1,m2,s1,s2,s3,s4,s5,s6;
}