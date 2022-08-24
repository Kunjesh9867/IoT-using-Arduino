// I have made a light show comprises of 6 LED and 2 RGB LED
// pin is connected respectively
int red1 = 2;
int blue1 = 3;
int green1 = 4;
int yellow1 = 5;
int orange1 = 6;
int green2 = 7;
int green3 = 8;
int blue2 = 9;
int red2 = 10;
int green4 = 11;
int blue3 = 12;
int red3 = 13;
int x = 1;
int button1 = 6;
int button2 = 7;

void setup()
{
    // I have assigned the pinMode to all the lights
    pinMode(red1, OUTPUT);
    pinMode(red2, OUTPUT);
    pinMode(red3, OUTPUT);
    pinMode(blue1, OUTPUT);
    pinMode(blue2, OUTPUT);
    pinMode(blue3, OUTPUT);
    pinMode(green1, OUTPUT);
    pinMode(green3, OUTPUT);
    pinMode(green4, OUTPUT);
    pinMode(yellow1, OUTPUT);
    pinMode(button1, OUTPUT);
    pinMode(button2, OUTPUT);

    Serial.begin(9600); // For Serial Monitor
}

// Introduction is same as the main File
void intro()
{
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
    Serial.println("C = Simple Light Show ");
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

    if (incomingByte == 'C')
    {
        Serial.println("Press any button");
        x = 2;
    }
}

// When led() function is called then this loop will be executed.
void led()
{
    digitalWrite(red1, HIGH);
    delay(100);
    digitalWrite(red1, LOW);

    digitalWrite(blue1, HIGH);
    delay(100);
    digitalWrite(blue1, LOW);

    digitalWrite(green1, HIGH);
    delay(100);
    digitalWrite(green1, LOW);

    digitalWrite(yellow1, HIGH);
    delay(100);
    digitalWrite(yellow1, LOW);
}

// When led2()function is called then this loop will be executed.
void led2()
{
    digitalWrite(yellow1, HIGH);
    delay(100);
    digitalWrite(yellow1, LOW);

    digitalWrite(green1, HIGH);
    delay(100);
    digitalWrite(green1, LOW);

    digitalWrite(blue1, HIGH);
    delay(100);
    digitalWrite(blue1, LOW);

    digitalWrite(red1, HIGH);
    delay(100);
    digitalWrite(red1, LOW);
}

// When red() function is called then this loop will be executed.
void red()
{
    float TimeLapse = (2 * 1000) / 7;
    // here we created a variable which changes the values according to the change in "i" in FOR LOOP
    // and then converted the variable "i" in milli seconds by multiplying by 1000 and divided it by 7 so that each color can get the same time period as there are 7 color so divided by 7

    // Red
    digitalWrite(green3, HIGH);
    digitalWrite(red3, HIGH);
    delay(1000);
    digitalWrite(green3, LOW);
    digitalWrite(red3, LOW);
}

// When green() function is called then this loop will be executed.
void green()
{
    float TimeLapse = (2 * 1000) / 7;
    // Green
    digitalWrite(blue2, HIGH);
    digitalWrite(green4, HIGH);
    delay(1000);
    digitalWrite(green3, LOW);
    digitalWrite(red3, LOW);
}

// When blue() function is called then this loop will be executed.
void blue()
{
    float TimeLapse = (2 * 1000) / 7;
    // Blue
    digitalWrite(red2, HIGH);
    digitalWrite(blue3, HIGH);
    delay(1000);
}

// When magenta() function is called then this loop will be executed.
void magenta()
{
    float TimeLapse = (2 * 1000) / 7;
    // Magenta
    digitalWrite(green3, HIGH);
    digitalWrite(red3, HIGH);
    delay(1000);
    digitalWrite(red2, LOW);
    digitalWrite(blue3, LOW);
}

// When cyan() function is called then this loop will be executed.
void cyan()
{
    float TimeLapse = (2 * 1000) / 7;
    // Cyan
    digitalWrite(red2, HIGH);
    digitalWrite(blue3, HIGH);
    delay(1000);
}

// When white() function is called then this loop will be executed.
void white()
{
    float TimeLapse = (2 * 1000) / 7;
    // White
    digitalWrite(green3, HIGH);
    digitalWrite(red3, HIGH);
    delay(1000);
    digitalWrite(green3, LOW);
    digitalWrite(red3, LOW);
    digitalWrite(blue2, LOW);
    digitalWrite(green4, LOW);
    digitalWrite(red2, LOW);
    digitalWrite(blue3, LOW);
}

// When yellow() function is called then this loop will be executed.
void yellow()
{
    float TimeLapse = (2 * 1000) / 7;
    // Yellow
    digitalWrite(blue2, HIGH);
    digitalWrite(green4, HIGH);
    delay(1000);
    digitalWrite(green3, LOW);
    digitalWrite(red3, LOW);
}
void loop()
{
    // To run "intro" loop once
    if (x == 1)
    {
        intro();
    }
    // when button 1 is pressed then this loop will be executed
    if (digitalRead(button1) == HIGH)
    {
        led();
        red();
        blue();
        green();
        magenta();
        yellow();
        cyan();
        white();
    }
    else if (digitalRead(button2) == HIGH)
    { // when button 2 s pressed then this loop will be executed
        cyan();
        red();
        yellow();
        magenta();
        green();
        blue();
        white();
        led2();
    }
}
