/*
  Author: Pavlos 11/09

  Learning Intention:
  The students will learn how to connect and control a servo motor.

  Success Criteria:
    1.  I understand how to connect the servo motor
    2.  I can manually write different degrees of movement to the servo
    3.  I can map a potentiometer to a servo and control its movement
    4.  I understand that a 180deg servo angle of movement is set by a
        frequency signal sent from the microcontroller

  Student Notes: 

  Documentation:
    https://www.sparkfun.com/servos
    https://github.com/arduino-libraries/Servo <-- We are still using this library

  Schematic:
    https://www.tinkercad.com/things/lQ9RyYJRoLn?sharecode=MKlN0A7R0WGodkdTRKkPJO7I8PeI5L_GCR7pCclQ0qM
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/10.servoMotor/Bootcamp-servoMotor.png
*/

#include <Servo.h>

Servo myServo;

#define servoPin 7
static signed int potpin = A2;

void setup() {
  
  myServo.attach(servoPin);


  Serial.begin(9600);

}

void loop() {

  int val = analogRead(potpin);

  val = map(val, 0, 1023, 0, 180);
  myServo.write(100);
  
  Serial.println(analogRead(potpin));

}

/*
#define ForwardServoPin 6
#define BackwardServoPin 7
#define LED 5

static unsigned int potpin = A2;

Servo ForwardServo;


void setup()
{
  
  ForwardServo.attach(ForwardServoPin);
  BackwardServo.attach(BackwardServoPin);
  
  pinMode(LED, OUTPUT);
  
  Serial.begin(9600);
  Serial.println("debugged");
}

void loop()
{

  int val = analogRead(potpin);
  int LEDint = analogRead(potpin);

  val = map(val, 0, 1023, 0, 180);
  LEDint = map(LEDint, 0, 1023, 0, 255);
  
  ForwardServo.write(val);
  BackwardServo.write(180 - val);
  
  Serial.println(val);
   
  analogWrite(LED, LEDint);

  
}
*/


