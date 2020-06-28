
#include <Servo.h>
int A=A0;
int B=A1;
Servo S1;
Servo S2;
Servo S3;
Servo S4;
Servo S5;
Servo S6;
int p1 =D3;
int p2 =D4;
int p3 =D6;
int p4 =D13;
int p5 =D9;
int p6 =D8;
void stand(){
S1.write(90);
S2.write(90);
S3.write(0);
S4.write(90);
S5.write(90);
S6.write(0);
}
void rightf(){
S1.write(135);
S2.write(135);
S3.write(0);
S4.write(45);
S5.write(45);
S6.write(0);
}
void leftb(){
S1.write(135);
S2.write(135);
S3.write(0);
S4.write(45);
S5.write(45);
S6.write(0);
}
void leftf(){
S1.write(135);
S2.write(135);
S3.write(0);
S4.write(45);
S5.write(45);
S6.write(0);
}
void rightb(){
S1.write(135);
S2.write(135);
S3.write(0);
S4.write(45);
S5.write(45);
S6.write(0);
}
void setup() {
  // put your setup code here, to run once:
pinMode(A,INPUT);
pinMode(B,INPUT);
pinMode(p1,INPUT);
pinMode(p2,INPUT);
pinMode(p3,INPUT);
pinMode(p4,INPUT);
pinMode(p5,INPUT);
pinMode(p6,INPUT);
Serial.begin(9600);
S1.attach(p1);
S2.attach(p2);
S3.attach(p3);
S4.attach(p4);
S5.attach(p5);
S6.attach(p6);
}

void loop() {
int c = Serial.read();
while (c>900)
{
  rightf;
  leftb;
  leftf;
  rightb;
}
}
