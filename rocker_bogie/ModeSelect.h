#define ACKERMANN_DRIVE  0
#define ZERO_RADIUS      1
#define SWERVE_DRIVE     2

class ModeSelect
{
private:
    int reverse;
    int throttle;
    int steer;
    int op_mode;
    int m1,m2;
    int s1,s2,s3,s4,s5,s6; 
    float track_width;
    float diagonal_length;
    float wheel_base;
    
public:
    struct Angle_n_Speed {
        int m1;
        int m2;
        int s1;
        int s2;
        int s3;
        int s4;
        int s5;
        int s6;
    };
    ModeSelect();
    Angle_n_Speed selectMode(int reverse, int throttle, int steer, int op_mode);
    Angle_n_Speed ackermannKinematics(int reverse, int throttle, int steer);
    Angle_n_Speed zeroRadiusKinematics(int reverse, int speed);
    Angle_n_Speed swerveKinematics(int reverse, int throttle, int steer);
};