Created July 2nd, 2017, 8:07:00 AM
*/
const int st = 500;
const int lt = 1000;
const int pt = 2000;
void setup() {
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(st);
  digitalWrite(LED_BUILTIN, LOW);
  delay(st);
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(st);
  digitalWrite(LED_BUILTIN, LOW);
  delay(st);
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(st);
  digitalWrite(LED_BUILTIN, LOW);
  delay(lt);
  
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(st);
  digitalWrite(LED_BUILTIN, LOW);
  delay(st);
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(st);
  digitalWrite(LED_BUILTIN, LOW);
  delay(st);
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(st);
  digitalWrite(LED_BUILTIN, LOW);
  delay(st);
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(st);
  digitalWrite(LED_BUILTIN, LOW);
  delay(st);
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(st);
  digitalWrite(LED_BUILTIN, LOW);
  delay(st);
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(st);
  digitalWrite(LED_BUILTIN, LOW);
  delay();
    
}

