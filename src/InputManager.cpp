/**
 * Project Explore
 * Inputmanager Class
 * File:            InputManager.cpp
 * Date:            Feb 12 2021
 */

#include "InputManager.h"

InputManager::InputManager()
{
    std::cout << "InputManager is starting.....";
    std::cout << "OK" << std::endl;
}

InputManager::~InputManager()
{
    std::cout << "InputManager is shutting down.....";
    std::cout << "OK" << std::endl;
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