int pirPin = D2;
int val;

void setup()
{
Serial.begin(9600);
}

void loop()
{
val = digitalRead(pirPin);
//low = no motion, high = motion
Serial.println(val);

if (val == LOW)
{
  Serial.println("No motion");
}
else
{
  Serial.println("Motion detected  ALARM");
}

delay(10);
}