// Quiz Game
// Who Wants to be a Millionaire?

// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 17th August 2022
// Description :- Final Project

// There is no Circuit in this part as it only contains a game in the Serial Monitor
//  There are 2 different output from the user so 2 incomingByte has been used
char incomingByte;
char incomingByte2;
int x = 1; // To initialize and run the loop when x is equals to 1
int green = 6;
int red = 7;

void setup()
{
    Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
    pinMode(green, OUTPUT);
    pinMode(red, OUTPUT);
}

// Below loop will be executed when called
// According to the value of x, it will executed

void quiz_game()
{
    if (x == 1)
    {
        question1();
    }
    else if (x == 2)
    {
        question2();
    }
    else if (x == 3)
    {
        question3();
    }
    else if (x == 4)
    {
        question4();
    }
    else if (x == 5)
    {
        question5();
    }
    else if (x == 6)
    {
        question6();
    }
    else if (x == 7)
    {
        question7();
    }
    else if (x == 8)
    {
        question8();
    }
    else if (x == 9)
    {
        question9();
    }
    else if (x == 10)
    {
        question10();
    }
}

// This quiz is comprises of 10 questions
// I don't know how to use the concept of multi dimensional array in the arduino/c++ , so I created 10 different question which will be executed accordingly!!!

// When x==1, Question 1 will be executed
void question1()
{
    // Below i have use multiple Serial.println statement to better look
    Serial.println("Question 1 for $1,000 ");
    Serial.println();
    Serial.println("Which of the following is the Capital of Canada");
    Serial.println("(A)Toronto (B)Ottawa (C)Paris (D) Alberta ");
    Serial.println();
    Serial.println("Enter your Answer [A,B,C,D]: ");
    while (Serial.available() == 0)
    { // To stop the loop until the user enter a value
    }
    char incomingByte2 = Serial.read(); // To read the data
    Serial.print("I received :");       // To display a message about the data
    Serial.println(incomingByte2);
    Serial.println();
    // When user enters the correct answer then this loop will be executed
    if (incomingByte2 == 'B')
    {
        digitalWrite(green, HIGH);
        delay(1000);
        digitalWrite(green, LOW);
        Serial.println("***Hurray Your Answer is Correct***");
        Serial.println("***You WON $1000***");
        x = 2;
        quiz_game();
    }
    else
    {
        digitalWrite(red, HIGH);
        delay(1000);
        digitalWrite(red, LOW);
        Serial.println("***OOPS, Your answer is Incorrect***");
        Serial.println("***You WON $0***");
        loop();
    }
}

// When x==2, Question 2 will be executed
void question2()
{
    for (int i = 0; i < 100; i++)
    {
        Serial.print("-");
    }
    Serial.println();
    Serial.println("Question 2 for $2,000 ");
    Serial.println();
    Serial.println("How many rings are on the Olympic flag?");
    Serial.println("(A)None (B)4 (C)5 (D)7 ");
    Serial.println();
    Serial.println("Enter your Answer [A,B,C,D]: ");
    while (Serial.available() == 0)
    { // To stop the loop until the user enter a value
    }
    char incomingByte2 = Serial.read(); // To read the data
    Serial.print("I received :");       // To display a message about the data
    Serial.println(incomingByte2);
    Serial.println();
    if (incomingByte2 == 'C')
    {
        digitalWrite(green, HIGH);
        delay(1000);
        digitalWrite(green, LOW);
        Serial.println("***Hurray Your Answer is Correct***");
        Serial.println("***You WON $2000***");
        x = 3;
        quiz_game();
    }
    else
    {
        digitalWrite(red, HIGH);
        delay(1000);
        digitalWrite(red, LOW);
        Serial.println("***OOPS, Your answer is Incorrect***");
        Serial.println("***You WON $1000***");
        loop();
    }
}

// When x==3, Question 3 will be executed
void question3()
{
    for (int i = 0; i < 100; i++)
    {
        Serial.print("-");
    }
    Serial.println();
    Serial.println("Question 3 for $4,000");
    Serial.println();
    Serial.println("Which sport is also known as football?");
    Serial.println("(A)Soccer (B)Cricket (C)Hockey (D) Baseball ");
    Serial.println();
    Serial.println("Enter your Answer [A,B,C,D]: ");
    while (Serial.available() == 0)
    { // To stop the loop until the user enter a value
    }
    char incomingByte2 = Serial.read(); // To read the data
    Serial.print("I received :");       // To display a message about the data
    Serial.println(incomingByte2);
    Serial.println();
    if (incomingByte2 == 'A')
    {
        digitalWrite(green, HIGH);
        delay(1000);
        digitalWrite(green, LOW);
        Serial.println("***Hurray Your Answer is Correct***");
        Serial.println("***You WON $4000***");
        x = 4;
        quiz_game();
    }
    else
    {
        digitalWrite(red, HIGH);
        delay(1000);
        digitalWrite(red, LOW);
        Serial.println("***OOPS, Your answer is Incorrect***");
        Serial.println("***You WON $2000***");
        loop();
    }
}

