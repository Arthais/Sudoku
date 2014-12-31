#ifndef __SudokuSolver__Grid__
#define __SudokuSolver__Grid__
#include <map>
#include "Position.h"
#include "Region.h"
#include "RegionHolder.h"
class Grid {
public:
    Grid() = default;
    Grid(Region regions[9]);
    Grid(map<Position, Region> regions);
    
    bool isFull() const;
    bool isEmpty() const;
    
    const Region& get(Position pos) const;
    RegionHolder getByHolder(Position pos);
    void print();
private:
    Region _regions[9];
};

#endif /* defined(__SudokuSolver__Grid__) */
