// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 6th July 2022
// Week :- Lab 7 LEVEL 4
// Description :- Menu system. Create a menu on the monitor that gives the user an option between 3
                  // songs. Have each song and the menu stored in different methods where the only line in your
                  // main function is runMenu();

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

int buzzerPin = 5;  // The buzzerPin is connected to pin 5 of the Arduino.
int button1Pin = 2; // The SW1 button is connect to pin 2 of the Arduino.
int green = 9;
int blue = 10;
int red = 11;

int colour;

char incomingByte; // For interaction with the Serial Monitor

void setup()
{                               // The Setup function runs once.
    pinMode(buzzerPin, OUTPUT); // Setup red LED pin as an output pin.
    pinMode(button1Pin, INPUT); // Setup button1 pin as an input pin.
    pinMode(red, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(green, OUTPUT);
    Serial.begin(9600);         // For making Connection with the Serial Monitor
    randomSeed(analogRead(A0)); // To generate random number
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
        tone(buzzerPin, notes[i], duration[i]); // for toning
        digitalWrite(colour, HIGH);             // To make colour light high
        delay(duration[i]);                     // For delay
        digitalWrite(colour, LOW);              // To make colour light low
    }
}

void Song2()
{
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
    for (int i = 0; i < (sizeof(notes) / sizeof(notes[0])); i++)
    {
        colour = random(9, 12);
        tone(buzzerPin, notes[i], duration[i]);
        digitalWrite(colour, HIGH);
        delay(duration[i]);
        digitalWrite(colour, LOW);
    }
}

void Song1()
{
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

    for (int i = 0; i < (sizeof(notes) / sizeof(notes[0])); i++)
    {
        colour = random(9, 12);
        tone(buzzerPin, notes[i], duration[i]);
        digitalWrite(colour, HIGH);
        delay(duration[i] * 1.30);
        digitalWrite(colour, LOW);
    }
}

void runMenu()
{
    // To make an interaction with the Serial Monitor
    Serial.println("A ==> Song1");
    Serial.println("B ==> Song2");
    Serial.println("C ==> Song3");
    while (Serial.available() == 0)
    { // To stop the loop until the user enter a value
    }
    char incomingByte = Serial.read(); // To read the data
    Serial.print("I received :");      // To display a message about the data
    Serial.println(incomingByte);      // To display a message about the data

    // Below, I have used loops to check the user's input value and check it accordingly

    if (incomingByte == 'A')
    {
        Song1();
    }
    else if (incomingByte == 'B')
    {
        Song2();
    }
    else if (incomingByte == 'C')
    {
        Song3();
    }
    else
    {
        Serial.println("Wrong Input!!!");
    }
    Serial.println();
    delay(1000);
}

void loop()
{
    runMenu();
}