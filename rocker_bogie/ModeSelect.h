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
    ModeSelect();
    int selectMode(int reverse, int throttle, int steer, int op_mode);
    int ackermannKinematics(int reverse, int throttle, int steer);
    int zeroRadiusKinematics(int reverse, int throttle, int steer);
    int swerveKinematics(int reverse, int throttle, int steer);
};