// C++ code
//GRB LIGHT ON-OFF
 int green=11;
 int red =13;
 int blue =12;
void setup()
{
  pinMode(green,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop()
{
  //grbblink();
  //yellowblink();
   pinkblink();
}
void grbblink()
{
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(green,LOW);
  delay(1000);
  digitalWrite(red,HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  delay(1000);
  digitalWrite(blue,HIGH);
  delay(1000);
  digitalWrite(blue,LOW);
  delay(1000);
}
void yellowblink(){
  digitalWrite(green,HIGH);
  digitalWrite(red,HIGH);
  delay(1000);
  digitalWrite(green,LOW);
  digitalWrite(red,LOW);
  
}
void pinkblink(){
  digitalWrite(blue,HIGH);
  digitalWrite(red,HIGH);
  delay(1000);
  digitalWrite(blue,LOW);
  digitalWrite(red,LOW);
}
  