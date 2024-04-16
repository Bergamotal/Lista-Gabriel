int R = 8;
int G = 9;
int Y = 10;
String opcao = "";

void setup(){
  Serial.begin(120);
  Serial.println("Digite a letra R para o Led vermelho, G para o verde e Y para amarelo: ");
  
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);  
}

void loop(){
  
  String opcao = Serial.readString();
  Serial.println(opcao);
    
  if (opcao == "R"){
  	digitalWrite(R, 1);
    digitalWrite(G, 0);
    digitalWrite(Y, 0);
    Serial.println("Led vermelho");
  }
  else if (opcao == "G"){
   	digitalWrite(R, 0);
    digitalWrite(G, 1);
    digitalWrite(Y, 0);
    Serial.println("Led verde");
  }
  else if (opcao == "Y"){
    digitalWrite(R, 0);
    digitalWrite(G, 0);
   	digitalWrite(Y, 1);
    Serial.println("Led amarelo");
  }
  
}