void setup(){
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  
  for(int i = 1; i <= 255; i++){
    analogWrite(9, i);
    Serial.println(i);
    delay(5);
  }  
  delay(1000);
  
  for(int i = 255; i >= 0; i--){
  	analogWrite(9, i);
    Serial.println(i);
    delay(5);
  }  
  
  delay (1000);
}