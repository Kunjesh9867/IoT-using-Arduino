// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 1st June 2022
// Week :- Lab 3 LEVEL 2
// Description :- Write a program that displays the following color sequence on the RGB LED (D9-D11)
// Red, Green, Blue. The speed at which the color changes is controlled by Rotation dial A0 on the
// board. As you turn the dial the speed of the RGB changes. When the dial is at zero the RGB
// speed is the slowest, when the dial is at max the speed is at max.

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

// A function is created which will change the delay of the light according to the input given in Potentiometer
float func(float x)
{
    float Time_Delay = 1500 - x; // When Potentiometer=0, speed will be minimum. Here I have taken 1500ms as minimum speed
    digitalWrite(Red, HIGH);
    delay(Time_Delay);
    digitalWrite(Red, LOW);
    digitalWrite(Blue, HIGH);
    delay(Time_Delay);
    digitalWrite(Blue, LOW);
    digitalWrite(Green, HIGH);
    delay(Time_Delay);
    digitalWrite(Green, LOW);
}

void loop()
{                                   // The loop function runs forever.
    data = analogRead(rotationPin); // Read the value from the light sensor and store it in the lightData variable.
    func(data);                     // To call the function which is created above
    Serial.print("Rotation value =");
    Serial.println(data); // Print the data to the serial port.
    delay(1000);          // Wait 1 second (1000mS) before running again.
}
