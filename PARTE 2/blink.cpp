// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(13, LOW);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(12, HIGH);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(12, LOW);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(11, HIGH);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(11, LOW);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(10, HIGH);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(10, LOW);
  delay(100); // Wait for 100 millisecond(s)
}