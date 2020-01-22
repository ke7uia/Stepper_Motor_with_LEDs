#include <Stepper.h>
int stepsPerRevolution=2048;
int motSpeed=10;
int cwLedPin=3;
int ccLedPin=2;
//int buttonValue;
int motorDir=1;
int buttonValNew;
int buttonValOld;

int buttonPin=4;
int stepperState=0;
int buttonNew;
int buttonOld=1;
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
  buttonValue=digitalRead(buttonPin);
  Serial.print("Button   ");
  Serial.println(buttonValue);
  delay(dt);






  
/*buttonNew=digitalRead(buttonPin);
if(buttonOld == 1 && buttonNew == 0){
//if(stepperState == 0){
  Serial.print("cw ");
  Serial.print(stepperState);
  Serial.print(buttonOld);
  Serial.println(buttonNew);
  
  digitalWrite(ccLedPin, LOW);
  digitalWrite(cwLedPin, HIGH);
  myStepper.step(stepsPerRevolution/3);
  delay(dt);
}
else{
  Serial.print("cc    ");
  Serial.print(stepperState);
  Serial.print(buttonOld);
  Serial.println(buttonNew);

  digitalWrite(cwLedPin, LOW);
  digitalWrite(ccLedPin, HIGH);
  myStepper.step(-stepsPerRevolution/4);
  delay(dt);

}
*/
}
