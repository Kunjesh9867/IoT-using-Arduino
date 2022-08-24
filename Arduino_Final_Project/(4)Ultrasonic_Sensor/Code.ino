#include <LiquidCrystal.h> //LCD library
#define echo 2
#define trig 3

float duration; // time taken by the pulse to return back
float distance; // oneway distance travelled by the pulse

LiquidCrystal lcd(13, 12, 11, 10, 9, 8); // lcd(RS,EN,D4,D5,D6,D7)

void setup()
{
    // To make a connection
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);
    Serial.begin(9600);
    lcd.begin(16, 2);
}

void loop()
{ // This loop will run infinite times

    time_Measurement();                 // This function will be called when the loop executes
    distance = duration * (0.0343) / 2; // calculate the oneway distance travelled by the pulse
    display_distance();                 // This function will be called when the loop executes
}

void time_Measurement()
{ // function to measure the time taken by the pulse to return back
    digitalWrite(trig, LOW);
    delayMicroseconds(2); // Delay in Milliseconds

    digitalWrite(trig, HIGH);
    delayMicroseconds(10); // Delay in Milliseconds
    digitalWrite(trig, LOW);

    duration = pulseIn(echo, HIGH); // for duration
}

void display_distance()
{                                     // function to display the distance on LCD/Serial Monitor
    lcd.clear();                      // To clear the LCD
    lcd.setCursor(0, 0);              // To set cursor at x=0, and y=0
    Serial.print("Distance in Cm: "); // To print the statement
    Serial.print(distance);           // To print the statement
    Serial.println();                 // To print the statement
    lcd.print("Distance in Cm: ");    // To print the statement
    lcd.setCursor(5, 1);              // To set cursor at x=5, and y=1
    lcd.print(distance);              // To print the statement
    delay(1000);
}
