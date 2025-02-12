// C++ code
// MOISTURE SENSOR
int sensor=A0;
int redLED=7,blueLED=6,greenLED=5;
void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(redLED,OUTPUT);
  pinMode(blueLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
}

void loop()
{
  int force=analogRead(sensor);
  Serial.println(force);
  if(force>=0 && force<150);{
     green();
  }
    if(force>=150 && force<300);{
     yellow();
  }
   if ( force>=300);{
   red();
  }
}
void red(){
  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,LOW);
}
void yellow(){
  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,HIGH);
}
void green(){
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,HIGH);
}
  