
#include <ESP8266WiFi.h>

void setup() {
// put your setup code here, to run once:
pinMode(D0,INPUT);
pinMode(D1,OUTPUT);
}

void loop() {
// put your main code here, to run repeatedly:
int button=digitalRead(D0);
if(button==1){
digitalWrite(D1,LOW);
delay(100);
}
else{
digitalWrite(D1,HIGH);
delay(100);
}
}
