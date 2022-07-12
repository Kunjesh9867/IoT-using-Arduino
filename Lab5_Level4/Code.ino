// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 15th June 2022
// Week :- Lab 5 LEVEL 4
// Description :- Add a green and red LED to the circuit with the RGB LED. Include 2 buttons. The first
                  // button will toggle between the red and green LED. If the green LED is on when you hit button 2
                  // the RGB will start cycling through the 3 colours. If the 2nd button is pressed the RGB lights stop.
                  // If the 1st button is pressed the RGB stops AND the green LED turn off and the red LED turns
                  // ON. If the red LED is on, nothing happens when you press the 2nd button

int red = 9;     // Red RGB Led
int blue = 10;   // Blue RGB Led
int green = 11;  // Green RGB Led
int button1 = 2; // button 1 as the name suggest
int button2 = 3; // button 2 as the name suggest

// There are two start values for nested loops
int start2 = 0;
int start1 = 0;
int red2 = 6;   // another red led
int green2 = 7; // another green led

void setup()
{
    pinMode(red, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(button1, INPUT);
    pinMode(button2, INPUT);
    pinMode(red2, OUTPUT);
    pinMode(green2, OUTPUT);
}

void loop()
{
    // When user pressed button1 then start=1 which was initially start=0
    if (digitalRead(button1) == HIGH)
    {
        start1 = 1;
        delay(300);
    }
    // When start=1 then enter in this loop
    if (start1 == 1)
    {
        digitalWrite(red2, HIGH); // turn on red led
        delay(1000);
        digitalWrite(red2, LOW); // turn off red led
        if (digitalRead(button2) == HIGH)
        { // when user enter button2 then perform the below tasks
            digitalWrite(red, HIGH);
            delay(500);
        }
    }

    // When the value of start became 2, perform the below tasks
    else if (start1 == 2)
    {
        digitalWrite(green2, HIGH);
        delay(1000);

        // Here, nested loops are used to turn on and off RGB LEDs
        if (digitalRead(button2) == HIGH)
        {
            start2 = 1;
            delay(300);
            // RGB Red LED
            if (start2 == 1)
            {
                digitalWrite(red, HIGH);
                delay(300);
                digitalWrite(red, LOW);
                start2 = 2;
            }
            // RGB Blue LED
            if (start2 == 2)
            {
                digitalWrite(blue, HIGH);
                delay(300);
                digitalWrite(blue, LOW);
                start2 = 3;
            }
            // RGB Green LED
            if (start2 == 3)
            {
                digitalWrite(green, HIGH);
                delay(300);
                digitalWrite(green, LOW);
                start2 = 1;
            }
        }
        else
        { // To turn off light when user pressed button for the second time
            digitalWrite(red, LOW);
            digitalWrite(blue, LOW);
            digitalWrite(green, LOW);
        }

        // When user pressed another button, perform the tasks below can stop the RGB LEDs
        if (digitalRead(button1) == HIGH)
        {
            start2 = 0;
            delay(300);
            digitalWrite(green2, LOW);
            digitalWrite(red2, HIGH);
        }
        digitalWrite(green2, LOW);
    }


    // To change the color of red green leds continuously
    if (start1 == 1)
    {
        start1 = 2;
    }
    else if (start1 == 2)
    {
        if (start2 == 0)
        {
            start1 = 1;
        }
    }
}