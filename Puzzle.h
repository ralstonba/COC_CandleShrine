/*
 * Puzzle object header
 * Brendan Ralston, 5/25/19
 */

 #ifndef Puzzle_h
 #define Puzzle_h

 #include "Arduino.h"

 class Puzzle
 {
  public:
    Puzzle(byte inputPin);
    Puzzle();
    bool isSolved();
    void isSolved(bool solved);
  private:
    byte _pin;
    bool _solved;
 };

 #endif
