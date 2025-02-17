// C++ code
// loop for 
// Divisible by 7 between 100-500
// for (start,condition,increment/decrement)
void setup()
{
  Serial.begin(9600);
 
  int count=0;
  for( int i=100;i<=500;i++){
    if(i%7==0){
     Serial.println(i);count++;
     }
 
   }
  Serial.print("Total numbers divisible by 7 are:");Serial.print(count);
}

void loop()
{

}