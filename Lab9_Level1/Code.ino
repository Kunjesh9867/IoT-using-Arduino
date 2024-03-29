#include <IRremote.h> //including infrared remote header file
int RECV_PIN = 11;    // the pin where you connect the output pin of IR sensor

IRrecv irrecv(RECV_PIN);
decode_results results;
int blueLed = 12;
int value = 0;

void setup()
{
    Serial.begin(9600);
    irrecv.enableIRIn();
}

void loop()
{
    if (irrecv.decode(&results))
    {
        value = results.value;
        Serial.println(" ");
        Serial.print("Code: ");
        Serial.println(value); // prints the value a a button press
        Serial.println(" ");
        irrecv.resume(); // Receive the next value
        Serial.println("*****************");
        if (value == 2295)
        {
            digitalWrite(blueLed, HIGH);
            delay(500);
        }
        else
        {
            digitalWrite(blueLed, LOW);
            delay(500);
        }
    }
}

