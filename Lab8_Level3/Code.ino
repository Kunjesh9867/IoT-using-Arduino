// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 13th July 2022
// Week :- Lab 8 LEVEL 2
// Description :- Write a program that will display your name, then when the user presses sw1 (d8) your
                // favorite hobby or interest will be displayed. Then if they push sw1 (d8) again, the display will
                // show what you want for lunch. Finally if sw1 (d8) is pushed again then the display reset and
                // display your name again.

// Logic of the code is correct

#include <LiquidCrystal.h>

// Initialise the Serial LCD.
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // These pin numbers are hard coded in on the serial backpack
// board.
int button1Pin = 6;
int x = 0;

void setup()
{
    lcd.begin(16, 2);           // Initialize the LCD.
    pinMode(button1Pin, INPUT); // for button
}

void loop()
{
    if (x == 0)
    { // This loop will run once only at the start of the program
        lcd.clear();
        lcd.setCursor(4, 0);
        lcd.print("Kunjesh");
        delay(1000);
    }

    else if (x == 1)
    { // This loop will run when the value of x=1
        if (digitalRead(button1Pin) == HIGH)
        {
            lcd.clear();
            lcd.setCursor(4, 0);
            lcd.print("Kunjesh");
            delay(1000);
        }
    }

    else if (x == 2)
    { // This loop will run when the value of x=2
        if (digitalRead(button1Pin) == HIGH)
        {
            lcd.clear();
            lcd.setCursor(4, 0);
            lcd.print("Cricket");
            delay(1000);
        }
    }

    else if (x == 3)
    { // This loop will run when the value of x=3
        if (digitalRead(button1Pin) == HIGH)
        {
            lcd.clear();
            lcd.setCursor(2, 0);
            lcd.print("Rice & Curry");
            delay(1000);
        }
    }

    // To repeat the loop again & again when button is pressed
    if (x == 0)
    {
        x = 2;
    }
    else if (x == 1)
    {
        x = 2;
    }
    else if (x == 2)
    {
        x = 3;
    }
    else if (x == 3)
    {
        x = 1;
    }
    // delay(1000);
}