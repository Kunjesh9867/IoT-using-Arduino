// C++ code
#include <Wire.h>

int button1Pin = 2; // for button 1
int button2Pin = 3; // for button 2
int x1 = 1;
int x2 = 1;
int x = 0;

void setup()
{
    Serial.begin(9600);
    Wire.begin();
    pinMode(button1Pin, INPUT);
    pinMode(button2Pin, INPUT);
}

void loop()
{

    // Wire.write("x1 is:");
    // Wire.write("x2 is:");
    if (digitalRead(button1Pin) == HIGH)
    {
        x = 1;
        Wire.beginTransmission(4);
        Wire.write(x);
        Wire.endTransmission();
    }
    else if (digitalRead(button2Pin) == HIGH)
    {
        x = 2;
        Wire.beginTransmission(4);
        Wire.write(x);
        Wire.endTransmission();
    }

    Serial.print(x);
    delay(2000);

    // just to see that the button is pressed or not (it is pressed)

    // Serial.print(x2);
    x = 0;
}
