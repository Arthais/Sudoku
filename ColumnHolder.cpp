#include "ColumnHolder.h"

ColumnHolder::ColumnHolder(Cell& T, Cell& C, Cell& B) :
TripleHolder(T, C, B)
{
    
}

Cell& ColumnHolder::T() const
{
    return getTop();
}
Cell& ColumnHolder::getTop() const
{
    return _c1;
}

Cell& ColumnHolder::C() const
{
    return getCenter();
}
Cell& ColumnHolder::getCenter() const
{
    return _c2;
}

Cell& ColumnHolder::B() const
{
    return getBottom();
}
Cell& ColumnHolder::getBottom() const
{
    return _c3;
}