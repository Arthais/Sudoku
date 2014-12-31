#include "Cell.h"

Cell::Cell() : _value(-1)
{
    
}

Cell::Cell(uint8_t value) : _value(value)
{
    if(value > 9 || value < 0)
    {
        std::cerr << "La valeur entrée est : " << static_cast<int>(value) << std::endl;
        throw std::invalid_argument("La valeur doit être comprise entre 0 et 9.");
    }
}
uint8_t Cell::getValue() const
{
    return _value;
}
bool Cell::isEmpty() const
{
    if(_value == (uint8_t)-1)
    {
        return true;
    }
    return false;
}


Cell& Cell::operator=(uint8_t value)
{
    _value = value;
    return *this;
}

Cell::operator uint8_t() const
{
    return _value;
}

bool Cell::operator==(uint8_t value) const
{
    return (_value == value);
}

//bool Cell::operator==(int value) const
//{
//    return (_value == value);
//}

bool Cell::operator==(const Cell& c) const
{
    return (_value == c.getValue());
}

ostream& operator<< (ostream& stream, const Cell& cell)
{
    if(cell.isEmpty())
    {
        stream << '-';
    }
    else
    {
        stream << static_cast<int>(cell._value);
    }
    return stream;
}

