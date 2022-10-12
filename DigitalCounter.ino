int led1 = 10;
int led2 = 11;
int led3 = 12;
int led4 = 13;
void setup() {
  int i = 0;
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  while (i <= 15) {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  LedCounter(i);
  delay(1000);
  
  i++;

  }
  

}
void loop() {
  
}

void LedCounter(int n) {
 if (n==0) return;
if (n>15) {
  Serial.println("Number is too big!"); 
}
else if (n-8 >= 0) {
  digitalWrite(led4, HIGH);
  LedCounter(n-8);
}
else if (n-4 >= 0) {
  digitalWrite(led3, HIGH);
  LedCounter(n-4);
}
else if (n-2 >= 0) {
  digitalWrite(led2, HIGH);
  LedCounter(n-2);
}
else if (n-1 >= 0) {
  digitalWrite(led1, HIGH);
  LedCounter(n-1); //not necessary, here for consistency
}



}
