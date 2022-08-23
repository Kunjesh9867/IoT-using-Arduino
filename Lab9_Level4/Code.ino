// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 24th July 2022
// Week :- Lab 9 LEVEL 4
// Description :-  Make anything. Create unique code with a specified functionality. The only
// requirements are that you need to use the IR remote and you must have at least 50 lines of
// code with at least 1 method

#include <LiquidCrystal.h>
#include <IRremote.h>

int RECV_PIN = 10; // the pin where you connect the output pin of IR sensor
IRrecv irrecv(RECV_PIN);
decode_results results;

// Note :- There are only 9 question in this Lab

// Initialise the Serial LCD.
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // These pin numbers are hard coded in on the serial backpack board.
int value = 0;                         // initialize a variable

void setup()
{
    Serial.begin(9600); // To display message in Serial Monitor
    lcd.begin(16, 2);   // Initialize the LCD which contains x = 16 and y = 2.
    irrecv.enableIRIn();
}

void run()
{
    if (value == 2295) // When 1 is pressed then my name will be appear on the display
    {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Kunjesh Ramani"); // Print at cursor Location
        delay(1000);
    }

    else if (value == -30601) // When 2 is pressed, then my favourite smartphone brands will be display
    {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Oneplus"); // Print at cursor Location
        lcd.setCursor(0, 1);
        lcd.print("Apple");
        delay(1000);
    }

    else if (value == 18615) // if 3 is pressed, then my favourite sport will be displayed
    {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Cricket"); // Print at cursor location
        delay(1000);
    }
    else if (value == 10455) // if 4 is pressed, them my favourite coffee brand will de displayed
    {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Tim Hortons"); // Print at cursor Location
        delay(1000);
    }
    else if (value == -22441) // if 5 is pressed, them my favourite sportsman will de displayed
    {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("MS Dhoni"); // Print at cursor location
        delay(1000);
    }
    else if (value == 26775) // if 6 is pressed, them my favourite Subject will de displayed
    {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Computer Science"); // Print at cursor Location
        delay(1000);
    }
    else if (value == 6375) // if 7 is pressed, them my favourite coffee brand will de displayed
    {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Tim Hortons"); // Print at cursor Location
        delay(1000);
    }
    else if (value == -26521) // if 8 is pressed, them my favourite social networking site will de displayed
    {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Instagram"); // Print at cursor Location
        delay(1000);
    }
    else if (value == 22695) // if 9 is pressed, them my current location will de displayed
    {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Barrie, Ontario"); // Print at cursor location
        delay(1000);
    }
}

void loop()
{
    if (irrecv.decode(&results)) // If statement is used to control the LCD using the IR Sensor remote
    {
        value = results.value;

        run();
        irrecv.resume();
    }
}

