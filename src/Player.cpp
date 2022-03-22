/**
 * Project Explore
 * Player Class
 * File:            Player.cpp
 * Date:            Mar 21 2022
 */

#include "Player.h"


Player::Player(const int aX, const int aY)
    :x(aX), y(aY)
{
    std::cout << "Player is being injected...";
    std::cout << "OK" << std::endl;
}

Player::~Player()
{
    std::cout << "Player is being removed...";
    std::cout << "OK" << std::endl;
}