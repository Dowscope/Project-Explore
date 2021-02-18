/**
 * Project Explore
 * Chunk Class
 * File:            Chunk.cpp
 * Date:            Feb 12 2021
 */

#include "Chunk.h"

Chunk::Chunk(int x, int y):
    x(x), y(y)
{
    for (int j = 0; j < CHUNKSIZE; j++)
    {
        for (int i = 0; i < CHUNKSIZE; i++)
        {
            _tiles.push_back(new Tile(i, j));
        }
        
    }
    
}

Chunk::~Chunk()
{
}

Tile* Chunk::getTileAt(int x, int y)
{
    for (int i = 0; i < _tiles.size(); i++)
    {
        Tile t = *_tiles[i];
        if (t.x == x && t.y == y)
        {
            return _tiles[i];
        }
    }
}