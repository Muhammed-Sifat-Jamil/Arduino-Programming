// C++ code
//Motor Control

 int n =11;
 int p =10;
void setup()
{
  pinMode(p,OUTPUT);
  pinMode(n,OUTPUT);

}

void loop()
{
  analogWrite(p,180);
  analogWrite(n,0);
  delay(1000);
  analogWrite(p,0);
  analogWrite(n,180);
  delay(1000);
  
}
