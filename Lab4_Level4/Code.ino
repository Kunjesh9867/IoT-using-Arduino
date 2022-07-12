// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 8th June 2022
// Week :- Lab 4 LEVEL 4
// Description :- Add two additional LED's. In order from left to right the value of each light is 8-4-2-1
// to create binary numbers. Using the light sensor mapped from 0 to 15 have the lights count in
// binary as you move the light sensor slider from left to right. Ex 5: off - ON - off - ON 4+1 = 5.
// Can use: data = map(data,6,679,0,15); //map the data value to 0-15

// NOTE : I have taken delay of 1000ms so that the value is visible perfectly.

// Below I have wrote the light and value of light in decimal
//  red = 8
//  blue = 4
//  yellow = 2
//  green = 1

int lightPin = A1; // The light sensor is plugged into pin A1 of the Arduino.
int data = 0;      // This will store the data from the sensor.
int red = 10;      // red color light
int blue = 11;     // blue color light
int yellow = 12;   // yellow color light
int green = 13;    // green color light

void setup()
{
    Serial.begin(9600);
    pinMode(red, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
}

void loop()
{                                    // The loop function runs forever
    data = analogRead(lightPin);     // Read the value from the light sensor and store it in the lightData variable.
    data = map(data, 2, 679, 0, 15); // map the data value to a percentage
    Serial.print("Light value =");
    Serial.println(data); // Print the data to the serial port.
    delay(1000);          // Wait 1 second (1000mS) before running again.

    // There are various "if" loops to get the desired light
    int x = data;
    if (x >= 8 and x <= 15)
    {
        digitalWrite(red, HIGH);
        x = x - 8;
    }
    if (x >= 4 && x < 8)
    {
        digitalWrite(blue, HIGH);
        x = x - 4;
    }
    if (x >= 2 && x < 4)
    {
        digitalWrite(yellow, HIGH);
        x = x - 2;
    }
    if (x >= 1 && x < 2)
    {
        digitalWrite(green, HIGH);
        x = x - 1;
    }

    delay(1000);
    digitalWrite(red, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
}
