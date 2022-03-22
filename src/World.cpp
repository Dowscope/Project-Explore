/**
 * Project Explore
 * World Class
 * File:            World.cpp
 * Date:            Feb 12 2021
 */

#include "World.h"

World::World()
{
    std::cout << "World is starting.....";
    _chunks.push_back(new Chunk(0,0));
    std::cout << "OK" << std::endl;
}

World::~World()
{
    std::cout << "World is shutdown.....";
    std::cout << "OK" << std::endl;
}

Chunk* World::GetChunkAt(int x, int y)
{
    for (int i = 0; i < _chunks.size(); i++)
    {
        Chunk c = *_chunks[i];
        if(std::floor(x / c.CHUNKSIZE) == c.x && std::floor(y / c.CHUNKSIZE) == c.y)
        {
            return _chunks[i];
        }
    }
    return nullptr;
}