// When x==4, Question 4 will be executed
void question4()
{
    for (int i = 0; i < 100; i++)
    {
        Serial.print("-");
    }
    Serial.println();
    Serial.println("Question 4 for $8,000");
    Serial.println();
    Serial.println("What city contains the Eiffel Tower?");
    Serial.println("(A)Sydney (B)Las Angeles (C)New York (D) Paris ");
    Serial.println();
    Serial.println("Enter your Answer [A,B,C,D]: ");
    while (Serial.available() == 0)
    { // To stop the loop until the user enter a value
    }
    char incomingByte2 = Serial.read(); // To read the data
    Serial.print("I received :");       // To display a message about the data
    Serial.println(incomingByte2);
    Serial.println();
    if (incomingByte2 == 'D')
    {
        digitalWrite(green, HIGH);
        delay(1000);
        digitalWrite(green, LOW);
        Serial.println("***Hurray Your Answer is Correct***");
        Serial.println("***You WON $8000***");
        x = 5;
        quiz_game();
    }
    else
    {
        digitalWrite(red, HIGH);
        delay(1000);
        digitalWrite(red, LOW);
        Serial.println("***OOPS, Your answer is Incorrect***");
        Serial.println("***You WON $4000***");
        loop();
    }
}

// When x==5, Question 5 will be executed
void question5()
{
    // for(int i=0;i<100;i++){
    // Serial.print("-");
    // }
    Serial.println();
    Serial.println("Question 5 for $16,000");
    Serial.println();
    Serial.println("How many continents are there?");
    Serial.println("(A)9 (B)8 (C)7 (D) 6 ");
    Serial.println();
    Serial.println("Enter your Answer [A,B,C,D]: ");
    while (Serial.available() == 0)
    { // To stop the loop until the user enter a value
    }
    char incomingByte2 = Serial.read(); // To read the data
    Serial.print("I received :");       // To display a message about the data
    Serial.println(incomingByte2);
    Serial.println();
    if (incomingByte2 == 'C')
    {
        digitalWrite(green, HIGH);
        delay(1000);
        digitalWrite(green, LOW);
        Serial.println("***Hurray Your Answer is Correct***");
        Serial.println("***You WON $16000***");
        x = 6;
        quiz_game();
    }
    else
    {
        digitalWrite(red, HIGH);
        delay(1000);
        digitalWrite(red, LOW);
        Serial.println("***OOPS, Your answer is Incorrect***");
        Serial.println("***You WON $8000***");
        loop();
    }
}

// When x==6, Question 6 will be executed
void question6()
{
    for (int i = 0; i < 100; i++)
    {
        Serial.print("-");
    }
    Serial.println();
    Serial.println("Question 6 for $32,000");
    Serial.println();
    Serial.println("What gas makes voices sound higher when inhaled?");
    Serial.println("(A)Nitrogen (B)Oxygen (C)Helium (D) Neon ");
    Serial.println();
    Serial.println("Enter your Answer [A,B,C,D]: ");
    while (Serial.available() == 0)
    { // To stop the loop until the user enter a value
    }
    char incomingByte2 = Serial.read(); // To read the data
    Serial.print("I received :");       // To display a message about the data
    Serial.println(incomingByte2);
    Serial.println();
    if (incomingByte2 == 'C')
    {
        digitalWrite(green, HIGH);
        delay(1000);
        digitalWrite(green, LOW);
        Serial.println("***Hurray Your Answer is Correct***");
        Serial.println("***You WON $32000***");
        x = 7;
        quiz_game();
    }
    else
    {
        digitalWrite(red, HIGH);
        delay(1000);
        digitalWrite(red, LOW);
        Serial.println("***OOPS, Your answer is Incorrect***");
        Serial.println("***You WON $16000***");
        loop();
    }
}

// When x==7, Question 7 will be executed
void question7()
{
    for (int i = 0; i < 100; i++)
    {
        Serial.print("-");
    }
    Serial.println();
    Serial.println("Question 7 for $64,000");
    Serial.println();
    Serial.println("What American holiday falls on July 4?");
    Serial.println("(A)Thanksgiving Day (B)Independence Day (C)Christmas Day (D) New Year's Day ");
    Serial.println();
    Serial.println("Enter your Answer [A,B,C,D]: ");
    while (Serial.available() == 0)
    { // To stop the loop until the user enter a value
    }
    char incomingByte2 = Serial.read(); // To read the data
    Serial.print("I received :");       // To display a message about the data
    Serial.println(incomingByte2);
    Serial.println();
    if (incomingByte2 == 'B')
    {
        digitalWrite(green, HIGH);
        delay(1000);
        digitalWrite(green, LOW);
        Serial.println("***Hurray Your Answer is Correct***");
        Serial.println("***You WON $64000***");
        x = 8;
        quiz_game();
    }
    else
    {
        digitalWrite(red, HIGH);
        delay(1000);
        digitalWrite(red, LOW);
        Serial.println("***OOPS, Your answer is Incorrect***");
        Serial.println("***You WON $32000***");
        loop();
    }
}

