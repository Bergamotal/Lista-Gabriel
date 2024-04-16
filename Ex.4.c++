int botao = 2;

void setup(){
  Serial.begin(9600);
  Serial.println("Aperte o botão para ligar e desligar");
  pinMode(botao, INPUT);
  
}

void loop(){
     
  if (digitalRead(botao) == HIGH){
  	Serial.println("Ligado");
  }  
  else{
    Serial.println("Desigado");  
  }
}