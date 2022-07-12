//Name :- Kunjesh Kantilal Ramani (200515106)
//Date :- 25th May 2022
//Week :- Lab 2 LEVEL 3
//Description :-  SLOW THE LIGHT CHALLENGE.


// Created 3 variables
// we have assigned 3 variables for respective pinMode

int RED = 9;                     //The red LED is connected pin 9 of the Arduino.
int BLUE = 11;                   //The blue LED is connected pin 11 of the Arduino.
int GREEN = 10;                  //The green LED is connected pin 10 of the Arduino.
 
void setup() {                   //The Setup function runs once
  pinMode(RED, OUTPUT);          //Setup red LED pin as an output pin.
  pinMode(BLUE, OUTPUT);         //Setup blue LED pin as an output pin.
  pinMode(GREEN, OUTPUT);        //Setup green LED pin as an output pin.
  Serial.begin(9600);            // to make connection with Serial Monitor
  
}

void loop() {  //Infinite loop
  
  // for loop is used as mentioned in question to run the loop 10 times from 1 to 11. 
  for(int i = 1; i < 11; i++){
    float TimeLapse= (i*1000)/7;  
    // here we created a variable which changes the values according to the change in "i" in FOR LOOP
    // and then converted the variable "i" in milli seconds by multiplying by 1000 and divided it by 7 so that each color can get the same time period as there are 7 color so divided by 7
    
    //Red
    digitalWrite(RED,HIGH);       // Turn on RED
    delay(TimeLapse);             // delay
    digitalWrite(RED,LOW);        // Turn off RED

    //Green
    digitalWrite(GREEN,HIGH);     // Turn on GREEN
    delay(TimeLapse);             // delay
    digitalWrite(RED,LOW);        // Turn ff RED
    
    //Blue
    digitalWrite(BLUE,HIGH);       // Turn on BLUE
    delay(TimeLapse);              // delay

    //Magenta
    digitalWrite(RED,HIGH);        // Turn on RED
    delay(TimeLapse);              // delay
    digitalWrite(BLUE,LOW);        // Turn off BLUE

    //Yellow
    digitalWrite(GREEN,HIGH);      // Turn on GREEN
    delay(TimeLapse);              // delay
    digitalWrite(RED,LOW);         // Turn off RED
  
    //Cyan
    digitalWrite(BLUE,HIGH);       // Turn on BLUE
    delay(TimeLapse);              // delay

    //White
    digitalWrite(RED,HIGH);        // Turn on RED
    delay(TimeLapse);              // delay
    digitalWrite(RED,LOW);         // Turn off RED
    digitalWrite(BLUE,LOW);        // Turn off BLUE
    digitalWrite(GREEN,LOW);       // Turn off GREEN
    
    
    // To dislay the message in Serial Monitor after every seconds passes, I used a serial.print and serial.println to make it more interactive with ARDUINO
    Serial.print(i);
    Serial.println(" Second Passed !!!");
    }
}