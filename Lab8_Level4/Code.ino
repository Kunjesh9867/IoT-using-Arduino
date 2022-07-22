// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 13th July 2022
// Week :- Lab 8 LEVEL 2
// Description :- Add two buttons to the circuit board. Create a short (4-5 questions) survey where the
                // person is asked a question then response with either yes or no using the two buttons. Keep
                // track of the number of each response.Store all questions and answers in arrays. At the end of
                // the program have a closing message that's chosen based on how many times they said yes or
                // no. Use methods/functions in some form

// Note :- There are only 4 question in this Lab

#include <LiquidCrystal.h>
// Initialising the Serial LCD.

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // These pin numbers are hard coded in on the serial backpack board.
bool yes = false;                      // intially the value will be false, and it will change in the loop
bool no = false;                       // intially the value will be false, and it will change in the loop

// an array of question is created below
enum question
{
    question1,
    question2,
    question3,
    question4,
    serial_monitor_1,
    serial_monitor_2
} main_question = question1;

int button_pin_yes = 7; // SW2 button is connect to pin 7 for Yes as an asnwer
int button_pin_no = 6;  // SW1 button is connect to pin 6 for No as an asnwer

bool yes1;                   // boolean, later will be used in loop
bool Yes1last;               // boolean, later will be used in loop
bool no1;                    // boolean, later will be used in loop
bool No1last;                // boolean, later will be used in loop
int total_number_of_NO = 0;  // To count the number of No and later on display in serial monitor
int total_number_of_YES = 0; // To count the number of Yes and later on display in serial monitor

// I have used the concept of SWITCH statement
// There are total of 6 cases in the switch statement

void questions()
{
    switch (main_question) // switch case to check the inputs
    {
    case question1:
        lcd.setCursor(0, 0);
        lcd.print("   Do you Like"); // Question1 will be printed on lcd
        lcd.setCursor(0, 1);
        lcd.print("    Cricket?");

        // if statement
        if (yes)
        {
            main_question = question2; // here question 1 will be changed to question 2
            yes = false;               // To set the value of yes
            lcd.clear();               // To clear screen
        }

        if (no)
        {
            main_question = question2; // here question 1 will be changed to question 2
            no = false;                // To set the value of no
            lcd.clear();               // To clear screen
        }
        break; // To break the switch loop

    case question2:

        lcd.setCursor(0, 0);
        lcd.print("     Pizza"); // Question2  will be printed on lcd
        lcd.setCursor(0, 1);
        lcd.print("   Yes or No");

        if (yes)
        {
            main_question = question3; // here question 2 will be changed to question 3
            yes = false;
            lcd.clear();
        }

        if (no)
        {
            main_question = question3; // here question 2 will be changed to question 3
            no = false;
            lcd.clear();
        }

        break;

    case question3:

        lcd.setCursor(0, 0);
        lcd.print("Yes => Python"); // Question3 will be printed on lcd
        lcd.setCursor(0, 1);
        lcd.print("No => Java");

        if (yes)
        {
            main_question = question4; // here question 3 will be changed to question 4
            yes = false;
            lcd.clear();
        }

        if (no)
        {
            main_question = question4; // here question 3 will be changed to question 4
            no = false;
            lcd.clear();
        }

        break;

    case question4:

        lcd.setCursor(0, 0);
        lcd.print("Y => Tim Hortons"); // Question4 will be printed on lcd
        lcd.setCursor(0, 1);
        lcd.print("N => Starbucks");

        if (yes)
        {
            main_question = serial_monitor_1;
            yes = false;
            lcd.clear();
        }

        if (no)
        {
            main_question = serial_monitor_2;
            no = false;
            lcd.clear();
        }

        break;

    case serial_monitor_1: // To print closing statement when the answer of last question is YES.

        lcd.setCursor(0, 0);
        lcd.print("HURRAY");
        delay(3000);
        main_question = question1;    // The loop will again start to continue
        Serial.print("	Total No ="); // To print total number of no
        Serial.println(total_number_of_NO);
        Serial.print("	Total Yes ="); // To print total number of yes
        Serial.println(total_number_of_YES);

        break;

    case serial_monitor_2: // To print closing statement for user input of no.

        lcd.setCursor(0, 0);
        lcd.print("OOPS");

        delay(3000);                      // For Delay
        main_question = question1;        // Now again the main question will be question 1 and again the loop will continue...
        Serial.print("	Total No(s) = "); // To print total number of no
        Serial.println(total_number_of_NO);
        Serial.print("	Total Yes(s) = "); // To print total number of yes
        Serial.println(total_number_of_YES);

        break;
    }
}

bool check_for_button_yes() // To check button2 is pressed
{
    bool response = false; // here,I have created a boolean variable response with false as default value

    yes1 = digitalRead(button_pin_yes); // When button is pressed

    if (yes1 == LOW && Yes1last == HIGH)
    {
        Serial.println("Yes");
        response = true;
        total_number_of_YES++; // Increase yes by 1

        delay(100);
    }

    Yes1last = yes1;
    return response; // It will return the value of response in the MAIN function and store it in the variable
}

bool check_for_button_no() // To check button1 is pressed
{
    bool response = false;
    no1 = digitalRead(button_pin_no);
    if (no1 == LOW && No1last == HIGH)
    {
        Serial.println("No");
        response = true;
        total_number_of_NO++; // Increase no by 1
        delay(100);
    }
    No1last = no1;
    return response; // It will return the value of response in the MAIN function and store it in the variable
}

void setup()
{
    Serial.begin(9600);             // To display message in Serial Monitor
    pinMode(button_pin_yes, INPUT); // Setup button_pin_yes for YES
    pinMode(button_pin_no, INPUT);  // Setup button_pin_no for NO
    lcd.begin(16, 2);               // Initialize the LCD which contains x = 16 and y = 2.
    yes1 = digitalRead(button_pin_yes);
    no1 = digitalRead(button_pin_no);
    Yes1last = yes1;
    No1last = no1;
}

// Main Function
void loop()
{
    no = check_for_button_no();   // To check button1 for No, here no will get a value when check_for_button_no run and finished
    yes = check_for_button_yes(); // To check button2 for Yes, here yes will get a value when check_for_button_no run and finished
    questions();                  // function to ask the questions, questions is divided into 6 sub sections
}
