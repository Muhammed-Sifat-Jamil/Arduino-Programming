// C++ code
// Largest number among 3 numbers
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  int n1,n2,n3;
  n1=10;
  n2=13;
  n3=19;
  if(n1>n2 && n1>n3){
    Serial.print(n1);Serial.println(" is the Largest");
  }
  if(n2>n3 && n2>n1){
    Serial.print(n2);Serial.println(" is the Largest");
  }
  else{
    Serial.print(n3);Serial.println(" is the Largest");
  }
  delay(1000);
}