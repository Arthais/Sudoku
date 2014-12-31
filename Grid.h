//
//  Grid.h
//  SudokuSolver
//
//  Created by Yolaine Rilhac on 31/12/2014.
//
//

#ifndef __SudokuSolver__Grid__
#define __SudokuSolver__Grid__
#include "Region.h"

class Grid {
public:
    Grid();
private:
    Region _regions[9];
};

#endif /* defined(__SudokuSolver__Grid__) */
