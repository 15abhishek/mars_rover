#include "Motor.h"
#include "ServoMotor.h"
#include "ModeSelect.h"

Motor motor1(3, 4);  // Left
Motor motor2(9, 10); // Right

ServoMotor servo1(5);  // FL
ServoMotor servo2(6);  // ML
ServoMotor servo3(7);  // RL
ServoMotor servo4(8);  // FR
ServoMotor servo5(11); // MR
ServoMotor servo6(13); // RR

ModeSelect mode;

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
    int arm, reverse, throttle, steer, op_mode;
    ModeSelect::Angle_n_Speed cmd;
    int m1,m2,s1,s2,s3,s4,s5,s6;

    if (sscanf(data.c_str(), "%d,%d,%d,%d,%d", &arm, &reverse, &throttle, &steer, &op_mode) == 5) {

        // Arming the bot
        if (arm!= 1){
            int disarm_flag = 1;
            while (disarm_flag == 1){
                /* do nothing */
                if (arm == 1){
                    disarm_flag == 0;
                }}}
//        else{
////            cmd= mode.selectMode(); // arguments kon dalega lawde ?
//        }

        // Scale throttle to motor speed range (0-255)
        int pwmSpeed = map(throttle, 100, 999, 0, 100);
        motor1.setSpeed(pwmSpeed, reverse);
        motor2.setSpeed(pwmSpeed, reverse);

        // Scale steer to servo range (20-160 degrees)
        int servoAngle = map(steer, 100, 999, 160, 20);
        
        Serial.print("Parsed: Arm= ");
        Serial.print(arm);
        Serial.print(" | Reverse= ");
        Serial.print(reverse);
        Serial.print(" | PWM= ");
        Serial.print(throttle);
        Serial.print(" | Servo= ");
        Serial.print(steer);
        Serial.print(" | mode= ");
        Serial.println(op_mode);
        
    } else {
        Serial.println("Error: Invalid data format!");
    }
}

void setServo(int s1, int s2, int s3, int s4, int s5, int s6){
    servo1.setAngle(s1);
    servo2.setAngle(s2);
    servo3.setAngle(s3);
    servo4.setAngle(s4);
    servo5.setAngle(s5);
    servo6.setAngle(s6);
}
