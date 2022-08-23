// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 27th July 2022
// Week :- Lab 10 LEVEL 4
// Description :- Create a Master-Slave setup of your level 3 code using two arduinos. The first(Master)
// arduino will have the two buttons. The Slave will have the motor and the LED. The functionality
// of the code should be the same as in level 3

// C++ code
#include <Servo.h>
#include <Wire.h>
Servo myservo;
int val = -25;
int red = 11;   // The red RGB LED is connected pin 11 of the Arduino.
int blue = 13;  // The green RGB LED is connected pin 13 of the Arduino.
int green = 12; // The green RGB LED is connected pin 12 of the Arduino.
int x = 0;
// int x1=0;
// int x2=0;

void setup()
{
    Wire.begin(4);
    myservo.attach(4);
    Wire.onReceive(receiveEvent);
    Serial.begin(9600);
    pinMode(red, OUTPUT);   // Setup red RGB LED pin as an output pin.
    pinMode(green, OUTPUT); // Setup green RGB LED pin as an output pin.
    pinMode(blue, OUTPUT);  // Setup green RGB LED pin as an output pin.
}

void loop()
{
    Serial.print(x); // To print the value in serial monitor to check whether its working or not
    if (x == 1)
    {
        val = val + 25; // here val will be increased
        if (val > 100)
        {
            val = 0;
        }
        buttonplus(); // Flow of execution will move to function = buttonplus
    }

    if (x == 2)
    {
        val = val - 25; // here val will be decreased
        if (val < 0)
        {
            val = 100;
        }
        buttonplus(); // Flow of execution will move to function = buttonplus
    }

    delay(100);
}

// This loop will perform the tasks according to the value of val
void buttonplus()
{
    if (val == 0)
    {
        myservo.write(val);

        digitalWrite(red, HIGH);
        digitalWrite(blue, LOW);
        digitalWrite(green, LOW);
        delay(1500);
    }
    else if (val == 25)
    {
        myservo.write(val);
        // delay(1500);
        digitalWrite(red, LOW);
        digitalWrite(blue, HIGH);
        digitalWrite(green, LOW);
        delay(1500);
    }
    else if (val == 50)
    {
        myservo.write(val);
        // delay(1500);
        digitalWrite(red, HIGH);
        digitalWrite(blue, LOW);
        digitalWrite(green, HIGH);
        delay(1500);
    }
    else if (val == 75)
    {
        myservo.write(val);
        // delay(1500);
        digitalWrite(red, HIGH);
        digitalWrite(blue, HIGH);
        digitalWrite(green, LOW);
        delay(1500);
    }
    else if (val == 100)
    {
        myservo.write(val);
        // delay(1500);
        digitalWrite(red, LOW);
        digitalWrite(blue, HIGH);
        digitalWrite(green, HIGH);
        delay(1500);
    }
}

void receiveEvent(int howMany)
{ // This function is used to read the Event

    x = Wire.read();

    Serial.print(x);

    // Question = Why do we need while loop ?

    /*while(0<Wire.available()){

      //you aren't sending characters (Mr.wilson
     // char c1 = Wire.read();
      //Serial.print(c1);
     // char c2 = Wire.read();
     // Serial.print(c2);
      //just recieve the two values (Mr.wilson)

      Serial.print(Wire.read());
        //x1 =Wire.read();
      //x2=Wire.read();
      //Serial.print(x1);
      //Serial.print(x2);

    }*/
}
