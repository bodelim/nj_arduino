#define TRIG 9 //TRIG 핀 설정 (초음파 보내는 핀)
#define ECHO 8 //ECHO 핀 설정 (초음파 받는 핀)
#include <LiquidCrystal_I2C.h>     //LiquidCrystal 라이브러리 추가 
LiquidCrystal_I2C lcd(0x27, 16, 2);  //lcd 객체 선언
 
void setup()
{
  lcd.begin(); //LCD 사용 시작


  Serial.begin(9600); 

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

}

void loop()

{
  long duration, distance;

  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  duration = pulseIn (ECHO, HIGH);
  distance = duration * 17 / 1000;

  Serial.println(duration );
  Serial.print("\nDIstance : ");
  Serial.print(distance);
  Serial.println(" Cm");
  lcd.setCursor(0, 0); 
  String disStr(distance);
  lcd.print("distance: " + disStr+"cm"); 
  delay(10); 

}
