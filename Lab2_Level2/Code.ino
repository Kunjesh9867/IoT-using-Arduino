//Name :- Kunjesh Kantilal Ramani (200515106)
//Date :- 25th May 2022
//Week :- Lab 2 LEVEL 2
//Description :-  Create your own personalized 15 seconds light show.You nedd to use atleat 3 different time variables between 500 and 1000 ms .Add comments every 5 seconds of your light show.


// I have assigned 3 variables for respective pinMode
int RED = 9;    //The red LED is connected pin 9 of the Arduino.
int BLUE = 11;  //The blue LED is connected pin 11 of the Arduino.
int GREEN = 10; //The green LED is connected pin 10 of the Arduino.
void setup() {   //The Setup function runs once.
  
  pinMode(RED, OUTPUT);    //Setup red LED pin as an output pin.
  pinMode(BLUE, OUTPUT);   //Setup blue LED pin as an output pin.
  pinMode(GREEN, OUTPUT);  //Setup green LED pin as an output pin.
  Serial.begin(9600);      // to make connection with Serial Monitor 
}

void loop() //The loop function runs forever.
{
  // Total time period is 1000+700+500+1000+700+550+550 = 5000ms or 5 seconds
  
  //Magenta = 1000ms delay
  digitalWrite(RED,HIGH);      // Turn on RED
  digitalWrite(BLUE,HIGH);     // Turn on BLUE
  delay(1000);                 // Delay of 1000ms
  digitalWrite(RED,LOW);       // Turn off RED

  //Cyan = 700ms delay
  digitalWrite(GREEN,HIGH);    // Turn on GREEN
  delay(700);                  // delay of 700ms
  digitalWrite(GREEN,LOW);     // Turn off GREEN

  //Blue = 500ms delay
  delay(500);                  // delay of 500ms
  digitalWrite(BLUE,LOW);      // Turn off BLUE

  //White = 1000ms delay
  digitalWrite(RED,HIGH);      // Turn on RED
  digitalWrite(BLUE,HIGH);     // Turn on BLUE
  digitalWrite(GREEN,HIGH);    // Turn on GREEN
  delay(1000);                 // delay of 1000ms
  digitalWrite(BLUE,LOW);      // Turn off BLUE

  //Yellow = 700ms delay
  delay(700);                  // delay of 700ms
  digitalWrite(GREEN,LOW);     // Turn off GREEN
 
  //Red = 550ms delay
  delay(550);                 // delay of 550ms
  digitalWrite(RED,LOW);      // Turn off RED

  //Green = 550ms delay
  digitalWrite(GREEN,HIGH);   // Turn on GREEN
  delay(550);                 // delay of 550ms
  digitalWrite(GREEN,LOW);    // Turn off GREEN
    
  
  
  
  // To display message in Serial Monitor after every 5 seconds passes
  Serial.println("5 Seconds Passed");
}