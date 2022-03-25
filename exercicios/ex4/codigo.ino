// C++ code
//
void setup()
{
  pinMode(4, OUTPUT);
  pinMode(2, INPUT);
}

int var;
void loop()
{
  var = digitalRead(2);
  if(var){
  digitalWrite(4, HIGH);
  }else{
  digitalWrite(4, LOW);
  }
  delay(10);
}
