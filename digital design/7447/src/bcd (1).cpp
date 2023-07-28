#include<Arduino.h>
void disp7447(int D,int C,int B,int A)
{
	digitalWrite(2,A);
	digitalWrite(3,B);
	digitalWrite(4,C);
	digitalWrite(5,D);
}
void setup()
{
	pinMode(2,OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
}
void loop()
{
	disp7447(0,0,0,0);
	delay(500);
        disp7447(0,0,0,1);
        delay(500);
        disp7447(0,0,1,0);
        delay(500);
	disp7447(0,0,1,1);
        delay(500);
	disp7447(0,1,0,0);
        delay(500);
	disp7447(0,1,0,1);
        delay(500);
	disp7447(0,1,1,0);
        delay(500);
	disp7447(0,1,1,1);
        delay(500);
	disp7447(1,0,0,0);
        delay(500);
	disp7447(1,0,0,1);
        delay(500);


}
