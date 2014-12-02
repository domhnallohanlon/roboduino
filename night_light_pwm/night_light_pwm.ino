
int sensor = 0;
int led = 9;


void setup(){

  analogReference(DEFAULT); //not strictly necessary
  
  pinMode(led, OUTPUT);
  
  Serial.begin(9600);
}


void loop(){
  int count = 1;
  int var = analogRead(sensor);
  
  
  var = constrain(var, 300,500); //making sure that the analogRead() data doesn't exceed expectations
  int brightness = map(var, 300, 500, 255, 0); //inverse relationship!
  
  analogWrite(led, brightness);
  
 Serial.print("%d: The sensor value is ", count);
 Serial.println(analogRead(sensor));
 
 Serial.print("The brightness level is ");
 Serial.println(brightness);
 
 

delay(1000);
 
  
  
}
