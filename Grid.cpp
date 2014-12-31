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

void Grid::print()
{

}