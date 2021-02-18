/**
 * Project Explore
 * Tile Class
 * File:            Tile.h
 * Date:            Feb 12 2021
 */

#ifndef TILE_H
#define TILE_H

#include <iostream>

class Tile
{
protected:
public:
    Tile(int x, int y);
    ~Tile();
    int x, y;
};

#endif