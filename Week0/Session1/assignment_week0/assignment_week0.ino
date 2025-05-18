int buzzer1 = 2;
int buzzer2 = 3;
int buzzer3 = 4;
int LED1 = 5;
int LED2 = 6;
int LED3 = 7;
int LED4 = 8;
int LED5 = 9;
//potentiometer 1 -A4 (buzzer control)
//potentiometer 2 - A5 (LEDs)
void setup()
{
  pinMode(buzzer1,OUTPUT);
  pinMode(buzzer2,OUTPUT);
  pinMode(buzzer3,OUTPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);
}

void loop()
{
  //buzzer according to potentiometer value
  int pot1 = analogRead(A4);
  if(pot1<342){
    digitalWrite(buzzer2,LOW);
    digitalWrite(buzzer3,LOW);
    digitalWrite(buzzer1,HIGH);
  }else if(pot1<683){
    digitalWrite(buzzer1,LOW);
    digitalWrite(buzzer3,LOW);
    digitalWrite(buzzer2,HIGH);
  }else{
    digitalWrite(buzzer2,LOW);
    digitalWrite(buzzer1,LOW);
    digitalWrite(buzzer3,HIGH);
  }
  
  //reading value of potentiometer and changing delay between LEDs
  for(int i=5;i<10;i++){
    int pot2 = analogRead(A5);
    digitalWrite(i,HIGH);
    delay(pot2);
    digitalWrite(i,LOW);
  }
}

//TinkerCAD link - https://www.tinkercad.com/things/gnS5I7sqLXb-assignmentweek0?sharecode=4wcHlf2fQ2JohEJw1Gowf2f1jGD_kQRglvyw_EQrdkI