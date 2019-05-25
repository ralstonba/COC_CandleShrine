/*
   CandleShrine object source
   Brendan Ralston, 5/25/19
*/

#include "Arduino.h"
#include "CandleShrine.h"
#include "Candle.h"

class CandleShrine
{
  public:
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
    Candle _candles[];
    byte _currentCandle;
}

CandleShrine::CandleShrine(
  byte candle1Pin,
  byte candle2Pin,
  byte candle3Pin,
  byte candle4Pin,
  byte candle5Pin,
  byte candle6Pin,
  byte candle7Pin,
  byte candle8Pin
) {
  _candles[8] = {
    Candle(candle1Pin),
    Candle(candle2Pin),
    Candle(candle3Pin),
    Candle(candle4Pin),
    Candle(candle5Pin),
    Candle(candle6Pin),
    Candle(candle7Pin),
    Candle(candle8Pin)
  }
  _currentCandle = 0;
}

CandleShrine::lightNext(){
  if(_currentCandle <= 8){
    _candles[++_currentCandle].on();
  }
}
