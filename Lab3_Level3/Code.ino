// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 1st June 2022
// Week :- Lab 3 LEVEL 3
// Description :- Use the rotation sensor to cycle through the colours of the rainbow. (ROYGBP)
// depending on the value of the rotation sensor. (exL 0-150 = red from 150-300= Orange). Look
// up the RGB value for each colour and use analogWrite() to get the proper colours.

// here we have assign red, blue, green, rotation and data pin

int rotationPin = A0; // The rotation sensor is plugged into pin A0 of the Arduino.
int data = 0;
int Red = 9;
int Green = 10;
int Blue = 11;

void setup()
{                       // The Setup function runs once.
    Serial.begin(9600); // This will enable the Arduino to send data to the Serial
    // monitor.
    pinMode(rotationPin, INPUT);
    pinMode(Red, OUTPUT);
    pinMode(Blue, OUTPUT);
    pinMode(Green, OUTPUT);
}

void loop()
{                                   // The loop function runs forever.
    data = analogRead(rotationPin); // Read the value from the light sensor and store it in the lightData variable.
    // Various loop is created based on the input value of Potentiometer.

    // Red
    if (data >= 0 && data <= 150)
    {
        digitalWrite(Red, HIGH);
        delay(1000);
        digitalWrite(Red, LOW);
    }
    // Orange
    else if (data > 150 && data <= 300)
    {
        analogWrite(Red, 255);
        analogWrite(Green, 128);
        delay(1000);
        analogWrite(Red, 0);
        analogWrite(Green, 0);
    }
    // Yellow
    else if (data > 300 && data <= 450)
    {
        analogWrite(Red, 255);
        analogWrite(Green, 153);
        delay(1000);
        analogWrite(Red, 0);
        analogWrite(Green, 0);
    }
    // Green
    else if (data > 450 && data <= 600)
    {
        digitalWrite(Green, HIGH);
        delay(1000);
        digitalWrite(Green, LOW);
    }
    // Blue
    else if (data > 600 && data <= 750)
    {
        digitalWrite(Blue, HIGH);
        delay(1000);
        digitalWrite(Blue, LOW);
    }
    // Purple
    else if (data > 750 && data <= 900)
    {
        analogWrite(Red, 127);
        analogWrite(Green, 0);
        analogWrite(Blue, 255);
        delay(1000);
        analogWrite(Red, 0);
        analogWrite(Green, 0);
        analogWrite(Blue, 0);
    }
    else
    {
        Serial.println("Please enter the correct value :( ");
        delay(1000);
    }

    Serial.print("Rotation value =");
    Serial.println(data); // Print the data to the serial port.
    delay(1000);          // Wait  second (1000mS) before running again.
}
