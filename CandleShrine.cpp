/*
   CandleShrine object source
   Brendan Ralston, 5/25/19
*/

#include "Arduino.h"
#include "CandleShrine.h"
#include "Candle.h"

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
  _currentCandle = 0;
  Candle candles[] = {
    Candle(candle1Pin),
    Candle(candle2Pin),
    Candle(candle3Pin),
    Candle(candle4Pin),
    Candle(candle5Pin),
    Candle(candle6Pin),
    Candle(candle7Pin),
    Candle(candle8Pin)
  };
  memcpy(_candles, candles, 8);
}

void CandleShrine::lightNext() {
  if (_currentCandle <= 8) {
    _candles[++_currentCandle].on();
  }
}
