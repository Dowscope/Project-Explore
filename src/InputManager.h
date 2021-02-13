/**
 * Project Explore
 * Inputmanager Class
 * File:            InputManager.h
 * Date:            Feb 9 2021
 */

#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H

#include <SDL2/SDL.h>

class InputManager
{
private:
public:
    InputManager();
    ~InputManager();
    bool eventHandler();
};

InputManager::InputManager()
{
}

InputManager::~InputManager()
{
}

bool InputManager::eventHandler()
{
    SDL_Event e;
    while(SDL_PollEvent(&e))
    {
        if(e.type == SDL_QUIT)
        {
            return false;
        }
    }

    return true;
}

#endif