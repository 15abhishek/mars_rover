#include "Motor.h"
#include "ServoMotor.h"
#include "CytronMotorDriver.h"

Motor motor1(3, 4);  // Left
Motor motor2(9, 10); // Right

ServoMotor servo1(5);  // FL
ServoMotor servo2(6);  // ML
ServoMotor servo3(7);  // RL
ServoMotor servo4(8);  // FR
ServoMotor servo5(11); // MR
ServoMotor servo6(13); // RR

String receivedData = "";  // Store incoming serial data
bool messageStarted = false;  // Track if we are inside a valid message

void setup() {
    Serial.begin(115200);
    servo1.attach();
    servo2.attach();
    servo3.attach();
    servo4.attach();
    servo5.attach();
    servo6.attach();
    resetServos();
}

void resetServos() {
    servo1.setAngle(90);
    servo2.setAngle(90);
    servo3.setAngle(90);
    servo4.setAngle(90);
    servo5.setAngle(90);
    servo6.setAngle(90);
}

void loop() {
    while (Serial.available()) {
        char incomingChar = Serial.read();

        if (incomingChar == '<') {
            receivedData = "";  // Reset buffer
            messageStarted = true;
        } else if (incomingChar == '>' && messageStarted) {
            messageStarted = false;
//            Serial.print("Received: ");
//            Serial.println(receivedData);  // Debugging
            processData(receivedData);  
        } else if (messageStarted) {
            receivedData += incomingChar;  // Append only if inside message
        }
    }
}

void processData(String data) {
    data.trim();  // Remove extra spaces
//    Serial.println(data);
    int throttle, steer;

    if (sscanf(data.c_str(), "%d,%d", &throttle, &steer) == 2) {
        // Scale throttle to motor speed range (0-255)
        int pwmSpeed = map(throttle, 100, 999, 0, 100);
        motor1.setSpeed(pwmSpeed);
        motor2.setSpeed(pwmSpeed);

        // Scale steer to servo range (20-160 degrees)
        int servoAngle = map(steer, 100, 999, 160, 20);
        servo1.setAngle(servoAngle);
        servo2.setAngle(servoAngle);
        servo3.setAngle(servoAngle);
        servo4.setAngle(servoAngle);
        servo5.setAngle(servoAngle);
        servo6.setAngle(servoAngle);

        Serial.print("Parsed: Throttle=");
        Serial.print(throttle);
        Serial.print(", Steer=");
        Serial.print(steer);
        Serial.print("  ||  PWM= ");
        Serial.print(pwmSpeed);
        Serial.print(", Servo= ");
        Serial.println(servoAngle);
        
    } else {
        Serial.println("Error: Invalid data format!");
    }
}
