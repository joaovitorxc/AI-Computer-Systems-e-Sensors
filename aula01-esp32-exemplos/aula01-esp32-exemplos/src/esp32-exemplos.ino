int ledFalha = 26;
int ledSucesso = 27;

String maquina = "Maquina 1";

void setup() {
  Serial.begin(115200);
  pinMode(ledFalha, OUTPUT);
  pinMode(ledSucesso, OUTPUT);
}

void loop() {

  Serial.println(maquina + " - SUCESSO");
  digitalWrite(ledSucesso, HIGH);
  digitalWrite(ledFalha, LOW);
  delay(2000);

  Serial.println(maquina + " - SUCESSO");
  delay(2000);

  Serial.println(maquina + " - SUCESSO");
  delay(2000);

  Serial.println(maquina + " - FALHA");
  digitalWrite(ledSucesso, LOW);
  digitalWrite(ledFalha, HIGH);
  delay(4000);
}