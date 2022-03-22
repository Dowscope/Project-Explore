/**
 * Project Explore
 * Player Class
 * File:            Player.cpp
 * Date:            Mar 21 2022
 */

#ifndef PLAYER_H
#define PLAYER_H

#include "includes.h"

class Player
{
private:
public:
    Player(const int aX, const int aY);
    ~Player();

public:
    int x, y;
};


#endif