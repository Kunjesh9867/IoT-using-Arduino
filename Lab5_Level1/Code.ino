int blueLedPin = 13; // The blue LED is connected pin 13 of the Arduino.
int button1Pin = 2;  // The SW1 button is connect to pin 2 of the Arduino.

void setup()
{                                // The Setup function runs once
    pinMode(blueLedPin, OUTPUT); // Setup blue LED pin as an output pin.
    pinMode(button1Pin, INPUT);  // Setup button1 pin as an input pin.
}

void loop()
{ // The loop function runs forever.
    if (digitalRead(button1Pin) == HIGH)
    {                                   // Check to see if button1 is pressed.
        digitalWrite(blueLedPin, HIGH); // Turn on the blue LED.
    }
    else
    {
        digitalWrite(blueLedPin, LOW); // Turn off the blue LED.
    }
}
