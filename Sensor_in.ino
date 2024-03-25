int trig = 2;
int echo =3;
int time;
int distance;




void setup() {
 Serial.begin(9600);
 pinMode(2,OUTPUT);
 pinMode(3,INPUT);
}

void loop() {
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  time =pulseIn(echo,HIGH);
  distance=(time*0.034)/2;
  Serial.print(distance);
  Serial.println("cm");
  delay(1000);

}
