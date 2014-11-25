const int ledPin = 13;      // the pin formerly know as the LED pin, now known as the enable pin.
const int motorP = 6;       // +ive motor
const int motorN = 7;       // -ive motor
byte serialA;
void setup()
{
  // initialize the serial communication:
  Serial.begin(9600); //baud rate - make sure it matches that of the module you got:
  // initialize the ledPin as an output:
  pinMode(ledPin, OUTPUT);
}

void loop() {

  
if (Serial.available() > 0) {serialA = Serial.read();Serial.println(serialA);}

   
      switch (serialA) {
    case 1:
      digitalWrite(ledPin, HIGH);
      mush();
      break;
    case 2:
      digitalWrite(ledPin, LOW);
      mush();
      break;
    case 3:digitalWrite(ledPin, HIGH);
      delay(100);
      digitalWrite(ledPin, LOW);
      delay(100);
     default:
      digitalWrite(ledPin, LOW);
      whoa();
      break;
  }
}  
void mush(){
  digitalWrite(motorP, HIGH);
  digitalWrite(motorN, LOW);
}

void whoa(){
  digitalWrite(motorP, LOW);
  digitalWrite(motorN, LOW);
}

