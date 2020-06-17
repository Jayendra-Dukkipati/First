
#include <Servo.h>
int A=A0;
int B=A1;
Servo S1;
Servo S2;
Servo S3;
Servo S4;
Servo S5;
Servo S6;
const int p1 =1;
const int p2 =2;
const int p3 =3;
const int p4 =4;
const int p5 =5;
const int p6 =6;
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
int c = Serial.read(A);
while (c>900)
{
  rightf;
  leftb;
  leftf;
  rightb;
}
}
