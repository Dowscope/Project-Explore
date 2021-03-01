/**
 * Project Explore
 * Tile Class
 * File:            Tile.cpp
 * Date:            Feb 12 2021
 */

#include "Tile.h"

Tile::Tile(int x, int y) :
    x(x), y(y)
{
    tileColor.r = rand() % 255;
    tileColor.g = rand() % 255;
    tileColor.b = rand() % 255;
    tileColor.a = 255;
}

Tile::~Tile()
{
}