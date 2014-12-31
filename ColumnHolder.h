#ifndef __SudokuSolver__ColumnHolder__
#define __SudokuSolver__ColumnHolder__

#include "TripleHolder.h"

class ColumnHolder : public TripleHolder {
public:
    ColumnHolder() = delete;
    ColumnHolder(Cell& T, Cell& C, Cell& B);
    Cell& T() const;
    Cell& getTop() const;
    Cell& C() const;
    Cell& getCenter() const;
    Cell& B() const;
    Cell& getBottom() const;
};

#endif /* defined(__SudokuSolver__ColumnHolder__) */
