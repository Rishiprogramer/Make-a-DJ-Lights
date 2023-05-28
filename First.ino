int red = 8;
int yellow = 7;
int green = 9;
void setup() 
{
 pinMode(red, OUTPUT);
 pinMode(yellow, OUTPUT);
 pinMode(green, OUTPUT);
}
void loop() 
{
  digitalWrite(red, HIGH);
  delay(10);

  digitalWrite(red, LOW);
  delay(1);

  digitalWrite(yellow, HIGH);
  delay(10);

  digitalWrite(yellow,LOW);
  delay(1);

  digitalWrite(green,HIGH);
  delay(10);
  digitalWrite(green, LOW);
  delay(1);
  digitalWrite(yellow, HIGH);
  delay(10);

  digitalWrite(yellow,LOW);
  delay(1);

  digitalWrite(red, HIGH);
  delay(10);

  digitalWrite(red, LOW);
  delay(1);
  
  
  
}
