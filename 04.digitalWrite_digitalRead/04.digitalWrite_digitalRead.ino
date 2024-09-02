/*
  Author: 
  
  Learning Intention:
  The students will learn how to wire a pull-up and pull-down switch and configure PINs for
  digital input and read binary data from those PINs.
 
  Success Criteria:
    1.  I understand how to configure a PIN for input and output
    2.  I know how to read binary data from a specific PIN
    3.  I know how to write binary data to a specific PIN
    4.  I understand that LOW = false = 0 = <1.5 volts (or Off) and that
        HIGH = true = 1 = >3 volts (or On)
    5.  I can wire a LED for digital output in TINKERCAD
    6.  I can wire a switch for digital input in TINKERCAD
    7.  I know the difference between a switch and a momentary switch
    8.  I can organise output data so it correctly plots on the serial monitor
    9.  I can apply this knowledge to the Button and the Line Finder in the sensor kit

  Student Notes: 

  Documentation: 
    https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/
    https://www.arduino.cc/reference/en/language/functions/digital-io/digitalread/
    https://docs.arduino.cc/built-in-examples/digital/Debounce
  Schematic:
    https://www.tinkercad.com/things/kSX9CqedYeX?sharecode=eYYWDcM8F9OS2TUEujdDsoekSHmj3-VeZ9YSi0uWTYI
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/04.digitalWrite_digitalRead/Bootcamp-digitalRead.png
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/04.digitalWrite_digitalRead/Bootcamp-digitalWrite.png
*/


static unsigned int MyLed = 6;
static signed int MyButton = 5;
bool readPin;
bool readLed;


#define buzzer 2

void setup() {
  
  pinMode(MyLed, OUTPUT);
  pinMode(MyButton, INPUT);

  Serial.begin(9600);
  Serial.println("Debug");


  pinMode(buzzer, OUTPUT);

}

void loop() {
  
  readPin = digitalRead(MyButton);
  readLed = digitalRead(MyLed);

  digitalWrite(MyLed, !readPin);

  Serial.print("Pin-5:");
  Serial.print(readPin);
  Serial.print(", ");
  Serial.print("Pin-6:");
  Serial.println(readLed);

  if(readPin == true) {

    musicTone();

  }



}

void musicTone() {
  tone(buzzer, 80);
  delay(500);
  tone(buzzer, 260);
  delay(250);
  tone(buzzer, 80);
  delay(150);
  tone(buzzer, 360);
  delay(150);
  tone(buzzer, 80);
  delay(750);

  tone(buzzer, 260);
  delay(250);
  tone(buzzer, 80);
  delay(150);
  tone(buzzer, 360);
  delay(150);
  tone(buzzer, 80);
  delay(750);

  tone(buzzer, 260);
  delay(250);
  tone(buzzer, 80);
  delay(150);
  tone(buzzer, 360);
  delay(150);
  tone(buzzer, 80);
  delay(750);

  tone(buzzer, 160);
  delay(500);
  tone(buzzer, 260);
  delay(500);
  tone(buzzer, 460);
  delay(500);
  noTone(buzzer);
}