int p6 = 6;
int p5 = 5;
int p3 = 3;
//brillo
int b =    0;
int ba =  10;
int be = 100;
int bi = 255;
int dt = 250;
int o = 0;
int d = 500;
void setup() {
  // put your setup code here, to run once:
  pinMode(p6, OUTPUT);
  pinMode(p5, OUTPUT);
  pinMode(p3, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(p6, b);
  delay(dt);
  analogWrite(p6, ba);
  delay(dt);
  analogWrite(p6, be);
  delay(dt);
  analogWrite(p6, bi);
  delay(dt);
  //
  analogWrite(p5, b);
  delay(dt);
  analogWrite(p5, ba);
  delay(dt);
  analogWrite(p5, be);
  delay(dt);
  analogWrite(p5, bi);
  delay(dt);
//
  analogWrite(p3, b);
  delay(dt);
  analogWrite(p3, ba);
  delay(dt);
  analogWrite(p3, be);
  delay(dt);
  digitalWrite(p3, bi);

  analogWrite(p6, o);
  delay(d);
  analogWrite(p5, o);
  delay(d);
  analogWrite(p3, o);
  delay(d);


}
