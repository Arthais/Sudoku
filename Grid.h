#ifndef __SudokuSolver__Grid__
#define __SudokuSolver__Grid__
#include <map>
#include "Position.h"
#include "Region.h"

class Grid {
public:
    Grid() = default;
    Grid(Region regions[9]);
    Grid(map<Position, Region> regions);
    const Region& get(Position pos) const;
   
    void print();
private:
    Region _regions[9];
};

#endif /* defined(__SudokuSolver__Grid__) */
