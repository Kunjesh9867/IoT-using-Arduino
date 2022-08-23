// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 24th July 2022
// Week :- Lab 9 LEVEL 2
// Description :- Add a second LED(red) and have the following 5 functionalities using 5 different
// buttons on the remote. NOTE: You may use any buttons you choose.
//→ Button 1 = turn on blue LED
//→ Button 2 = turn on red LED
//→ Button 3 = turn off blue LED
//→ Button 4 = turn off red LED
//→ Button 5 = flash both LEDs 3 times

#include <IRremote.h> //including infrared remote header file
int RECV_PIN = 11;    // the pin where you connect the output pin of IR sensor

IRrecv irrecv(RECV_PIN);
decode_results results;
int redLed = 12;  // for red led
int blueLed = 13; // for blue led
int value = 0;    // for value

void setup()
{
    Serial.begin(9600); // For serial monitor
    irrecv.enableIRIn();
    pinMode(blueLed, OUTPUT); // for output
    pinMode(redLed, OUTPUT);  // for output
}

void loop()
{
    if (irrecv.decode(&results))
    {
        value = results.value; // to store the value in the variable
        Serial.println(" ");
        Serial.print("Code: ");
        Serial.println(value); // prints the value a a button press
        Serial.println(" ");
        irrecv.resume(); // Receive the next value
        Serial.println("*****************");
        if (value == 2295)
        { // when button 1
            digitalWrite(blueLed, HIGH);
            delay(500);
        }

        else if (value == (-30601))
        { // when button 2
            digitalWrite(redLed, HIGH);
            delay(500);
        }

        else if (value == 18615)
        { // when button 3
            digitalWrite(blueLed, LOW);
            delay(500);
        }

        else if (value == 10455)
        { // when button 4
            digitalWrite(redLed, LOW);
            delay(500);
        }

        else if (value == (-22441))
        {                               // when button 5
            for (int i = 0; i < 3; i++) // for loop for executing three times
            {
                digitalWrite(blueLed, HIGH);
                digitalWrite(redLed, HIGH); // To flash Three time
                delay(1000);
                digitalWrite(blueLed, LOW);
                digitalWrite(redLed, LOW);
                delay(1000);
            }
            delay(500);
        }

        else
        {
            digitalWrite(blueLed, LOW);
            digitalWrite(redLed, LOW);
            delay(500);
        }
    }
}