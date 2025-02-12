// C++ code
// LDR SENSOR
int light=9;
void setup()
{
  Serial.begin(9600);
 pinMode(9,OUTPUT);
}

void loop()
{
  int resistance=analogRead(A0);
  Serial.println(resistance);
  if(resistance<400){
    digitalWrite(light,HIGH);
    delay(1000);
  }
  else{
    digitalWrite(light,LOW);
  }
}