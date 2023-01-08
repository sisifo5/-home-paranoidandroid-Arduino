//Variable Statement
//~Analog pin
int a = 1;
int b = 2;
int c = 3;//~
int d = 4;
int e = 5;//~
int f = 6;//~
int g = 7;
int h = 8;

//brigthness
int b1 = 0;
int b2 = 150;
int b3 = 200;
int b4 = 255;

//time
int t1 = 100;
int t2 = 250;

void setup() {
  //Of our Arduinoboard variable = pinNumber
  //Value of Pinmode variable output 
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(h, OUTPUT);
}

void loop() {
  //to run repeatedly:
  //Analog~
  //Variable c whit value of variable brigthness b++
  //delayconstant t1
  analogWrite(c, b1);
  delay(t1);
  analogWrite(c, b2);
  delay(t1);
  analogWrite(c, b3);
  delay(t1);
  analogWrite(c, b4);
  delay(t1);
  //Analog~
  //Variable e whit value of variable brigthness b++
  analogWrite(e, b1);
  delay(t1);
  analogWrite(e, b2);
  delay(t1);
  analogWrite(e, b3);
  delay(t1);
  analogWrite(e, b4);
  delay(t1);
  //Analog~
  //Variable c whit value of variable brigthness b++
  analogWrite(f, b1);
  delay(t1);
  analogWrite(f, b2);
  delay(t1);
  analogWrite(f, b3);
  delay(t1);
  analogWrite(f, b4);
  delay(t1);
  
  //Variables and boolean value 
  digitalWrite(a, HIGH);
  delay(t1);
  digitalWrite(b, LOW);
  delay(t1);
  digitalWrite(d, HIGH);
  delay(t1);
  digitalWrite(g, LOW);
  delay(t1);
  digitalWrite(h, HIGH);
  delay(t1);

  digitalWrite(a, LOW);
  delay(t2);
  digitalWrite(b, HIGH);
  delay(t2);
  digitalWrite(d, LOW);
  delay(t2);
  digitalWrite(g, HIGH);
  delay(t2);
  digitalWrite(h, LOW);
  delay(t2);
}
