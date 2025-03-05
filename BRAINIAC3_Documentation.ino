#include <CTBOT.h>

void setup() {
  CTBOT(); //initialize the Robot

}

void led_display(){
  LED1 (ON,200);
  LED1 (OFF,200);
  LED2 (ON,200);
  LED2 (OFF,200);
  LED3 (ON,200);
  LED3 (OFF,200);

  LEDON();
  delay(200);
  LEDOFF();
  delay(200);
}

void buzzer_display(){
  BUZZER(C_5,500);
  BUZZER(D_5,500);
  BUZZER(E_5,500);
}

void screen_display(){
  CTLED(5, 4, "SBHS");
}

void movement(){
  FORWARD(50,50,1000);
  BACKWARD(50,50,1000);
  LEFTTURN(60,1000);
  RIGHTTURN(60,1000);
  LEFTSPIN(60,1000);
  RIGHTSPIN(60,1000);
  MOTORSTOP();
}

void tracing(){
  LTRACEB(55);
  LTRACEW(45);
}

void crossing(){
  CROSS(0,55,500,0); //forward
}

void loop() {

}
  //sensor testing check if it can detect (delete // on CALIBRATE();)
  //CALIBRATE(); 
  // > 50 light
  // < 50 dark

  //LED
  //LED1(ON)|LED1(HIGH)|LED1(1);
  //with delay LED1(ON,300)|LED1(HIGH,300)|LED1(1,300);

  //LED1(OFF)|LED1(LOW)|LED1(0);
  //LED1(OFF,300)|LED1(LOW,300)|LED1(0,300);

  //LEDON(); and LEDOFF(); for all LEDs  at the same time

  //BUZZER
  //BUZZER(tone,duration);

  //OLED display
  //CTLED(Column, Row, "text");
  //ROWS 0 - 7
  //COLUMN 0 - NA
  //CLS();

  //run button
  //SW_OK();

  //MOTOR
  //FORWARD(LeftSpeed, RightSpeed, Duration);
  //BACKWARD(LeftSpeed, RightSpeed, Duration);
  //LEFTTURN(MotorSpeed, Duration);
  //RIGHTTURN(MotorSpeed, Duration);
  //LEFTSPIN(MotorSpeed, Duration);
  //RIGHTSPIN(MotorSpeed, Duration);

  //LINE TRACKING
  //LTRACEB(value);
  //LTRACEW(value);

  //CROSSING
  //CROSS(Direction, Speed, forward delay, spin delay);
  //0 = Forward
  //1 = Left
  //2 = Right}


//PINOUT DIARGRAM
//D1 =
//D2 = 
//D3 = Right B+
//D4 = 
//D5 = Right A-
//D6 = Left A-
//D7 = LED1
//D8 = LED2
//D9 = Servo
//D10 = 
//D11 = Left B+
//D12 = BUZZER
//D13 = LED3
//A0 = right tracking
//A1 = Left tracking
//A2 = 
//A3 = GEN INPUT PIN
//A4 = I2C (if bluetooth on)
//A5 = I2C (if bluetooth on)
//SW_OK = switch button 
//RESET = Reset button
