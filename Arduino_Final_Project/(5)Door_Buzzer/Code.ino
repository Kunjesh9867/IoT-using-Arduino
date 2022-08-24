// Door Alarm Using Ultrasonic Sensor

int trigger_pin = 2; // Trigger pin for Ultrasonic Sensor
int echo_pin = 3;    // echo pin for Ultrasonic Sensor
int buzzer_pin = 10; // Buzzer pin for Piezo
int time;
int distance;
void setup()
{
    Serial.begin(9600); // For serial monitor
    // pinMode is assigned to make a connection
    pinMode(trigger_pin, OUTPUT);
    pinMode(echo_pin, INPUT);
    pinMode(buzzer_pin, OUTPUT);
}
void loop()
{

    digitalWrite(trigger_pin, HIGH);
    delayMicroseconds(10); // delay in microseconds
    digitalWrite(trigger_pin, LOW);
    time = pulseIn(echo_pin, HIGH);
    distance = (time * 0.034) / 2; // to calculate the distance
    // When distance is less than or equal to 10 then the door alarm will be turned ON
    if (distance <= 10)
    {
        Serial.println(" Door Open ");
        Serial.print(" Distance= ");
        Serial.println(distance);
        digitalWrite(buzzer_pin, HIGH);
        delay(500);
    }
    else
    {
        Serial.println(" Door closed ");
        Serial.print(" Distance= ");
        Serial.println(distance);
        digitalWrite(buzzer_pin, LOW);
        delay(500);
    }
}
