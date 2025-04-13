#ifndef MOTOR_H
#define MOTOR_H

 #include <Arduino.h>

class Motor {
private:
    int pwmPin;
    int dirPin;

public:
    Motor(int pwm, int dir);
    void setSpeed(int speed, int reverse);
    void setFwSpeed(int speed);
    void setBwSpeed(int speed);
    void stop();
};
#endif
