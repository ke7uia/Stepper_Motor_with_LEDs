#include <Stepper.h>
int stepsPerRevolution=2048;
int motSpeed=10;
int cwLedPin=3;
int ccLedPin=2;
//int buttonValue;
int motorDir=1;
int buttonValNew;
int buttonValOld=1;

int buttonPin=4;
//int stepperState=0;
//int buttonNew;
//int buttonOld=1;
int dt=100;

Stepper myStepper(stepsPerRevolution, 8,10,9,11);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);

  myStepper.setSpeed(motSpeed);
  pinMode(cwLedPin, OUTPUT);
  pinMode(ccLedPin, OUTPUT);
 
}

void loop() {
  buttonValNew=digitalRead(buttonPin);
  if(buttonValNew==1 && buttonValOld==0){
    motorDir=motorDir*(-1);
  }
  myStepper.step(motorDir*1);
    if(motorDir==1){
      digitalWrite(ccLedPin,LOW);
      digitalWrite(cwLedPin,HIGH);  
    }
    else {
      digitalWrite(ccLedPin,HIGH);
      digitalWrite(cwLedPin,LOW);  
    }
//  Serial.print("Button   ");
//  Serial.print(buttonValNew);
//  Serial.print(buttonValOld);
//  Serial.print(motorDir);
//  Serial.println(buttonValNew);

  //delay(dt);

  buttonValOld=buttonValNew;


}
