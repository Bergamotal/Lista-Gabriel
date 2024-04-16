void setup(){
 pinMode(LED_BUILTIN, OUTPUT);
 Serial.begin(9600);

}

void loop(){
  
	digitalWrite(LED_BUILTIN, 1);
  	Serial.println("Led ligado");
    delay(1000);  
  	digitalWrite(LED_BUILTIN, 0);
  	Serial.println("Led desligado");
	delay(1000);
  
}