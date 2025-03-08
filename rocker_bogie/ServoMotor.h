// ServoMotor.h
#ifndef SERVOMOTOR_H
#define SERVOMOTOR_H

#include <Arduino.h>
#include <Servo.h>

class ServoMotor {
private:
    Servo servo;
    int pin;
    int minAngle;
    int maxAngle;

public:
    ServoMotor(int servoPin, int minA = 20, int maxA = 160);
    void attach();
    void setAngle(int angle);
    int getAngle();
};

#endif
