#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  Serial.begin(9600);
  myservo.attach(4);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  while (Serial.available()>1)
{
  int c = Serial.parseInt();
    Serial.println(c);
    myservo.write(c);
  }
}
