/*  Author: 

  Learning Intention:
  The students understand binary selection logic and apply it to a simple control structures.
  
  Success Criteria:
    1.  I understand binary selection is asking questions that only have a true and false outcome
    2.  I can apply different comparison operators to get a desired outcome in a basic if else
        control structure 
    3.  I understand 'if', 'if else', and 'if else if else'
    4.  I understand the difference between a 'nested if', and using boolean operators
    5.  I can read a simple logic flowchart

  Student Notes: 
  Comparison Operators
    - != (not equal to)
    - < (less than)
    - <= (less than or equal to)
    - == (equal to)
    - > (greater than)
    - >= (greater than or equal to)

    Boolean Operators
    - ! (logical not)
    - && (logical and)
    - || (logical or)


  Documentation: 
    https://www.arduino.cc/reference/en/#structure
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/03.binarySelection/Readme.md

*/


static unsigned int ledPin = 8;
static unsigned int buttonPin = 5;
static unsigned int lineSensorPin = 7;
int soundSensorPin = A3;

bool readPin;
bool readLineSensor;
int readSound;

void setup() {
  
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(lineSensorPin, INPUT);
  pinMode(soundSensorPin, INPUT);
  Serial.begin(9600);
  Serial.println("Serial Debug");

}

void loop() {
  readPin = digitalRead(buttonPin);
  readLineSensor = digitalRead(lineSensorPin);
  readSound = analogRead(soundSensorPin);

  Serial.println(readSound);

  if (readSound < 300) {

    digitalWrite(ledPin, LOW);

  } else if (readSound >= 300){

    digitalWrite(ledPin, HIGH);

  } else {

    digitalWrite(ledPin, LOW);
    
  }



  




}

/*
  IF ELSE 
  if (readPin == LOW) {

    digitalWrite(ledPin, HIGH);
  
  } else {
    
    digitalWrite(ledPin, LOW);

  }
  */
  

