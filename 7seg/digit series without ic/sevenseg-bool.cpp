#include <Arduino.h>
int dela = 1000;
void setup() {
  
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    bool A, B, C, D;

   
}

void disp(bool A,bool B, bool C,bool D){
    bool a = (!A&&!B&&!C&&D)||(!A&&B&&!C&&!D);
    bool b = (!A&&B&&!C&&D)||(!A&&B&&C&&!D);
    bool c = (!A&&!B&&C&&!D);
    bool d = (!A&&!B&&!C&&D)||(!A&&B&&C&&D)||(A&&!B&&!C&&D)||(!A&&B&&!C&&!D);
    bool e = (!A&&!B&&!C&&D)||(!A&&!B&&C&&D)||(!A&&B&&!C&&D)||(!A&&B&&C&&D)||(A&&!B&&!C&&D)||(!A&&B&&!C&&!D);
    bool f = (!A&&!B&&!C&&D)||(!A&&!B&&C&&!D)||(!A&&!B&&C&&D)||(!A&&B&&C&&D);
    bool g = (!A&&!B&&!C&&!D)||(!A&&!B&&!C&&D)||(!A&&B&&C&&D );
    digitalWrite(2,a);
    digitalWrite(3,b);
    digitalWrite(4,c);
    digitalWrite(5,d);
    digitalWrite(6,e);
    digitalWrite(7,f);
    digitalWrite(8,g);
   
 
 }

void loop(){
  disp(0,0,0,0);
  delay(dela);
  disp(0,0,0,1);
  delay(dela);
  disp(0,0,1,0);
  delay(dela);
  disp(0,0,1,1);
  delay(dela);
  disp(0,1,0,0);
  delay(dela);
  disp(0,1,0,1);
  delay(dela);
  disp(0,1,1,0);
  delay(dela);
  disp(0,1,1,1);
  delay(dela);
  disp(1,0,0,0);
  delay(dela);
  disp(1,0,0,1);
  delay(dela);
  
  }