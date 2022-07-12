// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 15th June 2022
// Week :- Lab 5 LEVEL 2
// Description :-  Add a second button that will control a red led.

int red = 12;    // red LED
int blue = 13;   // blue LEd
int button1 = 2; // Button 1 as the name suggest
int button2 = 3; // Button 2 as the name suggest

void setup()
{
    pinMode(red, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(button1, INPUT);
    pinMode(button2, INPUT);
}

void loop()
{
    // When the button 1 is HIGH, do the following steps
    if (digitalRead(button1) == HIGH)
    {
        digitalWrite(blue, HIGH); // To turn on the blue led
    }
    else
    {
        digitalWrite(blue, LOW); // To turn off the blue led
    }

    // When the button 2 is HIGH, do the following steps
    if (digitalRead(button2) == HIGH)
    {
        digitalWrite(red, HIGH); // To turn on the red led
    }
    else
    {
        digitalWrite(red, LOW); // To turn off the red led
    }
}
