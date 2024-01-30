void setup() 
{
  pinMode(2, OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);

}

void loop()
{
   digitalWrite(1, HIGH);
  delay(400); 
  digitalWrite(2, HIGH);
  delay(420); 
  digitalWrite(2, LOW);
  delay(460);
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  delay(540);
  digitalWrite(2, HIGH);
  delay(580);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(620); 
  digitalWrite(3, LOW);
  delay(600);

}
