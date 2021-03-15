void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
pinMode(4,INPUT);
pinMode(5,INPUT);
pinMode(6,INPUT);
pinMode(7,INPUT);
}
void moveRobot(String motion){
  if(motion=="Forward")
  {
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
//    Serial.println("Forward");
  }
  if(motion=="Backward")
  {
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
//    Serial.println("Backward");
  }
  if(motion=="Left")
  {
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
//    Serial.println("Left");
  }
  if(motion=="Right")
  {
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
//    Serial.println("Right");
  }
  if(motion=="Stop")
  {
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
//    Serial.println("Stop");
  }
}
void loop() {
  // put your main code here, to run repeatedly:
 int D0=digitalRead(4);
 int D1=digitalRead(5);
 int D2=digitalRead(6);
 int D3=digitalRead(7);
// Serial.println("Value of right sensor"+String(Right));
// Serial.println("\t");
// Serial.println("Value of left sensor"+String(Left));
// delay(1000);
   if ((D3==0)&&(D2==0)&&(D1==1)&&(D0==0)) {
    moveRobot("Forward");
  }
  if ((D3==0)&&(D2==1)&&(D1==0)&&(D0==1)) {
    moveRobot("Stop");
  }
  if ((D3==0)&&(D2==1)&&(D1==0)&&(D0==0)) {
    moveRobot("Left");
  }
  if ((D3==0)&&(D2==1)&&(D1==1)&&(D0==0)) {
    moveRobot("Right");
  }
  if ((D3==1)&&(D2==0)&&(D1==0)&&(D0==0)) {
    moveRobot("Backward");
  }

            }
