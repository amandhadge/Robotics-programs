void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
}
void moveRobot(String motion){
  if(motion=="Forward")
  {
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    Serial.println("Forward");
  }
  if(motion=="Backward")
  {
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    Serial.println("Backward");
  }
  if(motion=="Left")
  {
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    Serial.println("Left");
  }
  if(motion=="Right")
  {
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    Serial.println("Right");
  }
  if(motion=="Stop")
  {
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    Serial.println("Stop");
  }
}
void loop() {
  // put your main code here, to run repeatedly:
 int X=analogRead(A1);
 int Y=analogRead(A2);
// Serial.println("Value of X sensor"+String(X));
// Serial.println("\t");
// Serial.println("Value of Y sensor"+String(Y));
// delay(1000);
   if (X<300)  {
    moveRobot("Forward");
  }
  if (X > 350) {
    moveRobot("Backward");
  }
  if (Y>350) {
    moveRobot("Right");
  }
  if (Y<300) {
    moveRobot("Left");
  }
  if ((X>300)&&(Y<350)) {
    moveRobot("Stop");
  }


            }
