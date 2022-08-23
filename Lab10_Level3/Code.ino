// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 27th July 2022
// Week :- Lab 10 LEVEL 2
// Description :- Add an RGB led to the circuit. Now have a different light colour appear at each of the
// motor positions(0,25,50,75,100). If the motor is at 100% and the user hits button 1(move
// forward) have the motor transition through all colours and position as it returns to 0%. Likewise
// if the motor is at 0% and the user hits button 2(move backwards) then the motor will hit all the
// colours and positions automatically as it moves to 100%.

#include <Servo.h>
Servo myservo;
int val = -25;
int button1Pin = 3; // For button 1
int button2Pin = 2; // For button 2
int red = 9;        // The red RGB LED is connected pin 9 of the Arduino.
int blue = 10;      // The green RGB LED is connected pin 10 of the Arduino.
int green = 11;

void setup()
{
    myservo.attach(4); // To make an Attachment
    Serial.begin(9600);
    pinMode(button1Pin, INPUT);
    pinMode(button2Pin, INPUT);
    pinMode(red, OUTPUT);   // Setup red RGB LED pin as an output pin.
    pinMode(green, OUTPUT); // Setup green RGB LED pin as an output pin.
    pinMode(blue, OUTPUT);  // Setup green RGB LED pin as an output pin.
}

// Below function will later be used in the main loop
// In this function LED light will turn on according to the value of "val"
void buttonplus()
{
    if (val == 0)
    {
        myservo.write(val);

        digitalWrite(red, HIGH);  // RED high
        digitalWrite(blue, LOW);  // BLUE low
        digitalWrite(green, LOW); // GREEN LOW
        delay(1500);
    }
    else if (val == 25)
    {
        myservo.write(val);
        // delay(1500);  Delay were used for to check whether the function is working or not
        digitalWrite(red, LOW);   // RED high
        digitalWrite(blue, HIGH); // BLUE high
        digitalWrite(green, LOW); // GREEN low
        delay(1500);
    }
    else if (val == 50)
    {
        myservo.write(val);
        // delay(1500);
        digitalWrite(red, HIGH);   // RED high
        digitalWrite(blue, LOW);   // BLUE low
        digitalWrite(green, HIGH); // GREEN high
        delay(1500);
    }
    else if (val == 75)
    {
        myservo.write(val);
        // delay(1500);
        digitalWrite(red, HIGH);  // RED high
        digitalWrite(blue, HIGH); // BLUE high
        digitalWrite(green, LOW); // GREEN low
        delay(1500);
    }
    else if (val == 100)
    {
        myservo.write(val);
        // delay(1500);
        digitalWrite(red, LOW);    // RED low
        digitalWrite(blue, HIGH);  // BLUE high
        digitalWrite(green, HIGH); // GREEN high
        delay(1500);
    }
}

void loop()
{
    // When button 1 is pressed then increase the value and perform the task
    if (digitalRead(button1Pin) == HIGH)
    {
        val = val + 25;
        if (val > 100)
        {
            val = 0;
        }
        buttonplus();
    }

    // When button 1 is pressed then increase the value and perform the task
    if (digitalRead(button2Pin) == HIGH)
    {
        val = val - 25;
        if (val < 0)
        {
            val = 100;
        }
        buttonplus();
    }
}
