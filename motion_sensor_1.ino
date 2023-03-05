// C++ code
//
#include <Servo.h>

Servo servo_6;

Servo servo_3;

Servo servo_2;

void setup()
{
  pinMode(7, INPUT);
  servo_6.attach(6, 500, 2500);
  pinMode(8, INPUT);
  servo_3.attach(3, 500, 2500);
  pinMode(9, INPUT);
  servo_2.attach(2, 500, 2500);
}

void loop()
{
  if (digitalRead(7) == 1) {
    servo_6.write(45);
    delay(100); // Wait for 100 millisecond(s)
  } else {
    servo_6.write(0);
    delay(100); // Wait for 100 millisecond(s)
  }
  if (digitalRead(8) == 1) {
    servo_3.write(45);
    delay(100); // Wait for 100 millisecond(s)
  } else {
    servo_3.write(0);
    delay(100); // Wait for 100 millisecond(s)
  }
  if (digitalRead(9) == 1) {
    servo_2.write(45);
    delay(100); // Wait for 100 millisecond(s)
  } else {
    servo_2.write(0);
    delay(100); // Wait for 100 millisecond(s)
  }
}