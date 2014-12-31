#ifndef __SudokuSolver__TripleHolder__
#define __SudokuSolver__TripleHolder__
#include "Cell.h"
class TripleHolder {
public:
    TripleHolder() = delete;
    TripleHolder(Cell& c1, Cell& c2, Cell& c3);
    Cell& getC1() const;
    Cell& getC2() const;
    Cell& getC3() const;
protected:
    Cell& _c1;
    Cell& _c2;
    Cell& _c3;
};

#endif /* defined(__SudokuSolver__TripleHolder__) */
