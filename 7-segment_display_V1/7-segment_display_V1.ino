int a = 7;
int b = 8;
int c = 9;
int d = 10;
int e = 11;
int f = 12;
int g = 13;
void setup()
{
Serial.begin(9600);
for(int i = 7; i <= 13; i++){
pinMode(i, OUTPUT);
}
for(int i=2; i<=5; i++){
pinMode(i, INPUT_PULLUP);
}
}
void loop()
{
int val0 = digitalRead(2);
int val1 = digitalRead(3);
int val2 = digitalRead(4);
int val3 = digitalRead(5);
if(val0 == 1 && val1 == 1 && val2 == 1 && val3 == 1){
clear();
number0();
}else if(val0 == 0 && val1 == 1 && val2 == 1 && val3 == 1){
clear();
number1();
}else if(val0 == 1 && val1 == 0 && val2 == 1 && val3 == 1){
clear();
number2();
}else if(val0 == 0 && val1 == 0 && val2 == 1 && val3 == 1){
clear();
number3();
}else if(val0 == 1 && val1 == 1 && val2 == 0 && val3 == 1){
clear();
number4();
}else if(val0 == 0 && val1 == 1 && val2 == 0 && val3 == 1){
clear();
number5();
}else if(val0 == 1 && val1 == 0 && val2 == 0 && val3 == 1){
clear();
number6();
}else if(val0 == 0 && val1 == 0 && val2 == 0 && val3 == 1){
clear();
number7();
}else if(val0 == 1 && val1 == 1 && val2 == 1 && val3 == 0){
clear();
number8();
}else if(val0 == 0 && val1 == 1 && val2 == 1 && val3 == 0){
clear();
number9();
}else{
clear();
Serial.println("Not in range");
}
delay(1000);
}
void clear(){
digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, HIGH);
digitalWrite(e, HIGH);
digitalWrite(f, HIGH);
digitalWrite(g, HIGH);
Serial.println("clear");
}
void number0(){
digitalWrite(a, LOW);
digitalWrite(b, LOW);
digitalWrite(c, LOW);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, HIGH);
Serial.println("0");
}
void number1(){
digitalWrite(b, LOW);
digitalWrite(c, LOW);
Serial.println("1");
}
void number2(){
digitalWrite(a, LOW);
digitalWrite(b, LOW);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(g, LOW);
Serial.println("2");
}
void number3(){
digitalWrite(a, LOW);
digitalWrite(b, LOW);
digitalWrite(c, LOW);
digitalWrite(d, LOW);
digitalWrite(g, LOW);
Serial.println("3");
}
void number4(){
digitalWrite(b, LOW);
digitalWrite(c, LOW);
digitalWrite(g, LOW);
digitalWrite(f, LOW);
Serial.println("4");
}
void number5(){
digitalWrite(a, LOW);
digitalWrite(c, LOW);
digitalWrite(d, LOW);
digitalWrite(g, LOW);
digitalWrite(f, LOW);
Serial.println("5");
}
void number6(){
digitalWrite(a, LOW);
digitalWrite(c, LOW);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, LOW);
Serial.println("6");
}
void number7(){
digitalWrite(a, LOW);
digitalWrite(b, LOW);
digitalWrite(c, LOW);
Serial.println("7");
}
void number8(){
digitalWrite(a, LOW);
digitalWrite(b, LOW);
digitalWrite(c, LOW);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, LOW);
Serial.println("8");
}
void number9(){
digitalWrite(a, LOW);
digitalWrite(b, LOW);
digitalWrite(c, LOW);
digitalWrite(d, LOW);
digitalWrite(f, LOW);
digitalWrite(g, LOW);
Serial.println("9");
}
