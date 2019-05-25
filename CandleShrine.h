/*
   CandleShrine object header
   Brendan Ralston, 5/25/19
*/

#ifndef CandleShrine_h
#define CandleShrine_h

#include "Arduino.h"
#include "Candle.h"
#include "Puzzle.h"

class CandleShrine
{
  public:
    CandleShrine(
      byte candlePins[],
      byte inputPins[]
    );
    void lightNext();
    void update();
  private:
    Candle _candles[8];
    Puzzle _puzzles[8];
    byte _currentCandle;
};

#endif
