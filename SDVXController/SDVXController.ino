#define HID_CUSTOM_LAYOUT
#define LAYOUT_JAPANESE

#include <HID-Project.h>
#include <MsTimer2.h> //タイマーライブラリの読み込み
#include <Encoder.h>
#define KEY0 0
#define KEY1 2
#define KEY2 3
#define KEY3 4
#define KEY4 5
#define KEY5 6
#define KEY6 7


 char keys[11] = {'d', 'f', 'j', 'k','c','m' ,'r','e','o','i',0x0A};
 unsigned long elapsed = 0; 
  Encoder myEncL(8, 9); //ロータリーエンコーダ信号に使うピンを9,10に設定
  Encoder myEncR(11, 12); //ロータリーエンコーダ信号に使うピンを9,10に設定
  volatile long oldPositionL  = -999; //割り込み処理で使う変数はvolatileにすると安心
  volatile long newPositionL  = 0;
  volatile long oldPositionR  = -999; //割り込み処理で使う変数はvolatileにすると安心
  volatile long newPositionR  = 0;

 #define Dark 300

 int Button0,Button1,Button2,Button3,Button4,Button5,Button6;

 unsigned long timeL=0,timeR=0;

 int flagL,flagR;

 void RotEnc() {
  newPositionR = myEncR.read();
  newPositionL = myEncL.read();
  }
 
void setup() {
  NKROKeyboard.begin();
  pinMode(KEY0,INPUT_PULLUP);  
  pinMode(KEY1,INPUT_PULLUP);
  pinMode(KEY2,INPUT_PULLUP);
  pinMode(KEY3,INPUT_PULLUP);
  pinMode(KEY4,INPUT_PULLUP);
  pinMode(KEY5,INPUT_PULLUP);
  pinMode(KEY6,INPUT_PULLUP);

  //Serial.begin(115200);
  MsTimer2::set(1, RotEnc); //1ms(ミリ秒)で設定
  MsTimer2::start();
  
  elapsed = micros();
}

void loop() {
//overflow
   unsigned long now = micros();
  if (now < elapsed) { 
    elapsed = now;
    return;
  }
  long tdif = now - elapsed;
  elapsed = now;

  Button0=digitalRead(KEY0);  
  Button1=digitalRead(KEY1);
  Button2=digitalRead(KEY2);
  Button3=digitalRead(KEY3);
  Button4=digitalRead(KEY4);
  Button5=digitalRead(KEY5);
  Button6=digitalRead(KEY6);
  
//key
    if (Button0==LOW) {
      NKROKeyboard.add(keys[10]);
    } else {
      NKROKeyboard.remove(keys[10]);
    }
    if (Button1==LOW) {
      NKROKeyboard.add(keys[0]);
    } else {
      NKROKeyboard.remove(keys[0]);
    }
    if (Button2==LOW) {
      NKROKeyboard.add(keys[1]);
    } else {
      NKROKeyboard.remove(keys[1]);
    }
    if (Button3==LOW) {
      NKROKeyboard.add(keys[2]);
    } else {
      NKROKeyboard.remove(keys[2]);
    }
    if (Button4==LOW) {
      NKROKeyboard.add(keys[3]);
    } else{
      NKROKeyboard.remove(keys[3]);
    }
    if (Button5==LOW) {
      NKROKeyboard.add(keys[4]);
    } else{
      NKROKeyboard.remove(keys[4]);
    }
    if (Button6==LOW) {
      NKROKeyboard.add(keys[5]);
    } else{
      NKROKeyboard.remove(keys[5]);
    }
    //青つまみ
    if (newPositionL > oldPositionL) {
      oldPositionL = newPositionL;
      timeL = millis();
      NKROKeyboard.add(keys[6]);
    } else if((millis()-timeL >= 30)||(newPositionL < oldPositionL)){
      NKROKeyboard.remove(keys[6]);
    }
    if (newPositionL < oldPositionL) {
      oldPositionL = newPositionL;
      timeL = millis();
      NKROKeyboard.add(keys[7]);
    } else if((millis()-timeL >= 30)||(newPositionL > oldPositionL)){
      NKROKeyboard.remove(keys[7]);
    }

    //赤つまみ
    if (newPositionR > oldPositionR) {
      oldPositionR = newPositionR;
      timeR = millis();
      NKROKeyboard.add(keys[8]);
    } else if((millis()-timeR >= 30)||(newPositionR > oldPositionR)){
      NKROKeyboard.remove(keys[8]);
    }
    if (newPositionR < oldPositionR) {
      oldPositionR = newPositionR;
      timeR = millis();
      NKROKeyboard.add(keys[9]);
    } else if((millis()-timeR >= 30)||(newPositionR > oldPositionR)){
      NKROKeyboard.remove(keys[9]);
    }

   NKROKeyboard.send();
}
