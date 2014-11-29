//*****************************
//  Domhnall O Hanlon
//
//  Snap Circuits Arduino Program 
//
//    v. 0.1 2013
//
//*****************************

int RB = 2; //declares the pin for the right back motor
int RF = 4; //declares the pin for the right front motor

int LB = 7;  // controls the left back motor
int LF = 8;  // controls the left front motor


void setup(){
  pinMode(RF, OUTPUT); //
  pinMode(RB, OUTPUT); // these simply are declaring them as outputs
  pinMode(LF, OUTPUT);
  pinMode(LB, OUTPUT);
}

void loop(){
//Drive forwards for a second 
digitalWrite(RF, HIGH);
digitalWrite(LF, HIGH);
delay(2000);
//stop for half a second
digitalWrite(RF, LOW);
digitalWrite(LF, LOW);
delay(500);
//spin
digitalWrite(RB, HIGH);
digitalWrite(LF, HIGH);
delay(1500);
//backwards
digitalWrite(LB, HIGH);
digitalWrite(RB, HIGH);
delay(1500);
}













////Spin around
//digitalWrite(RF, HIGH); 
//digitalWrite(LF, LOW);
//
//delay(1000);
//
//digitalWrite(RB, LOW); 
//digitalWrite(LB, HIGH);

