/*
 * CandleShrine object header
 * Brendan Ralston, 5/25/19
 */

 #ifndef CandleShrine_h
 #define CandleShrine_h

 #include "Arduino.h"
 #include "Candle.h"

 class CandleShrine
 {
  public:
    // This is gross imo
    CandleShrine(
      byte candle1Pin, 
      byte candle2Pin, 
      byte candle3Pin, 
      byte candle4Pin, 
      byte candle5Pin, 
      byte candle6Pin, 
      byte candle7Pin, 
      byte candle8Pin
      );
    void lightNext();
  private:
    Candle _candles[8];
    byte _currentCandle;
 }

 #endif
