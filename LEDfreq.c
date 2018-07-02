#define analogInPin A0
#define KeyPin 12
int flag=0;
int i=0;
int sensorValue = 0;
void setup() {
 Serial.begin(9600); //Serial 傳輸速度
 pinMode(KeyPin, INPUT);
 for(i=2;i<10;i++){
 pinMode (i, OUTPUT);
 }
}
void loop() {
 sensorValue = analogRead(analogInPin);
 Serial.println(flag);
 if(digitalRead(KeyPin)==1){
 if(flag==0)
 flag=1;
 else
 flag=0;
 }
 while(digitalRead(KeyPin)==1){
 ;
 }
 if(flag==1){ 
 for(i=2;i<10;i++){
 digitalWrite(i, HIGH);
 }
 delay( sensorValue);
 for(i=2;i<10;i++){
 digitalWrite(i, LOW);
 }
 delay(sensorValue);
 }
 else if(flag==0){
 for(i=2;i<10;i++){
 digitalWrite(i, LOW);
 }
 delay(200);
 }
} 