// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 13th July 2022
// Week :- Lab 8 LEVEL 2
// Description :- Write a program that prints your name and have it shift your name back and forth
                // across the LCD. It should move to the right on the top row,stop at the edge of the screen, then
                // come back in on the bottom row moving left until the edge of the screen then repeats. (See
                // online tutorial video for example)

#include <LiquidCrystal.h>
// Initialise the Serial LCD.
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // These pin numbers are hard coded in on the serial backpack board.

void setup()
{
    lcd.begin(16, 2); // Initialize the LCD.
}

void loop()
{
    for (int i = 0; i < 10; i++)
    {                        // This will move name in the first line
        lcd.clear();         // To clear screen
        lcd.setCursor(i, 0); // To set cursor at the value of i
        lcd.print("Kunjesh");
        delay(1500); // For delay
    }
    for (int i = 9; i >= 0; i--)
    {                        // This will move name in the second line
        lcd.clear();         // To clear screen
        lcd.setCursor(i, 1); // To set cursor at the value of i
        lcd.print("Kunjesh");
        delay(1500); // For delay
    }

    // Below Code is only for practice.

    /*lcd.setCursor(0, 0);
    lcd.print("Kunjesh");
    delay(1500);
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print(" Kunjesh");
    delay(1500);
    lcd.setCursor(2, 0);
    lcd.print(" Kunjesh");
    delay(1500);*/
}