// C++ code
// If-Else condition statement
void setup()
{
 Serial.begin(9600) ;
}

void loop()
{
  if (Serial.available()>0){
    int number1=10;
    int number2=13;
    if(number1>number2){
    Serial.print(number1);
    Serial.print(" is the largest");
  }
  else{
    Serial.print(number2);
    Serial.print(" is the largest");
  }
    Serial.println();  
  }     
  
}