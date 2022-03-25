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
  digitalWrite(4, HIGH);
  var = digitalRead(2);
  if(var){
  digitalWrite(4, LOW);
  }else{
  
  }
  delay(10);
}
