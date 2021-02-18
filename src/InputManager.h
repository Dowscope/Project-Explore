/**
 * Project Explore
 * Inputmanager Class
 * File:            InputManager.h
 * Date:            Feb 12 2021
 */

#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H

#include <SDL2/SDL.h>
#include <iostream>

class InputManager
{
private:
public:
    InputManager();
    ~InputManager();
    bool eventHandler();
};

#endif