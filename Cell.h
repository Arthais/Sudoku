#ifndef __SudokuSolver__Cell__
#define __SudokuSolver__Cell__
#include <stdexcept>
#include <iostream>

using namespace std;
class Cell {
public:
    Cell();
    Cell(uint8_t value);
    bool isEmpty(void) const;
    uint8_t getValue() const;
    
    Cell& operator=(uint8_t value);
    operator uint8_t() const;
    bool operator==(const Cell& c) const;
    bool operator==(uint8_t c) const;
    bool operator==(int c) const;
    friend ostream& operator<< (ostream& stream, const Cell& cell);
private:
    uint8_t _value;
};


#endif /* defined(__SudokuSolver__Cell__) */
