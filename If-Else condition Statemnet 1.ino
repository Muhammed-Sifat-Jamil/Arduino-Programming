// C++ code
// If-Else condition statement
void setup()
{
 Serial.begin(9600) ;
}

void loop()
{
  if (Serial.available()>0){
  char data= Serial.read();
     if (data=='r' || data=='R'){
      Serial.println("Today is rainy day");
      }
    else{
      (data=='s' || data=='S');
      Serial.println("Today is sunny day");
        }
  delay(1000);
  }
}