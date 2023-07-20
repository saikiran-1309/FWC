#include<Arduino.h>
int dela=1000;
int arr[5];

void func(int a, int b , int c, int d) {
  int e = 0;
  digitalWrite(2, a);
  digitalWrite(3, b);
  digitalWrite(4, c);
  digitalWrite(5, d);
  e = (b && !c && !d) || (a && b && !d) || (!c && a);
  digitalWrite(8, e);
  //Serial.print("X_1=");
  // Serial.print(a);
  //Serial.print("X_0=");
  // Serial.print(b);
  //Serial.print("Y_1=");
  // Serial.print(c);
  //Serial.print("Y_0=");
  // Serial.print(d);
  //Serial.print("S=");
  // Serial.print(e);

}

void setup() {

  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  pinMode(8, OUTPUT);
  //Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  func(0, 0, 0, 0);
  delay(dela);
  func(0, 0, 0, 1);
  delay(dela);
  func(0, 0, 1, 0);
  delay(dela);
  func(0, 0, 1, 1);
  delay(dela);
  func(0, 1, 0, 0);
  delay(dela);
  func(0, 1, 0, 1);
  delay(dela);
  func(0, 1, 1, 0);
  delay(dela);
  func(0, 1, 1, 1);
  delay(dela);
  func(1, 0, 0, 0);
  delay(dela);
  func(1, 0, 0, 1);
  delay(dela);
  func(1, 0, 1, 0);
  delay(dela);
  func(1, 0, 1, 1);
  delay(dela);
  func(1, 1, 0, 0);
  delay(dela);
  func(1, 1, 0, 1);
  delay(dela);
  func(1, 1, 1, 0);
  delay(dela);
  func(1, 1, 1, 1);
  delay(dela);


}
