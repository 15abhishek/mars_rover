#include <Arduino.h>

float throttle = 0.0;
float steer = 0.0;
String inputString = ""; // Store incoming serial data
boolean newData = false;

void setup() {
    Serial.begin(115200);
    while (!Serial);  // Wait for Serial to initialize
    Serial.println("Arduino Ready");
}

void loop() {
    recvWithStartEndMarkers();
    if (newData) {
        parseData();
        newData = false;
    }
}

// Function to receive properly formatted data
void recvWithStartEndMarkers() {
    static boolean recvInProgress = false;
    static char startMarker = '<';
    static char endMarker = '>';
    char receivedChar;
    
    while (Serial.available() > 0 && newData == false) {
        receivedChar = Serial.read();
        
        if (recvInProgress == true) {
            if (receivedChar != endMarker) {
                inputString += receivedChar;
            } else {
                recvInProgress = false;
                newData = true;
            }
        } else if (receivedChar == startMarker) {
            inputString = "";  // Clear the previous string
            recvInProgress = true;
        }
    }
}

// Function to parse and extract throttle and steer values
void parseData() {
    int commaIndex = inputString.indexOf(',');
    if (commaIndex > 0 && commaIndex < inputString.length() - 1) {
        String throttleStr = inputString.substring(0, commaIndex);
        String steerStr = inputString.substring(commaIndex + 1);

        throttle = throttleStr.toFloat();
        steer = steerStr.toFloat();

        if ((throttle >= -1.0 && throttle <= 1.0) && (steer >= -1.0 && steer <= 1.0)) {
            Serial.print("Parsed - Throttle: ");
            Serial.print(throttle, 3);
            Serial.print(" | Steer: ");
            Serial.println(steer, 3);
        } else {
            Serial.println("Error: Out of range values!");
        }
    } else {
        Serial.println("Error: Invalid data format!");
    }
}
