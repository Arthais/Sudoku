#include "TripleHolder.h"
TripleHolder::TripleHolder(Cell& c1, Cell& c2, Cell& c3) :
    _c1(c1),
    _c2(c2),
    _c3(c3)
{
    
}

Cell& TripleHolder::getC1() const
{
    return _c1;
}

Cell& TripleHolder::getC2() const
{
    return _c2;
}

Cell& TripleHolder::getC3() const
{
    return _c3;
}
