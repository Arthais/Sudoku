#include "Region.h"

Region::Region(string exp)
{
    clog << "Taille de l'expression: " << exp.length() << endl;

    if(exp.length() != 9) throw invalid_argument("Expression de région incomplète.");
    
    regex reg("([0-9]|-)+");
    if(!regex_match(exp, reg)) throw invalid_argument("Caractère incorrect dans l'expression de région.");
    
    for (int i = 0; i < 9; i++) {
        uint8_t v = (int)exp[i] - '0';
        try
        {
            clog << "i: " << static_cast<int>(v) << " | " << boolalpha << !(exp[i] == '-') << endl;
            _cells[i] = (exp[i] == '-' ? Cell() : Cell(v));
        } catch(const exception& e) {
            throw;
        }

    }
}

const Cell& Region::get(Position pos) const
{
    return _cells[pos];
}


ostream& operator<< (ostream& stream, const Region& region)
{
    stream << region._cells[0] << "|" << region._cells[1] << "|" << region._cells[2] << endl;
    stream << region._cells[3] << "|" << region._cells[4] << "|" << region._cells[5] << endl;
    stream << region._cells[6] << "|" << region._cells[7] << "|" << region._cells[8];
    return stream;
};
void Region::print()
{
    cout << *this << endl;
}