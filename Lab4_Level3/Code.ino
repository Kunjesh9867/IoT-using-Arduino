// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 8th June 2022
// Week :- Lab 4 LEVEL 3
// Description :- Light meter Challenge– Write a program that will turn on the red channel on the RGB
// led (D9) when it is dark, the blue channel(D11) when there is some light, and the Green RGB
// channel(D10) when the light sensor detects a bright light.

// NOTE : darkness = less than 40
//        some_light = greater than or equals to 40 AND less than 70
//        bright_light = greater than or equals to 70 AND less than or equals to 100

int lightPin = A1;      // The light sensor is plugged into pin A1 of the Arduino.
int data = 0;           // This will store the data from the sensor.
int red = 10;           // red color light
int blue = 11;          // blue color light
int green = 12;         // green color light
int dark = 40;          // I have taken darkness less than 40
int some_light = 70;    // I have taken some light greater than or equal to 40
int bright_light = 100; // I have taken bright light greater than 70

void setup()
{ // The Setup function runs once.
    Serial.begin(9600);
    pinMode(red, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(green, OUTPUT);
}

void loop()
{                                     // The loop function runs forever
    data = analogRead(lightPin);      // Read the value from the light sensor and store it in the lightData variable.
    data = map(data, 6, 679, 0, 100); // map the data value to a percentage. here I have taken from 1 to 100

    if (data < dark)
    {
        digitalWrite(red, HIGH);
        digitalWrite(blue, LOW);
        digitalWrite(blue, LOW);
    }
    else if (data >= dark && data < some_light)
    {
        digitalWrite(red, LOW);
        digitalWrite(blue, HIGH);
        digitalWrite(green, LOW);
    }
    else if (data >= some_light && data <= bright_light)
    {
        digitalWrite(red, LOW);
        digitalWrite(blue, LOW);
        digitalWrite(green, HIGH);
    }

    Serial.print("Light value =");
    Serial.println(data); // Print the data to the serial port.
    delay(1000);          // Wait 1 second (1000mS) before running again.
}
