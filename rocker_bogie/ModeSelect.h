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
    int m1_rev;
    int m2_rev;
    int s1,s2,s3,s4,s5,s6;
    float track_width = 385; //mm change this
    float diagonal_length = 619; //mm change this
    float wheel_base = 485; //mm change this
    
public:
    struct Angle_n_Speed {
        int m1=  0;
        int m2=  0;
        int m1_rev = 1;
        int m2_rev = 1;
        int s1= 90;
        int s2= 90;
        int s3= 90;
        int s4= 90;
        int s5= 90;
        int s6= 90;
    };
    ModeSelect();
    Angle_n_Speed selectMode(int reverse, int throttle, int steer, int op_mode);
    Angle_n_Speed ackermannKinematics(int reverse, int throttle, int steer);
    Angle_n_Speed zeroRadiusKinematics(int reverse, int speed);
    Angle_n_Speed swerveKinematics(int reverse, int throttle, int steer);
};
