//Name :- Kunjesh Kantilal Ramani (200515106)
//Date :- 18th May 2022
//Week :- Week 1 LEVEL 3
//Description :-  = Write a program that alternates between the blue LED1 and red LED2, to simulate an emergency vehicle.have taken 100ms delay as per the requirement, it can 
                    // taken as 1000ms or any other value too.


int redLED=13;
int blueLED=12;



void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop()
{
  digitalWrite(redLED, HIGH);
  delay(100); // Wait for 100 millisecond(s)
  
  digitalWrite(redLED, LOW);
  digitalWrite(blueLED, HIGH);
  delay(100); // Wait for 100 millisecond(s)
  
  digitalWrite(blueLED, LOW);
  
}