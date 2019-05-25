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
    // Illuminate current candle then increment
    _candles[_currentCandle++].on();
  }
}

void CandleShrine::update(){
  // Iterate over all of the puzzles and check if they are solved
  for(int i = 0; i < 8; i++){
    Puzzle thisPuzzle = _puzzles[i];
    // Only query unsolved puzzles
    if(!thisPuzzle.isSolved()){
      if(digitalRead(thisPuzzle.getPin())){
        // The puzzle was not previously solved but is now
        thisPuzzle.isSolved(true);
        lightNext();
      }
    }
  }
}
