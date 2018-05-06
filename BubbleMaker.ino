
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
int pos = 0;    // variable to store the servo position



int motorPin = 3;// the dc motor's pin 



void setup() { 
  pinMode(motorPin, OUTPUT); 
  myservo.attach(4);
} 
void loop() { 

  

for (pos = 0; pos <= 80; pos += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(10);                       // waits 10ms for the servo to reach the position
     }
    digitalWrite(motorPin, HIGH);     //switch on the dc motor
    delay(2000);
    
  
    for (pos = 80; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(10);                       // waits 10ms for the servo to reach the position
    }
    digitalWrite(motorPin, LOW);       //switch off the dc motor
    delay(2000);
    
  
  }



