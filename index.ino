int led1=4;
int led2=5;
int led3=6;
int led4=7;
int ldrpin=A0;
int deger=0;
void setup() {
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
}
void loop() {
 deger=analogRead(ldrpin);
 if(deger>=0&&deger<=255)
 {
 digitalWrite(led1,HIGH);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,HIGH);
 }
 else if(deger>=256&&deger<=511)
 {
 digitalWrite(led1,HIGH);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,LOW);
 }
 else if(deger>=512&&deger<=767)
 {
 digitalWrite(led1,HIGH);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);
 }
 else if(deger>=768&&deger<=1023)
 {
 digitalWrite(led1,HIGH);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);
 }
delay(200);
}
