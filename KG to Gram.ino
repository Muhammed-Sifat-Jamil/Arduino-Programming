// C++ code
// Gm to Kg converter
void setup()
{
  Serial.begin(9600);
   float gm=1200;
   float kg;
     kg=gm/1000;
  Serial.println(kg);
}

void loop()
{
}