// C++ code
//
void setup()
{
 Serial.begin(9600);
  
}

void loop()
{
  float a = Serial.parseFloat();
   Serial.println(a);
 
}