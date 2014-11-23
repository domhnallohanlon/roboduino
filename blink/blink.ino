void setup(){
	//pin 13 is the onboard LED
	pinMode(13, OUTPUT);
}

void loop(){
	digitalWrite(13, HIGH);
	delay(1);	
	digitalWrite(13, LOW);
	delay(1);
}


