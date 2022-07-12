//Name :- Kunjesh Kantilal Ramani (200515106)
//Date :- 18th May 2022
//Week :- Week 1 LEVEL 1
//Description :-  = MOdify the program to make the LED Flash slow three times(1000ms)then quickly three times (100ms).


void setup()
{
  pinMode(13, OUTPUT);
}


void loop()
{
  delay(100);
  // Flash slow 3 times (1000ms)
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //Flash fast 3 times (100ms)
  digitalWrite(13, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  
  digitalWrite(13, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  
  digitalWrite(13, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  
} //end of loop