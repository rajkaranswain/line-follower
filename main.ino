#define black 1
#define white 0

//sensor pins
const int IR1 = A0;   
const int IR2 = A1;   
const int IR3 = A2;
const int IR4 = A3;
const int IR5 = A4;

//Motor control pins-
const int pwmA = 5;
const int MOT0 = 6;
const int MOT1 = 7;
const int MOT2 = 8;
const int MOT3 = 9;
const int pwmB = 10;

void setup() {
  pinMode(MOT0, OUTPUT);
  pinMode(MOT1, OUTPUT);
  pinMode(MOT2, OUTPUT);
  pinMode(MOT3, OUTPUT);
  
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  pinMode(IR3, INPUT);
  pinMode(IR4, INPUT);
  pinMode(IR5, INPUT);

  analogWrite(pwmA, 60);
  analogWrite(pwmB, 60);
}
void loop() {

  int s1 = digitalRead(IR1);
  int s2 = digitalRead(IR2);
  int s3 = digitalRead(IR3);
  int s4 = digitalRead(IR4);
  int s5 = digitalRead(IR5);
  
  // print the sensor values:

  //Conditions to drive line folower appropriately
//forward
//if(condition)
{
    digitalWrite(MOT0, LOW);
    digitalWrite(MOT1, HIGH);
    digitalWrite(MOT2, LOW);
    digitalWrite(MOT3, HIGH);
  delay(10);
}
//right
//if(condition)
{
    digitalWrite(MOT0, LOW);
    digitalWrite(MOT1, LOW);
    digitalWrite(MOT2, LOW);
    digitalWrite(MOT3, HIGH);
  delay(10);
}

//left
//if(condition)
{
    digitalWrite(MOT0, LOW);
    digitalWrite(MOT1, HIGH);
    digitalWrite(MOT2, LOW);
    digitalWrite(MOT3, LOW);
  delay(10);
}

//stop
if(s1==0 && s2==0 && s3==0 && s4==0 && s5==0)
{
    digitalWrite(MOT0, LOW);
    digitalWrite(MOT1, LOW);
    digitalWrite(MOT2, LOW);
    digitalWrite(MOT3, LOW);
}
}