// When x==8, Question 8 will be executed
void question8()
{
    for (int i = 0; i < 100; i++)
    {
        Serial.print("-");
    }
    Serial.println();
    Serial.println("Question 8 for $256,000");
    Serial.println();
    Serial.println("Which candy bar shares its name with a galaxy?");
    Serial.println("(A)Snickers (B)Mostaccioli (C)Milky Way (D)Almond Joy ");
    Serial.println();
    Serial.println("Enter your Answer [A,B,C,D]: ");
    while (Serial.available() == 0)
    { // To stop the loop until the user enter a value
    }
    char incomingByte2 = Serial.read(); // To read the data
    Serial.print("I received :");       // To display a message about the data
    Serial.println(incomingByte2);
    Serial.println();
    if (incomingByte2 == 'C')
    {
        digitalWrite(green, HIGH);
        delay(1000);
        digitalWrite(green, LOW);
        Serial.println("***Hurray Your Answer is Correct***");
        Serial.println("***You WON $256000***");
        x = 9;
        quiz_game();
    }
    else
    {
        digitalWrite(red, HIGH);
        delay(1000);
        digitalWrite(red, LOW);
        Serial.println("***OOPS, Your answer is Incorrect***");
        Serial.println("***You WON $64000***");
        loop();
    }
}

// When x==9, Question 9 will be executed
void question9()
{
    for (int i = 0; i < 100; i++)
    {
        Serial.print("-");
    }
    Serial.println();
    Serial.println("Question 9 for $512,000");
    Serial.println();
    Serial.println("What is someone who collects coins called?");
    Serial.println("(A)Professor (B)Chef (C)Psychiatrist (D)Numismatist ");
    Serial.println();
    Serial.println("Enter your Answer [A,B,C,D]: ");
    while (Serial.available() == 0)
    { // To stop the loop until the user enter a value
    }
    char incomingByte2 = Serial.read(); // To read the data
    Serial.print("I received :");       // To display a message about the data
    Serial.println(incomingByte2);
    Serial.println();
    if (incomingByte2 == 'D')
    {
        digitalWrite(green, HIGH);
        delay(1000);
        digitalWrite(green, LOW);
        Serial.println("***Hurray Your Answer is Correct***");
        Serial.println("***You WON $512000***");
        x = 10;
        quiz_game();
    }
    else
    {
        digitalWrite(red, HIGH);
        delay(1000);
        digitalWrite(red, LOW);
        Serial.println("***OOPS, Your answer is Incorrect***");
        Serial.println("***You WON $256000***");
        loop();
    }
}

// When x==10, Question 10 will be executed
void question10()
{
    for (int i = 0; i < 100; i++)
    {
        Serial.print("-");
    }
    Serial.println();
    Serial.println("Question 10 for 1000,000");
    Serial.println();
    Serial.println("Who is the current host of 'The Tonight Show?'nada");
    Serial.println("(A)Jimmy Fallon (B)Oprah Winfrey (C)Anne Curry (D)Bob Barker ");
    Serial.println();
    Serial.println("Enter your Answer [A,B,C,D]: ");
    while (Serial.available() == 0)
    { // To stop the loop until the user enter a value
    }
    char incomingByte2 = Serial.read(); // To read the data
    Serial.print("I received :");       // To display a message about the data
    Serial.println(incomingByte2);
    Serial.println();
    if (incomingByte2 == 'A')
    {
        digitalWrite(green, HIGH);
        delay(1000);
        digitalWrite(green, LOW);
        Serial.println("***Hurray Your Answer is Correct***");
        Serial.println("***You WON $1000000***");
        Serial.println("****************Well Played!!!  GAME OVER*****************");
        loop();
    }
    else
    {
        digitalWrite(red, HIGH);
        delay(1000);
        digitalWrite(red, LOW);
        Serial.println("***OOPS, Your answer is Incorrect***");
        Serial.println("***You WON $512000***");
        loop();
    }
}

void loop()
{
    // I have used the for loop to make it more eye catchy
    for (int i = 0; i < 100; i++)
    {
        Serial.print("-");
    }
    Serial.println();
    for (int i = 0; i < 30; i++)
    {
        Serial.print(" ");
    }
    Serial.println("Welcome to the Arduino Project !!!");
    Serial.println();
    Serial.println("There are multiple options available for user to choose from...");
    Serial.println();
    Serial.println("A = Quiz Game in Serial Monitor ");

    for (int i = 0; i < 100; i++)
    {
        Serial.print("-");
    }
    Serial.println();
    Serial.println("Enter your option here:"); // User will enter the input here
    while (Serial.available() == 0)
    { // To stop the loop until the user enter a value
    }
    char incomingByte = Serial.read(); // To read the data
    Serial.println();
    Serial.print("I received : "); // To display a message about the data
    Serial.println(incomingByte);  // To display a message about the data
    Serial.println();

    // When user enter A then below loop will be executed
    if (incomingByte == 'A')
    {
        quiz_game();
    }
}
