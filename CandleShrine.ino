/*Candles Shrine
 13 Candles total
 Based on 8 outputs:
     PIN53 -- IN1 -- CON1 -- CAN1
     PIN51 -- IN2 -- CON2 -- CAN2
     PIN49 -- IN3 -- CON3 -- CAN3
     PIN39 -- IN4 -- CON4 -- CAN4/CAN5
     PIN37 -- IN5 -- CON5 -- CAN6/CAN7
     PIN35 -- IN6 -- CON6 -- CAN8/CAN9
     PIN33 -- IN7 -- CON7 -- CAN10/CAN11
     PIN31 -- IN8 -- CON8 -- CAN12/CAN13

     !!!GROUNDING THE 'INX' PIN (digitalWrite(X, LOW)) IS WHAT TURNS ON THAT PIN USING THE RELAYS!!!
*/ 


void setup() {
 // initialize digital pin LED_BUILTIN as an output.
 pinMode(53, OUTPUT);
 pinMode(51, OUTPUT);
 pinMode(49, OUTPUT);
 pinMode(47, OUTPUT);
 pinMode(45, OUTPUT);
 pinMode(43, OUTPUT);
 pinMode(41, OUTPUT);
 pinMode(39, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
 //digitalWrite(53, HIGH);  
 //digitalWrite(51, HIGH);
 //digitalWrite(49, HIGH);
 //digitalWrite(47, HIGH);
 //digitalWrite(45, HIGH);
 //digitalWrite(43, HIGH);
 //digitalWrite(41, HIGH);
 //digitalWrite(39, HIGH); 
 delay(3000);                      
 digitalWrite(53, LOW);
 digitalWrite(51, LOW);
 digitalWrite(49, LOW);
 digitalWrite(47, LOW);
 digitalWrite(45, LOW);
 digitalWrite(43, LOW);
 digitalWrite(41, LOW);
 digitalWrite(39, LOW);    
 delay(3000);                       
}
