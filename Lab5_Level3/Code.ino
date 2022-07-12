// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 15th June 2022
// Week :- Lab 5 LEVEL 3
// Description :- Using the RGB LED have button 1 turn on the RGB light, cycling through the three
// colours in repetition(ex:Red→ Green→ Blue → Red→ ect.) with a 500 msec delay. Then use
// the second button to shut off the lights. The light should shut off immediately after the current
// colour and not continue to cycle after the button is pressed.

int red = 9;     // Red Led
int blue = 10;   // Blue Led
int green = 11;  // Green Led
int button1 = 2; // Button 1 as the name suggest
int button2 = 3; // Button 2 as the name suggest
int start = 0;   // To start the process and keep track of the loop

void setup()
{
    Serial.begin(9600); // This is of no use, I have used it to check when the code is wrong
    pinMode(red, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(button1, INPUT);
    pinMode(button2, INPUT);
}

void loop()
{
    // When the button 1 is pressed, do the following work like making start=1
    if (digitalRead(button1) == HIGH)
    {
        start = 1;
        delay(300);
    }

    // When the button 2 is pressed, do the following work like making start=0
    else if (digitalRead(button2) == HIGH)
    {
        start = 0;
        delay(300);
    }

    // Here we have used 3 if, else if, else if loop to change the color of the RGB LED
    if (start == 1)
    {
        digitalWrite(red, HIGH);
        delay(500);
        digitalWrite(red, LOW);
    }

    else if (start == 2)
    {
        digitalWrite(blue, HIGH);
        delay(500);
        digitalWrite(blue, LOW);
    }
    else if (start == 3)
    {
        digitalWrite(green, HIGH);
        delay(500);
        digitalWrite(green, LOW);
    }

    // Here I have used 3 if, else if, else if loops to continuously flash the LED until user pressed the button
    if (start == 1)
    {
        start = 2;
    }
    else if (start == 2)
    {
        start = 3;
    }
    else if (start == 3)
    {
        start = 1;
    }
    else
    {
        Serial.println("Wrong");
        delay(1000);
    }
}