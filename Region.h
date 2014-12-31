//
//  Region.h
//  SudokuSolver
//
//  Created by Yolaine Rilhac on 31/12/2014.
//
//

#ifndef __SudokuSolver__Region__
#define __SudokuSolver__Region__
#include <string>
#include <regex>
#include <iostream>
#include "Cell.h"

using namespace std;
class Region {
public:
    Region() = delete;
    Region(string exp);
    void Print();
private:
    Cell _cells[9];
};

#endif /* defined(__SudokuSolver__Region__) */
