// These are the notes for the song

#define NOTE_B0 31
#define NOTE_C1 33
#define NOTE_CS1 35
#define NOTE_D1 37
#define NOTE_DS1 39
#define NOTE_E1 41
#define NOTE_F1 44
#define NOTE_FS1 46
#define NOTE_G1 49
#define NOTE_GS1 52
#define NOTE_A1 55
#define NOTE_AS1 58
#define NOTE_B1 62
#define NOTE_C2 65
#define NOTE_CS2 69
#define NOTE_D2 73
#define NOTE_DS2 78
#define NOTE_E2 82
#define NOTE_F2 87
#define NOTE_FS2 93
#define NOTE_G2 98
#define NOTE_GS2 104
#define NOTE_A2 110
#define NOTE_AS2 117
#define NOTE_B2 123
#define NOTE_C3 131
#define NOTE_CS3 139
#define NOTE_D3 147
#define NOTE_DS3 156
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_FS3 185
#define NOTE_G3 196
#define NOTE_GS3 208
#define NOTE_A3 220
#define NOTE_AS3 233
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_CS4 277
#define NOTE_D4 294
#define NOTE_DS4 311
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_FS4 370
#define NOTE_G4 392
#define NOTE_GS4 415
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494
#define NOTE_C5 523
#define NOTE_CS5 554
#define NOTE_D5 587
#define NOTE_DS5 622
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_FS5 740
#define NOTE_G5 784
#define NOTE_GS5 831
#define NOTE_A5 880
#define NOTE_AS5 932
#define NOTE_B5 988
#define NOTE_C6 1047
#define NOTE_CS6 1109
#define NOTE_D6 1175
#define NOTE_DS6 1245
#define NOTE_E6 1319
#define NOTE_F6 1397
#define NOTE_FS6 1480
#define NOTE_G6 1568
#define NOTE_GS6 1661
#define NOTE_A6 1760
#define NOTE_AS6 1865
#define NOTE_B6 1976
#define NOTE_C7 2093
#define NOTE_CS7 2217
#define NOTE_D7 2349
#define NOTE_DS7 2489
#define NOTE_E7 2637
#define NOTE_F7 2794
#define NOTE_FS7 2960
#define NOTE_G7 3136
#define NOTE_GS7 3322
#define NOTE_A7 3520
#define NOTE_AS7 3729
#define NOTE_B7 3951
#define NOTE_C8 4186
#define NOTE_CS8 4435
#define NOTE_D8 4699
#define NOTE_DS8 4978
#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_B4 494
#define NOTE_C5 523
#define NOTE_D5 587
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_G5 784
#define NOTE_A5 880
#define NOTE_B5 988
#define NOTE_B0 31
#define NOTE_C1 33
#define NOTE_CS1 35
#define NOTE_D1 37
#define NOTE_DS1 39
#define NOTE_E1 41
#define NOTE_F1 44
#define NOTE_FS1 46
#define NOTE_G1 49
#define NOTE_GS1 52
#define NOTE_A1 55
#define NOTE_AS1 58
#define NOTE_B1 62
#define NOTE_C2 65
#define NOTE_CS2 69
#define NOTE_D2 73
#define NOTE_DS2 78
#define NOTE_E2 82
#define NOTE_F2 87
#define NOTE_FS2 93
#define NOTE_G2 98
#define NOTE_GS2 104
#define NOTE_A2 110
#define NOTE_AS2 117
#define NOTE_B2 123
#define NOTE_C3 131
#define NOTE_CS3 139
#define NOTE_D3 147
#define NOTE_DS3 156
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_FS3 185
#define NOTE_G3 196
#define NOTE_GS3 208
#define NOTE_A3 220
#define NOTE_AS3 233
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_CS4 277
#define NOTE_D4 294
#define NOTE_DS4 311
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_FS4 370
#define NOTE_G4 392
#define NOTE_GS4 415
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494
#define NOTE_C5 523
#define NOTE_CS5 554
#define NOTE_D5 587
#define NOTE_DS5 622
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_FS5 740
#define NOTE_G5 784
#define NOTE_GS5 831
#define NOTE_A5 880
#define NOTE_AS5 932
#define NOTE_B5 988
#define NOTE_C6 1047
#define NOTE_CS6 1109
#define NOTE_D6 1175
#define NOTE_DS6 1245
#define NOTE_E6 1319
#define NOTE_F6 1397
#define NOTE_FS6 1480
#define NOTE_G6 1568
#define NOTE_GS6 1661
#define NOTE_A6 1760
#define NOTE_AS6 1865
#define NOTE_B6 1976
#define NOTE_C7 2093
#define NOTE_CS7 2217
#define NOTE_D7 2349
#define NOTE_DS7 2489
#define NOTE_E7 2637
#define NOTE_F7 2794
#define NOTE_FS7 2960
#define NOTE_G7 3136
#define NOTE_GS7 3322
#define NOTE_A7 3520
#define NOTE_AS7 3729
#define NOTE_B7 3951
#define NOTE_C8 4186
#define NOTE_CS8 4435
#define NOTE_D8 4699
#define NOTE_DS8 4978

int buzzerPin = 5; // Creating an element for buzzer pin
int x = 1;         // This x will further restric the main loop to executed

// For 1st RBG LED, I assigned 3 interger
int green = 9;
int blue = 10;
int red = 11;

int colour;         // For 1st RGB LED
int colour2;        // For 2nd RGB LED
char incomingByte3; // To get the input from the user

// For 2nd RBG LED, I assigned 3 interger
int green2 = 2;
int blue2 = 3;
int red2 = 4;

