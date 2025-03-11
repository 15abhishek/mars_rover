#include "Motor.h"

Motor::Motor(int pwm, int dir) {
    pwmPin = pwm;
    dirPin = dir;
    pinMode(pwmPin, OUTPUT);
    pinMode(dirPin, OUTPUT);
}

void Motor::setSpeed(int speed, int reverse) {
    speed = constrain(speed, 0, 50); 
    if (reverse==0) {
        digitalWrite(dirPin, LOW);
        analogWrite(pwmPin, speed);
    } else if (reverse==1) {
        digitalWrite(dirPin, HIGH);
        analogWrite(pwmPin, speed);
    } else {
        digitalWrite(dirPin, LOW);
        analogWrite(pwmPin, 0);
    }
}

void Motor::setFwSpeed(int speed){
    digitalWrite(dirPin, HIGH);
    analogWrite(pwmPin, abs(speed));   
}

void Motor::setBwSpeed(int speed){
    digitalWrite(dirPin, LOW);
    analogWrite(pwmPin, abs(speed));     
}

void Motor::stop(){
    digitalWrite(dirPin, LOW);
    analogWrite(pwmPin, 0); 
}
