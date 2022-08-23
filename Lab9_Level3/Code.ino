// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 24th July 2022
// Week :- Lab 9 LEVEL 3
// Description :- Create a system to control the brightness on the RGB led. Use two buttons to control
// the brightness, one turn brightness up, one turns it down(you can choose the amount of
// brightness 1 button press equals). Then have a third button that will change the colour. You can
// choose to keep the previous colour on OR only keep the active colour on. If the LED is at the
// lowest or highest brightness the value should not change.

// button 1 ==> 2295
// button 2 ==> 22985
// button 3 ==> -19675

#include <IRremote.h>       //including infrared remote header file
int IR_Sensor_Receiver = 6; // the pin where you connect the output pin of IR sensor
IRrecv irrecv(IR_Sensor_Receiver);
decode_results results;

int redPin = 9;    // Red RGB LED is connected to pin 9 of the Arduino.
int greenPin = 11; // Green RGB LED is connected to pin 10 of the Arduino.
int bluePin = 10;  // Blue RGB LED is connected to pin 6 of the Arduino.

int x = 1;          // it is declare to change color (1=red, 2=blue, 3=green)
int brightness = 0; // Initial brightness

void setup()
{
    Serial.begin(9600);
    irrecv.enableIRIn();       // Enable Receiving sign
    pinMode(redPin, OUTPUT);   // Red RGB LED pin as an output pin.
    pinMode(bluePin, OUTPUT);  // Blue RGB LED pin as an output pin.
    pinMode(greenPin, OUTPUT); // Green RGB LED pin as an output pin.
}

void change_color()
{
    if (x == 1)
    { // red ==> blue
        x = 2;
    }
    else if (x == 2)
    { // blue ==> green
        x = 3;
    }
    else if (x == 3)
    { // green ==> red  //missing else(Mr.Wilson)
        x = 1;
    }
}

void increase_brightness()
{
    brightness += 20; // evertime when the function is called, brightness increase to 200
    if (brightness >= 240)
    {
        brightness = 240; // to make brightness=5000
    }

    if (x == 1)
    { // When the value of x=1
        analogWrite(redPin, brightness);
        analogWrite(bluePin, 0);
        analogWrite(greenPin, 0);
    }
    else if (x == 2)
    { // When the value of x=2
        analogWrite(bluePin, brightness);
        analogWrite(redPin, 0);
        analogWrite(greenPin, 0);
    }
    else if (x == 3)
    { // When the value of x=3
        analogWrite(greenPin, brightness);
        analogWrite(redPin, 0);
        analogWrite(bluePin, 0);
    }
}

void decrease_brightness()
{
    brightness -= 20; // evertime when the function is called, brightness decrease to 200
    if (brightness < 0)
    {
        brightness = 0; // to make brightness=0
    }

    if (x == 1)
    { // When the value of x=1
        analogWrite(redPin, brightness);
        analogWrite(bluePin, 0);
        analogWrite(greenPin, 0);
    }
    else if (x == 2)
    { // When the value of x=2
        analogWrite(bluePin, brightness);
        analogWrite(redPin, 0);
        analogWrite(greenPin, 0);
    }
    else if (x == 3)
    { // When the value of x=3
        analogWrite(greenPin, brightness);
        analogWrite(redPin, 0);
        analogWrite(bluePin, 0);
    }
}

void loop()
{
    if (irrecv.decode(&results)) // condition if any button is pressed
    {
        int temp = results.value; // Assigning value of button pressed into temporary varialbe
        Serial.println(temp);     // to print the value of temp in the serial monitor, FOR VERIFICATION

        if (temp == 2295)
        { // button 1
            increase_brightness();
        }
        else if (temp == -30601)
        { // button 2
            decrease_brightness();
        }
        else if (temp == 18615)
        { // button 3  [Problem => sometime when i pressed 3 its show -19675 or 18615]
            change_color();
        }
        else
        {
            Serial.println("Wrong Input"); // When any other button is pressed
        }
        irrecv.resume(); // To receive the next Value
    }
}