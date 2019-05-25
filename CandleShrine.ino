/*Candles Shrine
 13 Candles total
 Based on 8 outputs:
     PIN53 -- IN1 -- CON1 -- CAN1
     PIN51 -- IN2 -- CON2 -- CAN2
     PIN49 -- IN3 -- CON3 -- CAN3
     PIN47 -- IN4 -- CON4 -- CAN4/CAN5
     PIN45 -- IN5 -- CON5 -- CAN6/CAN7
     PIN43 -- IN6 -- CON6 -- CAN8/CAN9
     PIN41 -- IN7 -- CON7 -- CAN10/CAN11
     PIN39 -- IN8 -- CON8 -- CAN12/CAN13

     !!!GROUNDING THE 'INX' PIN (digitalWrite(X, LOW)) IS WHAT TURNS ON THAT PIN USING THE RELAYS!!!
*/ 

#include "CandleShrine.h"

byte candlePins[] = {53, 51, 49, 47, 45, 43, 41, 39};
byte inputPins[] = {1, 2, 3, 4, 5, 6, 7, 8};
CandleShrine candleShrine(candlePins, inputPins);

void setup() {
}

// the loop function runs over and over again forever
void loop() {    
  candleShrine.update();
}
