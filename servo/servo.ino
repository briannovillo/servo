/*
Arduino Servo Test sketch
http://www.hobbytronics.co.uk/arduino-tutorial2-servos
and 
SWEEEP by BARRAGAN http://barraganstudio.com
adapted by niq_ro from http://nicuflorica.blogspot.com
*/

#include <Servo.h>

Servo servo1;
Servo servo2;
                
int angle1 = 0;
int angle2 = 0;    
 
void setup() 
{ 
  servo1.attach(9);
  servo2.attach(10);
} 
  
void loop() 
{ 
  for(angle1 = 0; angle1 < 180; angle1++)    // command to move from 0 degrees to 180 degrees 
  {                                  
    servo1.write(angle1);                 //command to rotate the servo to the specified angle
    delay(15);                       
  } 
  
  for(angle2 = 180; angle2>=1; angle2-=5)     // command to move from 180 degrees to 0 degrees 
  {                                
    servo2.write(angle2);              //command to rotate the servo to the specified angle
    delay(5);                       
  } 
}
