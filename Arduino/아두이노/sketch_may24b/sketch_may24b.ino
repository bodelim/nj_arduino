void setup() {
  // put your setup code here, to run once:
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  
  
  
}

void loop() {
  Serial.begin(9600);
  Serial.print(digitalRead(5));
  Serial.print("\n");
  delay(100);
  if(digitalRead(5) == 1){
   digitalWrite(13, HIGH); 
  delay(100);  
  digitalWrite(12, HIGH);           
  digitalWrite(13, LOW);  
  delay(100);
  digitalWrite(11, HIGH); 
  digitalWrite(12, LOW);
  delay(100);
  digitalWrite(10, HIGH); 
  digitalWrite(11, LOW);
  delay(100);
  digitalWrite(9, HIGH); 
  digitalWrite(10, LOW);
  delay(100);
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW);
  delay(100);
  digitalWrite(7, HIGH); 
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(6, HIGH); 
  digitalWrite(7, LOW);
  delay(100);
  digitalWrite(5, HIGH); 
  digitalWrite(6, LOW);
  delay(100);
  digitalWrite(4, HIGH); 
  digitalWrite(5, LOW);
  delay(100);
  digitalWrite(3, HIGH); 
  digitalWrite(4, LOW);
  delay(100);
  }
}
