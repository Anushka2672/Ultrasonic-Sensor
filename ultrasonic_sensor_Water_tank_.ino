int Trig=D6;
int Echo=D7;

void setup() 
{
   pinMode(Trig,OUTPUT);    //Trig pin
   pinMode(Echo,INPUT);    //Echo pin

   Serial.begin(9600);
}

void loop() 
{
  digitalWrite(Trig,LOW);
  delayMicroseconds(2);
  digitalWrite(Trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig,LOW);

  long T= pulseIn(Echo,HIGH);
  int distance=0.034*(T/2);
  delay(300);


  if(distance==30)
  {
    Serial.println("Tank is empty");
  }
  
  else if(distance<30 && distance>24)
  {
    Serial.println("Tank 20% full");
    delay(300);
  }

  else if(distance<24 && distance>18)
  {
    Serial.println("Tank 40% full");
    delay(300);

  }

  else if(distance<18 && distance>12)
  {
    Serial.println("Tank 60% full");
    delay(300);

  }
  
  else if(distance<12 && distance>6)
  {
    Serial.println("Tank 80% full");
    delay(300);
  }

  else if(distance<6 && distance>0)
  {
    Serial.println("Tank 100% full");
    delay(300);

  }
}
