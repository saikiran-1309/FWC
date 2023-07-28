#include<Arduino.h>
int dela=1000;
int arr[5];

void funk(int a, int b , int c, int d) {
  int e = 0;
  digitalWrite(5, a);
  digitalWrite(4, b);
  digitalWrite(3, c);
  digitalWrite(2, d);
  e = (b && !c && !d) || (a && b && !d) || (!c && a);
  digitalWrite(8, e);
  //Serial.println(e);

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
  funk(0, 0, 0, 0);
  delay(dela);
  funk(0, 0, 0, 1);
  delay(dela);
  funk(0, 0, 1, 0);
  delay(dela);
  funk(0, 0, 1, 1);
  delay(dela);
  funk(0, 1, 0, 0);
  delay(dela);
  funk(0, 1, 0, 1);
  delay(dela);
  funk(0, 1, 1, 0);
  delay(dela);
  funk(0, 1, 1, 1);
  delay(dela);
  funk(1, 0, 0, 0);
  delay(dela);
  funk(1, 0, 0, 1);
  delay(dela);
  funk(1, 0, 1, 0);
  delay(dela);
  funk(1, 0, 1, 1);
  delay(dela);
  funk(1, 1, 0, 0);
  delay(dela);
  funk(1, 1, 0, 1);
  delay(dela);
  funk(1, 1, 1, 0);
  delay(dela);
  funk(1, 1, 1, 1);
  delay(dela);


}
