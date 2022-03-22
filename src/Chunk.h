/**
 * Project Explore
 * Chunk Class
 * File:            Chunk.h
 * Date:            Feb 12 2021
 */

#ifndef CHUNK_H
#define CHUNK_H

#include "includes.h"
#include "Tile.h"

class Chunk
{
private:
    std::vector<Tile*> _tiles;
public:
    const int CHUNKSIZE = 16;
    int x, y;
    bool isCurrent = false;
    Chunk(int x, int y);
    ~Chunk();
    Tile* getTileAt(int x, int y);
};

#endif