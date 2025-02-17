// C++ code
//
void setup()
{
 Serial.begin(9600);
  
}

void loop()
{
  char a=Serial.read();
   Serial.println(a);
 
}