#include <Servo.h>

// LDR sensor pins
const int TL = A0;
const int TR = A1;
const int BL = A2;
const int BR = A3;

// Servo motor pins
const int horizontalPin = 9;
const int verticalPin = 10;

// Create servo objects
Servo horizontalServo;
Servo verticalServo;

// Initial servo angles
int horizontalAngle = 90;
int verticalAngle = 90;

// Sensor difference threshold
const int tolerance = 35;

// Servo angle limits
const int minAngle = 0;
const int maxAngle = 180;

void setup()
{
    Serial.begin(9600);

    // Attach servos
    horizontalServo.attach(horizontalPin);
    verticalServo.attach(verticalPin);

    // Set initial positions
    horizontalServo.write(horizontalAngle);
    verticalServo.write(verticalAngle);

    delay(500);
}

void loop()
{
    // Read the four LDR sensors
    int tl = analogRead(TL);
    int tr = analogRead(TR);
    int bl = analogRead(BL);
    int br = analogRead(BR);

    // Calculate average brightness
    int top = (tl + tr) / 2;
    int bottom = (bl + br) / 2;
    int left = (tl + bl) / 2;
    int right = (tr + br) / 2;

    // Calculate horizontal difference
    int horizontalDifference = left - right;

    if (horizontalDifference > tolerance)
    {
        horizontalAngle--;
    }
    else if (horizontalDifference < -tolerance)
    {
        horizontalAngle++;
    }

    // Calculate vertical difference
    int verticalDifference = top - bottom;

    if (verticalDifference > tolerance)
    {
        verticalAngle++;
    }
    else if (verticalDifference < -tolerance)
    {
        verticalAngle--;
    }

    // Keep angles within limits
    horizontalAngle = constrain(
        horizontalAngle, minAngle, maxAngle
    );

    verticalAngle = constrain(
        verticalAngle, minAngle, maxAngle
    );

    // Move servo motors
    horizontalServo.write(horizontalAngle);
    verticalServo.write(verticalAngle);

    // Display readings in Serial Monitor
    Serial.print("TL: ");
    Serial.print(tl);

    Serial.print(" TR: ");
    Serial.print(tr);

    Serial.print(" BL: ");
    Serial.print(bl);

    Serial.print(" BR: ");
    Serial.print(br);

    Serial.print(" | Horizontal Angle: ");
    Serial.print(horizontalAngle);

    Serial.print(" | Vertical Angle: ");
    Serial.println(verticalAngle);

    delay(100);
}