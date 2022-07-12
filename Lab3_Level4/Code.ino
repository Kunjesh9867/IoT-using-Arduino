// Name :- Kunjesh Kantilal Ramani (200515106)
// Date :- 1st June 2022
// Week :- Lab 3 LEVEL 4
// Description :- Create a code that asks the user to input a pattern of colours using R, G or B. Then
// display that sequence of colours. Ex: "Please input any combination of R, G or B letters". You
// can assume that they will not use other letters.

// here we have assign red, blue, green and incomingvalue.

int Red = 9;
int Green = 10;
int Blue = 11;
int incomingByte = 0;

void setup()
{                       // The Setup function runs once.
    Serial.begin(9600); // This will enable the Arduino to send data to the Serial monitor.

    pinMode(Red, OUTPUT);
    pinMode(Blue, OUTPUT);
    pinMode(Green, OUTPUT);
}

void loop()
{ // The loop function runs forever.
    if (Serial.available() > 0)
    {
        // read the incoming byte:
        incomingByte = Serial.read();
        // Serial.println(incomingByte);

        // 3 Loops were created for R B G color of light according to user input.
        char value = incomingByte; // set int to char (Sir)
        if (value == 'R')
        {
            Serial.print("R "); // This will print "R" in Serial Monitor when the light blinks
            digitalWrite(Red, HIGH);
            delay(1000);
            digitalWrite(Red, LOW);
        }
        else if (value == 'G')
        {
            Serial.print("G "); // This will print "G" in Serial Monitor when the light blinks
            digitalWrite(Green, HIGH);
            delay(1000);
            digitalWrite(Green, LOW);
        }
        else if (value == 'B')
        {
            Serial.print("B "); // This will print "B" in Serial Monitor when the light blinks
            digitalWrite(Blue, HIGH);
            delay(1000);
            digitalWrite(Blue, LOW);
        }
    }
}