void setup()
{
    Serial.begin(9600); // opens serial port, sets data rate to 9600 bps

    pinMode(buzzerPin, OUTPUT); // Setup red LED pin as an output pin.
    // Setup for all lights in the RGB LED
    pinMode(red, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(red2, OUTPUT);
    pinMode(blue2, OUTPUT);
    pinMode(green2, OUTPUT);
}

void music_menu()
{
    for (int i = 0; i < 100; i++)
    {
        Serial.print("-");
    }
    Serial.println();
    // To make an interaction with the Serial Monitor
    // Its a song from Pirates of the Caribbean
    Serial.println("A ==> Song1");
    Serial.println("B ==> Song2");
    Serial.println("C ==> Song3");
    while (Serial.available() == 0)
    { // To stop the loop until the user enter a value
    }
    char incomingByte3 = Serial.read(); // To read the data
    Serial.print("I received : ");      // To display a message about the data
    Serial.println(incomingByte3);      // To display a message about the data

    // Below, I have used loops to check the user's input value and check it accordingly

    if (incomingByte3 == 'A')
    {
        Song1();
    }
    else if (incomingByte3 == 'B')
    {
        Song2();
    }
    else if (incomingByte3 == 'C')
    {
        Song3();
    }
    else
    {
        Serial.println("Wrong Input!!!"); // When the user presses the wrong button
    }
    Serial.println();
    delay(1000);
}

void Song1()
{
    // It comprises of notes ans duration
    int notes[] = {
        NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0,
        NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0,
        NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, 0,
        NOTE_A4, NOTE_G4, NOTE_A4, 0};

    int duration[] = {
        125,
        125,
        250,
        125,
        125,
        125,
        125,
        250,
        125,
        125,
        125,
        125,
        250,
        125,
        125,
        125,
        125,
        375,
        125,
    };
    // This loop will be executed once.
    for (int i = 0; i < (sizeof(notes) / sizeof(notes[0])); i++)
    {
        colour = random(9, 12);
        colour2 = random(2, 5);
        tone(buzzerPin, notes[i], duration[i]);
        digitalWrite(colour, HIGH);
        digitalWrite(colour2, HIGH);
        delay(duration[i] * 1.30);
        digitalWrite(colour, LOW);
        digitalWrite(colour2, LOW);
    }
}

void Song2()
{
    // It comprises of notes ans duration
    int notes[] = {
        NOTE_E4,
        NOTE_G4,
        NOTE_A4,
        NOTE_A4,
        0,
        NOTE_A4,
        NOTE_B4,
        NOTE_C5,
        NOTE_C5,
        0,
        NOTE_C5,
        NOTE_D5,
        NOTE_B4,
        NOTE_B4,
        0,
        NOTE_A4,
        NOTE_G4,
        NOTE_A4,
        0,
    };
    int duration[] = {
        125, 125, 250, 125, 125,
        125, 125, 250, 125, 125,
        125, 125, 250, 125, 125,
        125, 125, 375, 125};
    // This loop will be executed once.
    for (int i = 0; i < (sizeof(notes) / sizeof(notes[0])); i++)
    {
        colour = random(9, 12);
        colour2 = random(2, 5);
        tone(buzzerPin, notes[i], duration[i]);
        digitalWrite(colour, HIGH);
        digitalWrite(colour2, HIGH);
        delay(duration[i]);
        digitalWrite(colour, LOW);
        digitalWrite(colour2, LOW);
    }
}

void Song3()
{
    // For notes of the song
    int notes[] = {
        NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0,
        NOTE_A4, NOTE_C5, NOTE_D5, NOTE_D5, 0,
        NOTE_D5, NOTE_E5, NOTE_F5, NOTE_F5, 0,
        NOTE_E5, NOTE_D5, NOTE_E5, NOTE_A4, 0,
        NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0,
        NOTE_D5, NOTE_E5, NOTE_A4, 0,
        NOTE_A4, NOTE_C5, NOTE_B4, NOTE_B4, 0,
        NOTE_C5, NOTE_A4, NOTE_B4, 0,
        NOTE_A4, NOTE_A4};

    // For the duration between the notes
    int duration[] = {125, 125, 250, 125, 125,
                      125, 125, 250, 125, 125,
                      125, 125, 250, 125, 125,
                      125, 125, 125, 250, 125,
                      125, 125, 250, 125, 125,
                      250, 125, 250, 125,
                      125, 125, 250, 125, 125,
                      125, 125, 375, 375,
                      250, 125};

    // To run the notes from starting till end
    for (int i = 0; i < (sizeof(notes) / sizeof(notes[0])); i++)
    {
        colour = random(9, 12);
        colour2 = random(2, 5);
        tone(buzzerPin, notes[i], duration[i]); // for toning
        digitalWrite(colour, HIGH);             // To make colour light high
        digitalWrite(colour2, HIGH);
        delay(duration[i]);        // For delay
        digitalWrite(colour, LOW); // To make colour light low
        digitalWrite(colour2, LOW);
    }
}

void intro()
{
    x = 2;
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
    Serial.println("B = Music/Beat and Light Show");

    for (int i = 0; i < 100; i++)
    {
        Serial.print("-");
    }
    Serial.println();
    Serial.println("Enter your option here:");
    while (Serial.available() == 0)
    { // To stop the loop until the user enter a value
    }
    char incomingByte = Serial.read(); // To read the data
    Serial.println();
    Serial.print("I received : "); // To display a message about the data
    Serial.println(incomingByte);  // To display a message about the data
    Serial.println();
    if (incomingByte == 'B')
    {
        music_menu();
    }
}

// This loop is same as the loop in the MAIN file
// When user pressed B then this loop will be executed
void loop()
{
    if (x == 1)
    {
        intro();
    }
    else
    {
        music_menu();
    }
    
}

