byte btn_1,btn_2,btn_3,btn_4;

void setup() {

  Serial.begin(9600);
    
  for(byte k=2;k<=5;k++) {
    pinMode(k,INPUT);
  }
  for(byte i=6;i<=13;i++) {
    pinMode(i, OUTPUT);
  }

}

void loop() {
  btn_1 = digitalRead(2);
  btn_2 = digitalRead(3);
  btn_3 = digitalRead(4);
  
  if(btn_1==HIGH){
      for(byte i=6;i<=14;i++){
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i-1, LOW);
      }
  }

  if(btn_2==HIGH){
    Serial.println("버튼2 눌림");
    Serial.println("btn_2: " + (String)btn_2);
    for(byte t=0;t<5;t++){ // 다섯 번 반복
      for(byte j=6;j<=14;j++){
        digitalWrite(j, HIGH);
      } // 다 킴
     delay(100);
      for(byte a=6;a<=14;a++){
        digitalWrite(a, LOW);
      } // 다 끔
     delay(100);
    }
  }

  if(b/*}

    
   
   
