#ifndef __SudokuSolver__RowHolder__
#define __SudokuSolver__RowHolder__

#include "TripleHolder.h"

class RowHolder : public TripleHolder {
public:
    RowHolder() = delete;
    RowHolder(Cell& L, Cell& C, Cell& R);
    
    Cell& L() const;
    Cell& getLeft() const;
    Cell& C() const;
    Cell& getCenter() const;
    Cell& R() const;
    Cell& getRight() const;
};

#endif /* defined(__SudokuSolver__RowHolder__) */
