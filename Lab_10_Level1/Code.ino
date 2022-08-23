#include <Servo.h>
Servo myservo;
int val;
void setup()
{
    myservo.attach(4);
    Serial.begin(9600);
}
void loop()
{
    myservo.write(180);
    delay(1500);
    myservo.write(0);
    delay(1500);
}

