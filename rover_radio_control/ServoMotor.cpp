#include "ServoMotor.h"

ServoMotor::ServoMotor(int servoPin, int minA, int maxA) {
    pin = servoPin;
    minAngle = minA;
    maxAngle = maxA;
//    servo.attach(pin);
}

void ServoMotor::attach() {
    servo.attach(pin);
}

void ServoMotor::setAngle(int angle) {
//    angle = constrain(angle, minAngle, maxAngle);
    servo.write(angle);
}

int ServoMotor::getAngle() {
    return servo.read();
}
