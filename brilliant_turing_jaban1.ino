// C++ code
//
void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  if (digitalRead (2) == 1)
  {
  digitalWrite(3, 1);
  }
  else {
    digitalWrite (3, 0);
  }
}