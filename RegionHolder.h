#ifndef __SudokuSolver__RegionHolder__
#define __SudokuSolver__RegionHolder__
#include "Region.h"
#include "Cell.h"
#include "Position.h"
#include "RowHolder.h"
#include "ColumnHolder.h"
class RegionHolder {
public:
    RegionHolder() = delete;
    RegionHolder(Region& region);
    Cell& get(Position pos);
    Cell& getNO();
    Cell& getN();
    Cell& getNE();
    Cell& getO();
    Cell& getC();
    Cell& getE();
    Cell& getSO();
    Cell& getS();
    Cell& getSE();
    
    RowHolder TopRow();
    RowHolder MiddleRow();
    RowHolder BottomRow();
    ColumnHolder LeftColumn();
    ColumnHolder MiddleColumn();
    ColumnHolder RightColumn();
protected:
    Region& _region;
};

#endif /* defined(__SudokuSolver__RegionHolder__) */
