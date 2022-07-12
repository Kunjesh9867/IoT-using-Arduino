// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 1st June 2022
// Week :- Lab 3 LEVEL 1
// Description :- : Upload the source code and run it to show that the voltage changes when you rotate
// the potentiometer. Also open up the serial monitor on the bottom to see what values you can
// read from the rotation sensor

int rotationPin = A0; // The rotation sensor is plugged into pin A0 of the Arduino.
int data = 0;         // Used to store data from sensor.

void setup()
{                       // The Setup function runs once.
    Serial.begin(9600); // This will enable the Arduino to send data to the Serial
    // monitor.
    pinMode(rotationPin, INPUT);
}

void loop()
{
    for (int i = 0; i < 9; i = i + 3)
    {
        Serial.print(i);
        Serial.print(" , ");
    }
    // The loop function runs forever.
    // data = analogRead(rotationPin); //Read the value from the light sensor and store it
    // in the lightData variable.
    // Serial.print("Rotation value =");
    // Serial.println(data); //Print the data to the serial port.
    // delay(1000); //Wait 1 second (1000mS) before running again.
}
