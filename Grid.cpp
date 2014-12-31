#include "Grid.h"

Grid::Grid(Region regions[9])
{
    cout << regions[0];
    for (int i = 0; i < 9; i++) {
        _regions[i] = regions[i];
    }
}

Grid::Grid(map<Position, Region> regions)
{
    if(regions.size() != 9) throw invalid_argument("Grille des régions incomplète.");
    for (int i = 0; i < 9; i++) {
        _regions[i] = regions[static_cast<Position>(i)];
    }
}

const Region& Grid::get(Position pos) const
{
    return _regions[pos];
}

RegionHolder Grid::getByHolder(Position pos)
{
    RegionHolder region(_regions[pos]);
    return region;
}
bool Grid::isFull() const
{
    for (int i = 0; i < 9; i++) {
        if(!_regions[i].isFull()) return false;
    }
    return true;
}
bool Grid::isEmpty() const
{
    for (int i = 0; i < 9; i++) {
        if(!_regions[i].isEmpty()) return false;
    }
    return true;
}

void Grid::print()
{

}