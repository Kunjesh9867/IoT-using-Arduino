// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 27th July 2022
// Week :- Lab 10 LEVEL 2
// Description :- Include two buttons where button 1(d2) will move the motor forward by 25% and
// button 2(d3) will move the motor backwards 25%.

#include <Servo.h>
Servo myservo;
int val = 0;
int button1Pin = 3; // For button 1
int button2Pin = 2; // For button 2

void setup()
{
    myservo.attach(4); // To make an Attachment
    Serial.begin(9600);
    pinMode(button1Pin, INPUT);
    pinMode(button2Pin, INPUT);
    myservo.write(0);
}
// Below are 2 function that is used in the main loop
void func1()
{ // This function will increment the value
    myservo.write(val);
    delay(2000);
}
void func2()
{ // This function will increment the value
    myservo.write(val);
    delay(2000);
}
void loop()
{
    if (digitalRead(button1Pin) == HIGH)
    { // When button 1 is pressed then increase the value and perform the task
        val = val + 45;
        if (val >= 180)
        {
            val = 180;
        }
        func1(); // move to function 1
    }
    if (digitalRead(button2Pin) == HIGH)
    { // When button 2 is pressed then increase the value and perform the task
        val = val - 45;
        if (val <= 0)
        {
            val = 0;
        }
        func2(); // move to function 2
    }
}

