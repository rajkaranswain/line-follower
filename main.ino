int s1=0; // all the initial values are set to zero
int s2=0;
int s3=0;
int s4=0;
int s5=0;
int s6=0;
int s7=0;
int s8=0;

const int lmf=10; // left motor forward
const int lmb=11; // left motor backward
const int rmf=12; // right motor forward
const int rmb=13; // right motor backward
void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT);// start the pin mode from 2 leave the pin 0 and 1 as this pins are RX TX you need to open the pins every time you upload a code.so its better to avoid this pins.
pinMode(3,INPUT);
pinMode(4,INPUT);
pinMode(5,INPUT);
pinMode(6,INPUT);
pinMode(7,INPUT);
pinMode(8,INPUT);
pinMode(9,INPUT);

pinMode(lmf,OUTPUT);
pinMode(lmb,OUTPUT);
pinMode(rmf,OUTPUT);
pinMode(rmb,OUTPUT);
Serial.begin(9600);
}

void loop() {
  s1=digitalRead(2);
  s2=digitalRead(3);
  s3=digitalRead(4);
  s4=digitalRead(5);
  s5=digitalRead(6);
  s6=digitalRead(7);
  s7=digitalRead(8);
  s8=digitalRead(9);
 
  
  
  // put your main code here, to run repeatedly:
  //forward
if((s4==0||s5==0));
{digitalWrite(rmf, HIGH);
digitalWrite(rmb, LOW);
digitalWrite(lmf, HIGH);
digitalWrite(lmb, LOW);
delay(10);
 }
 //right
 if((s6==0||s7==0||s8==0))
{
digitalWrite(rmf, LOW);
digitalWrite(rmb, LOW);
digitalWrite(lmf, HIGH);
digitalWrite(lmb, LOW);
delay(10);
}

//left
if((s1==0||s2==0||s3==0))
{
digitalWrite(rmf, HIGH);
digitalWrite(rmb, LOW);
digitalWrite(lmf, LOW);
digitalWrite(lmb, LOW);
delay(10);
}
}
