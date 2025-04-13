#include "Motor.h"
#include "ServoMotor.h"
#include "ModeSelect.h"
#include <AlfredoCRSF.h>
#include <HardwareSerial.h>

#define PIN_RX 7
#define PIN_TX 8

// Set up a new Serial object
// HardwareSerial crsfSerial(1);  // ESP32
#define crsfSerial Serial1        // ARDUINO: Use Serial1 (pins 18/19)

AlfredoCRSF crsf;

Motor motor1(3, 4);  // Left
Motor motor2(9, 10); // Right

ServoMotor servo1(5);  // FL
ServoMotor servo2(6);  // ML
ServoMotor servo3(7);  // RL
ServoMotor servo4(8);  // FR
ServoMotor servo5(11); // MR
ServoMotor servo6(13); // RR

ModeSelect mode;

void setup()
{
  Serial.begin(115200);
  Serial.println("COM Serial initialized");
  
  crsf_setup();

  servo1.attach();
  servo2.attach();
  servo3.attach();
  servo4.attach();
  servo5.attach();
  servo6.attach();
  resetServos();
}

void loop()
{
    // Must call crsf.update() in loop() to process data
    crsf.update();
    printChannels();


}

void crsf_setup(){
  // crsfSerial.begin(CRSF_BAUDRATE, SERIAL_8N1, PIN_RX, PIN_TX);  // ESP32
  crsfSerial.begin(115200);                                        // ARDUINO: Use default RX/TX pins for Serial1 (pin 19, 18)

  if (!crsfSerial) while (1) Serial.println("Invalid crsfSerial configuration");

  crsf.begin(crsfSerial);
}

//Use crsf.getChannel(x) to get us channel values (1-16).
void printChannels(){
  for (int ChannelNum = 1; ChannelNum <= 16; ChannelNum++){
    Serial.print(crsf.getChannel(ChannelNum));
    Serial.print(", ");
    }
    Serial.println(" ");
}

void processData(String data) {
  int arm = 1; //crsf.getChannel(1);
  int reverse = crsf.getChannel(5);
  int throttle = crsf.getChannel(0);
  int steer = crsf.getChannel(1);
  int op_mode = crsf.getChannel(1);
    
  ModeSelect::Angle_n_Speed cmd;
    
        // Arming the bot
        if (0){
            int disarm_flag = 1;
            while (disarm_flag == 1){
              Serial.println("Arm Switch Off");
                /* do nothing */
                if (arm == 1){
                    disarm_flag == 0;
                    Serial.println("ARMED!!!!!!");
                }}}
        else{
            // Scale throttle to motor speed range (0-255)
            throttle = map(throttle, 100, 999, 0, 255);
            
            // Scale steer to servo range (20-160 degrees)
            steer = map(steer, 100, 999, 160, 20);
            
            cmd = mode.selectMode(reverse, throttle, steer, op_mode); // arguments added
            Serial.print("Parsed: M1= ");
            Serial.print(cmd.m1);
            Serial.print(" | M2= ");
            Serial.print(cmd.m2);
            Serial.print(" | S1= ");
            Serial.print(cmd.s1); 
            Serial.print(" | S2= ");
            Serial.print(cmd.s2);
            Serial.print(" | S3= ");
            Serial.print(cmd.s3);
            Serial.print(" | S4= ");
            Serial.print(cmd.s4);
            Serial.print(" | S5= ");
            Serial.print(cmd.s5);
            Serial.print(" | S6= ");
            Serial.print(cmd.s6);
            Serial.print(" | M1_REV= ");
            Serial.print(cmd.m1_rev);
            Serial.print(" | M2_REV= ");
            Serial.println(cmd.m2_rev);

            // Set Motor Speeds
            motor1.setSpeed(cmd.m1, cmd.m1_rev);
            motor2.setSpeed(cmd.m2, cmd.m2_rev);
    
            // Set Servo Angles
            // setServo(cmd.s1, cmd.s2, cmd.s3, cmd.s4, cmd.s5, cmd.s6);
            }}

void resetServos() {
    servo1.setAngle(90);
    servo2.setAngle(90);
    servo3.setAngle(90);
    servo4.setAngle(90);
    servo5.setAngle(90);
    servo6.setAngle(90);
}