#include <Arduino.h>
#define LED1 D2
int motorPin1 = D2; 
#define LED2 D5
int motorPin2 = D5;  
#define LED3 D6
int motorPin3 = D6;
#define LED4 D7
int motorPin4 = D7;
#define LED5 D8
int motorPin5 = D8;

void setup(){
    pinMode(motorPin1, OUTPUT);
    pinMode(LED1, OUTPUT); 
    pinMode(motorPin2, OUTPUT);
    pinMode(LED2, OUTPUT); 
    pinMode(motorPin3, OUTPUT);
    pinMode(LED3, OUTPUT); 
    pinMode(motorPin4, OUTPUT);
    pinMode(LED4, OUTPUT); 
    pinMode(motorPin5, OUTPUT);
    pinMode(LED5, OUTPUT); 
}
void loop() {

    digitalWrite(motorPin1,HIGH);
    digitalWrite(motorPin2,HIGH);
    digitalWrite(motorPin3,HIGH);
    digitalWrite(motorPin4,HIGH);
    digitalWrite(motorPin5,HIGH);
    delay(1000);
    digitalWrite(motorPin1,LOW);
    digitalWrite(motorPin2,LOW);
    digitalWrite(motorPin3,LOW);
    digitalWrite(motorPin4,LOW);
    digitalWrite(motorPin5,LOW);
    delay(1000);
    
    }
    