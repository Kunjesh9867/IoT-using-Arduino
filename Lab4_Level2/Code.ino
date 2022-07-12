// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 8th June 2022
// Week :- Lab 4 LEVEL 2
// Description :- Write a program that will turn on both the red LED (D12) and blue LED (D13) at the
// same time when the sensor detects darkness.

int lightPin = A1; // The light sensor is plugged into pin A1 of the Arduino.
int data = 0;      // This will store the data from the sensor.
int red = 12;      // red color light
int blue = 13;     // blue color light
int darkness = 50; // I have set darkness = 50 which means that the value less than 50 will be considered as the darkness

void setup()
{ // The Setup function runs once.
    Serial.begin(9600);
    pinMode(red, OUTPUT);
    pinMode(blue, OUTPUT);
}

void loop()
{                                     // The loop function runs forever
    data = analogRead(lightPin);      // Read the value from the light sensor and store it in the lightData variable.
    data = map(data, 6, 679, 0, 100); // map the data value to a percentage. I have make the range from 1 to 100

    if (data < darkness)
    { // when the data is less than darkness then the "if" statement will run, otherwise "else" statement will run
        digitalWrite(red, HIGH);
        digitalWrite(blue, HIGH);
    }
    else
    {
        digitalWrite(red, LOW);
        digitalWrite(blue, LOW);
    }

    Serial.print("Light value =");
    Serial.println(data); // Print the data to the serial port.
    delay(1000);          // Wait 1 second (1000mS) before running again.
}
