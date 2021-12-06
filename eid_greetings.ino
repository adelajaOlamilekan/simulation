#include<LiquidCrystal.h>

int redLed = 4;
int blueLed = 5;
int greenLed = 6;

int registerState = 7;
int enableIO = 8;
int data4 = 9;
int data5 = 10;
int data6 = 11;
int data7 = 12;


LiquidCrystal lcd(registerState, enableIO, data4, data5, data6, data7);

void setup() {
  // put your setup code here, to run once:
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  digitalWrite(buzzer, LOW);
  lcd.begin(16,2);
}

void displayLight()
{
  int delayTime = 500;
  
  digitalWrite(redLed, HIGH);
  digitalWrite(blueLed, LOW);
  digitalWrite(greenLed, LOW);
  delay(delayTime);

  digitalWrite(redLed, LOW);
  digitalWrite(blueLed, HIGH);
  digitalWrite(greenLed, LOW);
  delay(delayTime);

  digitalWrite(redLed, LOW);
  digitalWrite(blueLed, LOW);
  digitalWrite(greenLed, HIGH);
  delay(delayTime);

}


void loop() {
  lcd.print("HAPPY EID");
  lcd.setCursor(0,1);
  lcd.print("TOHIR");
  displayLight();
  lcd.clear();  
}
