int lmt1 = 3;
int lmt2 = 5;
int rmt2 = 6;
int rmt1 = 11;
int sensor;

void setup() {
  // put your setup code here, to run once:
   pinMode (10,INPUT);
  pinMode (lmt1,OUTPUT);
  pinMode (lmt2,OUTPUT);
  pinMode (rmt1,OUTPUT);
  pinMode (rmt2,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  sensor = digitalRead(10);
  if(sensor == HIGH){
      stpright();   
  }
  else {
    stpleft();
  }
  
}
void rvrs(){
  digitalWrite(lmt1,HIGH);
  digitalWrite(lmt2,LOW);
  digitalWrite(rmt1,HIGH);
  digitalWrite(rmt2,LOW);
  
}
void fwd(){
  digitalWrite(lmt1,LOW);
  digitalWrite(lmt2,HIGH);
  digitalWrite(rmt1,LOW);
  digitalWrite(rmt2,HIGH);
  
}
void right(){
  digitalWrite(lmt1,LOW);
  digitalWrite(lmt2,HIGH);
  digitalWrite(rmt1,HIGH);
  digitalWrite(rmt2,LOW);
  
}

void left(){
  digitalWrite(lmt1,HIGH);
  digitalWrite(lmt2,LOW);
  digitalWrite(rmt1,LOW);
  digitalWrite(rmt2,HIGH);
  
}

void stp(){
  digitalWrite(lmt1,LOW);
  digitalWrite(lmt2,LOW);
  digitalWrite(rmt1,LOW);
  digitalWrite(rmt2,LOW);
  
}
 void stpright(){
    digitalWrite(lmt1,LOW);
    digitalWrite(lmt2,HIGH);
    digitalWrite(rmt1,LOW);
    digitalWrite(rmt2,LOW);
    
  }
  
  void stpleft(){
    digitalWrite(lmt1,LOW);
    digitalWrite(lmt2,LOW);
    digitalWrite(rmt1,LOW);
    digitalWrite(rmt2,HIGH);
    
  }
