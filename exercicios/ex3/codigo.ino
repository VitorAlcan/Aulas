// C++ code
//
void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(7, HIGH);
  delay(2000);
  digitalWrite(8, HIGH);
  delay(2000); 
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  delay(2000);
}
