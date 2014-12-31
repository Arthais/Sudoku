#include "RegionHolder.h"

RegionHolder::RegionHolder(Region& region) :
    _region(region)
{
    
}

Cell& RegionHolder::get(Position pos)
{
    return _region.get(pos);
}

Cell& RegionHolder::getNO() { return _region.get(NO); }
Cell& RegionHolder::getN() { return _region.get(N); }
Cell& RegionHolder::getNE() { return _region.get(NE); }
Cell& RegionHolder::getO() { return _region.get(O); }
Cell& RegionHolder::getC() { return _region.get(C); }
Cell& RegionHolder::getE() { return _region.get(E); }
Cell& RegionHolder::getSO() { return _region.get(SO); }
Cell& RegionHolder::getS() { return _region.get(S); }
Cell& RegionHolder::getSE() { return _region.get(SE); }

RowHolder RegionHolder::TopRow() {
    RowHolder row(getNO(), getN(), getNE());
    return row;
}

RowHolder RegionHolder::MiddleRow() {
    RowHolder row(getO(), getC(), getE());
    return row;
}

RowHolder RegionHolder::BottomRow() {
    RowHolder row(getSO(), getS(), getSE());
    return row;
}

ColumnHolder RegionHolder::LeftColumn() {
    ColumnHolder col(getNO(), getO(), getSO());
    return col;
}

ColumnHolder RegionHolder::MiddleColumn() {
    ColumnHolder col(getN(), getC(), getS());
    return col;
}

ColumnHolder RegionHolder::RightColumn() {
    ColumnHolder col(getNE(), getE(), getSE());
    return col;
}