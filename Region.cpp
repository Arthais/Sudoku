//
//  Region.cpp
//  SudokuSolver
//
//  Created by Yolaine Rilhac on 31/12/2014.
//
//

#include "Region.h"

Region::Region(string exp)
{
    clog << "Taille de l'expression: " << exp.length() << endl;

    if(exp.length() != 9) throw invalid_argument("Expression de région incomplète.");
    
    regex reg("([0-9]|-)+");
    if(!regex_match(exp, reg)) throw invalid_argument("Caractère incorrect dans l'expression de région.");
    
    for (int i = 0; i < 9; i++) {
        uint8_t v = static_cast<uint8_t>(exp[i]);
        cout << i << ": " << (uint8_t)v << endl;
        _cells[i] = Cell(v);
    }
}

void Region::Print()
{
    cout << _cells[0] << "|" << _cells[1] << "|" << _cells[2] << endl;
    cout << _cells[3] << "|" << _cells[4] << "|" << _cells[5] << endl;
    cout << _cells[6] << "|" << _cells[7] << "|" << _cells[8] << endl;
}