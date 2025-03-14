#include "ModeSelect.h"
#include "Motor.h"
#include "math.h"

ModeSelect::ModeSelect() {
    }

ModeSelect::Angle_n_Speed ModeSelect::selectMode(int reverse, int speed, int steer, int mode){
    Angle_n_Speed cmd;
    switch (mode) {
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
    if (steer > 90){
    cmd.s1 = steer;
    cmd.s3 = map(steer,0,180,180,0);
    cmd.s2 = 90;
    cmd.s5 = 90;
    cmd.s4 = constrain(58+atan(wheel_base/((wheel_base/tan((M_PI/180)*cmd.s1)+ 2*track_width)))*(180/M_PI),0,180);
    cmd.s6 = constrain(map(cmd.s4,0,180,180,0),0,180);
    }
    else if (steer < 90) {
      
    cmd.s4 = steer;
    cmd.s6 = map(steer,0,180,180,0);
    cmd.s2 = 90;
    cmd.s5 = 90;
    cmd.s1 = constrain(58+atan(wheel_base/((wheel_base/tan((M_PI/180)*cmd.s4)+ 2*track_width)))*(180/M_PI),0,180);
    cmd.s3 = constrain(map(cmd.s1,0,180,180,0),0,180);
    }
    else {
      cmd.s1 = 90;
      cmd.s2 = 90;
      cmd.s3 = 90;
      cmd.s4 = 90;
      cmd.s5 = 90;
      cmd.s6 = 90;
    }
    cmd.m1 = speed;
    cmd.m2 = speed;
    cmd.m1_rev = reverse;
    cmd.m2_rev = reverse;
    ////////////////////////////////////////////
    return  cmd;
}

ModeSelect::Angle_n_Speed ModeSelect::zeroRadiusKinematics(int reverse, int speed){
    Angle_n_Speed cmd;
    //////////////// Kinematics ////////////////
    cmd.s1 = 60;
    cmd.s2 = 90;
    cmd.s3 = 120;
    cmd.s4 = 120;
    cmd.s5 = 90;
    cmd.s6 = 60;
    if (reverse == 0){
      cmd.m1_rev = 0;
      cmd.m2_rev = 1;
    }
    else {
      cmd.m1_rev = 1;
      cmd.m2_rev = 0;
    }
    cmd.m1 = speed;
    cmd.m2 = speed;
    ////////////////////////////////////////////
    return cmd;
}

ModeSelect::Angle_n_Speed ModeSelect::swerveKinematics(int reverse, int speed, int steer){
    Angle_n_Speed cmd;
    //////////////// Kinematics ////////////////
    cmd.m1 = speed;
    cmd.m2 = speed;
    cmd.s1 = steer;
    cmd.s2 = steer;
    cmd.s3 = steer;
    cmd.s4 = steer;
    cmd.s5 = steer;
    cmd.s6 = steer;
    cmd.m1_rev = reverse;
    cmd.m2_rev = reverse;
    ////////////////////////////////////////////
    return  cmd;
}
