/**
 * Project Explore
 * Inputmanager Class
 * File:            InputManager.h
 * Date:            Feb 12 2021
 */

#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H

#include "includes.h"
#include "Player.h"

class InputManager
{
private:
public:
    InputManager();
    ~InputManager();
    int eventHandler(Player* player);
};

#endif