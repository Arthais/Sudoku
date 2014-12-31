#include "RowHolder.h"

RowHolder::RowHolder(Cell& L, Cell& C, Cell& R) :
    TripleHolder(L, C, R)
{
    
}

Cell& RowHolder::L() const
{
    return getLeft();
}
Cell& RowHolder::getLeft() const
{
    return _c1;
}

Cell& RowHolder::C() const
{
    return getCenter();
}
Cell& RowHolder::getCenter() const
{
    return _c2;
}

Cell& RowHolder::R() const
{
    return getRight();
}
Cell& RowHolder::getRight() const
{
    return _c3;
}