/**
 * Project Explore
 * World Class
 * File:            World.h
 * Date:            Feb 13 2021
 */

#ifndef WORLD_H
#define WORLD_H

#include <vector>
#include <cmath>
#include "Chunk.h"

class World
{
private:
    std::vector<Chunk*> _chunks;
public:
    World();
    ~World();
    Chunk* GetChunkAt(int x, int y);
};

#endif