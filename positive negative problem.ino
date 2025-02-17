// C++ code
// Positive-negative problem
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int n=-9;
  if(n==0){
    Serial.print(n),Serial.print(" is zero");
  }
  else if(n>0){
    Serial.print(n),Serial.print(" is a positive number");
  }
  else{
    Serial.print(n),Serial.print(" is a negative number"); 
  }
  Serial.println();
}