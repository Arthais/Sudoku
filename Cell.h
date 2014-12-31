
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
    friend ostream& operator<< (ostream& stream, const Cell& cell) {
        stream << (cell.isEmpty() ? -1 : cell._value);
        return stream;
    };
private:
    uint8_t _value;
};

#endif /* defined(__SudokuSolver__Cell__) */
