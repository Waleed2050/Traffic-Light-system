int red = 4;
int yellow = 5;
int green = 6;
int d1= 1000;
int d2= 500;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);     delay(d1); 
  digitalWrite(yellow, HIGH);  delay(d2); 
  digitalWrite(yellow, LOW);   delay(d2);
  digitalWrite(yellow, HIGH);  delay(d2); 
  digitalWrite(yellow, LOW);   delay(d2); 
  digitalWrite(yellow, HIGH);  delay(d2); 
  digitalWrite(yellow, LOW);   delay(d2);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);   delay(d1);
  digitalWrite(green, LOW);    delay(d1);

}