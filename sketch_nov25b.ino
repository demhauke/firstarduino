int LED = 6;
int taster = 7;
int taster_status = 0;

void setup(){
pinMode(LED, OUTPUT);
pinMode(taster, INPUT);
}

void loop(){
taster_status = digitalRead(taster);

if (taster_status == HIGH){
  digitalWrite(LED, HIGH);
  delay(5000);
  
  digitalWrite(LED, LOW);
}else{
  digitalWrite(LED, LOW);
}
}
