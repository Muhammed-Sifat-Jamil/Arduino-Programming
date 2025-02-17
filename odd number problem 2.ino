// C++ code
// loop for 
// odd number between 1-100
// for (start,condition,increment/decrement)
void setup()
{
  Serial.begin(9600);
  for( int i=1;i<=100;i++){
    if(i%2!=0){
     Serial.println(i);
     }
 
   }
}

void loop()
{

}