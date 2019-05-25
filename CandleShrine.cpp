/*
   CandleShrine object source
   Brendan Ralston, 5/25/19
*/

#include "Arduino.h"
#include "CandleShrine.h"
#include "Candle.h"

CandleShrine::CandleShrine(byte candlePins[], byte inputPins[]) {
  _currentCandle = 0;

  for(int i = 0; i < 8; i++){
    _candles[i] = Candle(candlePins[i]);
    _puzzles[i] = Puzzle(inputPins[i]);
  }
}

void CandleShrine::lightNext() {
  if (_currentCandle <= 8) {
    _candles[++_currentCandle].on();
  }
}
