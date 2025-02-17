// C++ code
//While Loop
//divisible by 7
void setup()
{
  Serial.begin(9600);
  int i=100;
  while(i<=500){
     if(i%7==0){
     Serial.println(i);
     }
       i++;
   
 }
}

void loop()
{
  
}