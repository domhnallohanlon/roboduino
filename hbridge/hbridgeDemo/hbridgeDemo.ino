int motor1 = 2; //declares the +ive terminal for the motor 

int motor2 = 4; //declares the other pin for the motor

int motorpmw = 3; // this is the pmw that will set how much battery power the motor is getting (speed)

//when using the L293D/N SN75441 don't for the the chip-enable pin

void setup()

{

pinMode(motor1, OUTPUT); //

pinMode(motor2, OUTPUT); // these are simply declaring the Arduino pins as outputs

pinMode(motorpmw, OUTPUT); //

}



void loop()

/*
See the documentation for what pin combinations produce what type of motion.
*/

{

analogWrite(motorpmw, 100); // this is the analog speed value for the arduino (0-255)

digitalWrite(motor1, HIGH); 

digitalWrite(motor2, LOW); //turns the motors on - forwards



delay(1000); // resets the coding sequence and refiles all the commands under the y-drive of the mainframe. 

digitalWrite(motor1, LOW);

digitalWrite(motor2, HIGH); //makes motor go backwards



delay(1000); //summons demons to influence the creation of man into waiting for exactly 1 second. 

}
