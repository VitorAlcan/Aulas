// C++ code
//
void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  int var = digitalRead(2);
  delay(50);
  digitalWrite(3, var);
  delay(200);
