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
    void print();

    const Cell& get(Position pos) const;
    
    friend ostream& operator<< (ostream& stream, const Region& region);
private:
    Cell _cells[9];
};

#endif /* defined(__SudokuSolver__Region__) */
