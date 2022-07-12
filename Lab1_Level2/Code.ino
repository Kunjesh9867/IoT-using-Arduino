//Name :- Kunjesh Kantilal Ramani (200515106)
//Date :- 18th May 2022
//Week :- Week 1 LEVEL 2
//Description :-  = Modify the program to flash your initials using Morse code (See chart below). A “dot” would have the LED on for 100 mS and for a dash the LED would be on for 1000 mS

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  // MY initail are K  and R so it will be 1000,100,1000 and
  // 100, 1000, 100 ms
  // I have write the code in format:-
  // HIGH, 1000ms delay, LOW, 100ms delay, HIGH 1000ms and
  // LOW, 100ms delay, HIGH, 1000ms delay, LOW 100ms Delay 
  
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(13, LOW);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(100); // Wait for 100 millisecond(s)
}
