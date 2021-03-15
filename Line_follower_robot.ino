void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
pinMode(A0,INPUT);
pinMode(A1,INPUT);
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
 int R=analogRead(A0);
 int L=analogRead(A1);
// Serial.println("Value of right sensor"+String(Right));
// Serial.println("\t");
// Serial.println("Value of left sensor"+String(Left));
// delay(1000);
   if ((R > 600) && (L >600)) {
    moveRobot("forward");
  }
  if ((R < 600) && (L < 600)) {
    moveRobot("Forward");
  }
  if ((R < 600) && (L < 600)) {
    moveRobot("Stop");
  }
  if ((R <600) && (L >600)) {
    moveRobot("Right");
  }
    if ((R >600) && (L <600)) {
    moveRobot("Left");

            }

}
