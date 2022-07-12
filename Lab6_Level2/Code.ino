// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 22th June 2022
// Week :- Lab 6 LEVEL 2
// Description :- Map the brightness of the green channel of the RGB led to the rotation sensor A0. As
// you rotate clockwise the light will get brighter.

int red = 9;       // The red RGB LED is connected pin 9 of the Arduino.
int blue = 10;     // The green RGB LED is connected pin 10 of the Arduino.
int green = 11;    // The blue RGB LED is connected pin 11 of the Arduino.
int rotation = A0; // for ratation
int data = 0;

void setup()
{                           // The Setup function runs once.
    pinMode(red, OUTPUT);   // Setup red RGB LED pin as an output pin.
    pinMode(green, OUTPUT); // Setup green RGB LED pin as an output pin.
    pinMode(blue, OUTPUT);  // Setup blue RGB LED pin as an output pin.
    pinMode(rotation, INPUT);
    Serial.begin(9600);
}

void loop()
{
    data = analogRead(rotation);       // To read the data
    data = map(data, 0, 1023, 0, 255); // To map the data to the desired range
    Serial.println(data);              // To print the data, so to make it more interactive

    // Red Light
    analogWrite(red, data);
    delay(1000);
    analogWrite(red, 0);

    // Blue Light
    analogWrite(blue, data);
    delay(1000);
    analogWrite(blue, 0);

    // Green Light
    analogWrite(green, data);
    delay(1000);
    analogWrite(green, 0);
}