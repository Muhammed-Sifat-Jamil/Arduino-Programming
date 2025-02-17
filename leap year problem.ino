// C++ code
// Leap Year Prolem
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  int year;
  year=2021;
  if(year % 4==0&& year % 100!= 0 || year %400 == 0 ){
    Serial.print(year);Serial.println(" Leap Year");
  }
  else{
     Serial.print(year);Serial.println(" is not Leap Year");
  }
}
  