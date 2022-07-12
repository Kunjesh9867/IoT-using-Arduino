// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 22th June 2022
// Week :- Lab 6 LEVEL 4
// Description :- Modify the code from level three to incorporate a user option. Ask the user which
// colour they would like to change. Then use the rotation dial to change the brightness then use
// the button to store it in memory. After the button is pressed the user will be asked again what
// colour they would like to modify

int red = 9;       // The red RGB LED is connected pin 9 of the Arduino.
int blue = 10;     // The green RGB LED is connected pin 10 of the Arduino.
int green = 11;    // The blue RGB LED is connected pin 11 of the Arduino.
int rotation = A0; // For rotation dial
int data = 0;
int button = 2;    // For button
char incomingByte; // for incomingByte in the char format
int x = 0;         // variable which will further helps in running loop

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
    Serial.println("R=red || B=blue || G=green");
    x = 0; // To make variable value 0 after each cycle

    // To pause the loop until user enter a value
    while (Serial.available() == 0)
    {
    }
    char incomingByte = Serial.read(); // To read the incoming byte which is in char format
    // print the desired output
    Serial.print("I received :");
    Serial.println(incomingByte);

    // NOTE = Explaination of loop is given in RED light loop only. This is applicable for blue as well as green loop as
              // all 3 loops are alike.

    // Red Light
    if (incomingByte == 'R')
    {
        while (x == 0)
        { // To run infinitely so that the color change with potentiometer
            data = analogRead(rotation);
            data = map(data, 0, 1023, 0, 255);
            analogWrite(red, data);
            delay(300);
            if (digitalRead(button) == HIGH)
            {
                x = 1; // When button is pressed then, exit while loop
            }
        }
        analogWrite(red, data);
    }

    // Blue Light
    else if (incomingByte == 'B')
    {
        while (x == 0)
        {
            data = analogRead(rotation);
            data = map(data, 0, 1023, 0, 255);
            analogWrite(blue, data);
            delay(300);
            if (digitalRead(button) == HIGH)
            {
                x = 1;
            }
        }
        analogWrite(blue, data);
    }

    // Green Light
    else if (incomingByte == 'G')
    {
        while (x == 0)
        {
            data = analogRead(rotation);
            data = map(data, 0, 1023, 0, 255);
            analogWrite(green, data);
            delay(300);
            if (digitalRead(button) == HIGH)
            {
                x = 1;
            }
        }
        analogWrite(green, data);
    }
}