// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 22th June 2022
// Week :- Lab 6 LEVEL 3
// Description :- Write a program that allows the user to set the brightness of each of the RGB
// channels by using the rotation dial to control brightness and a push button to select the channel.

int red = 9;       // The red RGB LED is connected pin 9 of the Arduino.
int blue = 10;     // The green RGB LED is connected pin 10 of the Arduino.
int green = 11;    // The blue RGB LED is connected pin 11 of the Arduino.
int rotation = A0; // rotation
int data = 0;
int button = 2;
int count = 0; // To start count

void setup()
{                           // The Setup function runs once.
    pinMode(red, OUTPUT);   // Setup red RGB LED pin as an output pin.
    pinMode(green, OUTPUT); // Setup green RGB LED pin as an output pin.
    pinMode(blue, OUTPUT);  // Setup blue RGB LED pin as an output pin.
    pinMode(rotation, INPUT);
    Serial.begin(9600);
    pinMode(button, INPUT);
}

void loop()
{
    data = map(data, 0, 1023, 0, 255); // To map the data
    // run the loop when button is pressed
    if (digitalRead(button) == HIGH)
    {
        count++;

        if (count > 3)
        { // When count is greater than 3, then make it 1
            count = 1;
        }
    }

    // When count=1, generate the following output
    if (count == 1)
    {
        data = analogRead(rotation);
        analogWrite(red, data);
        delay(300);
    }

    // When count=2, generate the following output
    else if (count == 2)
    {
        data = analogRead(rotation);
        analogWrite(blue, data);
        delay(300);
    }

    // When count=3, generate the following output
    else if (count == 3)
    {
        data = analogRead(rotation);
        analogWrite(green, data);
        delay(300);
    }
}
