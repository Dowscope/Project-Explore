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

int InputManager::eventHandler(Player* player)
{
    SDL_Event e;
    while(SDL_PollEvent(&e))
    {
        if(e.type == SDL_QUIT)
        {
            return -1;
        }
        else if (e.type == SDL_KEYDOWN)
        {
            if (e.key.keysym.sym == SDLK_s)
            {
                player->y += 1;
            }
        }
    }

    return 0;
}