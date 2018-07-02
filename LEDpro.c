#define TRIGPIN 12
#define ECHOPIN 13
#define LED1 4
#define LED2 5
#define LED3 6
#define LED4 7
#define LED5 8
#define LED6 9

long ping() {
 digitalWrite(TRIGPIN, LOW);
 delayMicroseconds(2);
 digitalWrite(TRIGPIN, HIGH);
 delayMicroseconds(10);
 digitalWrite(TRIGPIN, LOW);
 return pulseIn(ECHOPIN, HIGH)/58;
}
void setup() {
 pinMode(TRIGPIN, OUTPUT);
 pinMode(ECHOPIN, INPUT);
 pinMode(LED1, OUTPUT);
 pinMode(LED2, OUTPUT);
 pinMode(LED3, OUTPUT);
 pinMode(LED4, OUTPUT);
 pinMode(LED5, OUTPUT);
 pinMode(LED6, OUTPUT);
 }

void loop() {
 long cm = ping();

 if (cm <= 100) 
 {
	

		if(cm <16) 
		{
		digitalWrite(LED1 , HIGH) ;
		digitalWrite(LED2 , LOW) ;
		digitalWrite(LED3 , LOW) ;
		digitalWrite(LED4 , LOW) ;
		digitalWrite(LED5 , LOW) ;
		digitalWrite(LED6 , LOW) ;
		}
		
		else if(cm<32) 
		{
		digitalWrite(LED1 , HIGH) ;
		digitalWrite(LED2 , HIGH) ;
		digitalWrite(LED3 , LOW) ;
		digitalWrite(LED4 , LOW) ;
		digitalWrite(LED5 , LOW) ;
		digitalWrite(LED6 , LOW) ;
		}
		
		else if(cm<48) 
		{
		digitalWrite(LED1 , HIGH) ;
		digitalWrite(LED2 , HIGH) ;
		digitalWrite(LED3 , HIGH) ;
		digitalWrite(LED4 , LOW) ;
		digitalWrite(LED5 , LOW) ;
		digitalWrite(LED6 , LOW) ;
		}
		
		else if(cm<64) 
		{
		digitalWrite(LED1 , HIGH) ;
		digitalWrite(LED2 , HIGH) ;
		digitalWrite(LED3 , HIGH) ;
		digitalWrite(LED4 , HIGH) ;
		digitalWrite(LED5 , LOW) ;
		digitalWrite(LED6 , LOW) ;
		}
		else if(cm<80) 
		{
		digitalWrite(LED1 , HIGH) ;
		digitalWrite(LED2 , HIGH) ;
		digitalWrite(LED3 , HIGH) ;
		digitalWrite(LED4 , HIGH) ;
		digitalWrite(LED5 , HIGH) ;
		digitalWrite(LED6 , LOW)  ;
		else if (cm<100 )
		{
		digitalWrite(LED1 , HIGH) ;
		digitalWrite(LED2 , HIGH) ;
		digitalWrite(LED3 , HIGH) ;
		digitalWrite(LED4 , HIGH) ;
		digitalWrite(LED5 , HIGH) ;
		digitalWrite(LED6 , HIGH) ;
		}
 }
 else
 {
	 	digitalWrite(LED1 , LOW) ;
		digitalWrite(LED2 , LOW) ;
		digitalWrite(LED3 , LOW) ;
		digitalWrite(LED4 , LOW) ;
		digitalWrite(LED5 , LOW) ;
		digitalWrite(LED6 , LOW) ;
 }
 delay(100);
} 