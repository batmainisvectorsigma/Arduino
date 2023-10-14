//Example No 1 : Blink Example
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);                                     
}
void loop() {
  myBlinkFunction();
}
void myBlinkFunction(){
  digitalWrite(LED_BUILTIN, HIGH);    
  delay(1000);                       
  digitalWrite(LED_BUILTIN, LOW);               
  delay(1000);  
}
