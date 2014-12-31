#ifndef __SudokuSolver__Region__
#define __SudokuSolver__Region__
#include <string>
#include <regex>
#include <iostream>
#include "Cell.h"
#include "Position.h"
using namespace std;

class Region {
public:
    Region() = default;
    Region(string exp);
//    const Cell& get(Position pos) const;
    Cell& get(Position pos);
    bool isFull() const;
    bool isEmpty() const;
    void print();
    friend ostream& operator<< (ostream& stream, const Region& region);
private:
    Cell _cells[9];
};

#endif /* defined(__SudokuSolver__Region__) */
