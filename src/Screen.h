/**
 * Project Explore
 * Screen Class
 * File:            Screen.h
 * Date:            Feb 9 2021
 */

#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <SDL2/SDL.h>

class Screen
{
private:
    int _width, _height;
    char* _gameTitle;
    SDL_Window * _mainWindow;
    bool _initialize();
public:
    Screen(int aWidth, int aHeight, char* title);
    ~Screen();
    bool fullyInitialized = true;
};

Screen::Screen(int aWidth, int aHeight, char* title):
    _width(aWidth), _height(aHeight), _gameTitle(title)
{
    std::cout << "Game screen is INITIALIZING...";

    if (_initialize())
    {
        fullyInitialized = true;
        std::cout << "OK" << std::endl;
    }
    else
    {
        fullyInitialized = false;
        std::cout << "FAILED" << std::endl;
    }
}

Screen::~Screen()
{
    std::cout << "Game screen is Shutting Down...";
    std::cout << "OK" << std::endl;
}

bool Screen::_initialize()
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        std::cout << "SCREEN_H|_initialize: SDL did not Initialize!" << std::endl;
    }

    _mainWindow = SDL_CreateWindow( _gameTitle,
                                    SDL_WINDOWPOS_CENTERED,
                                    SDL_WINDOWPOS_CENTERED, 
                                    _width, 
                                    _height, 
                                    0 );

    if (!_mainWindow)
    {
        std::cout << "SCREEN_H|_initialize: SDL_CreateWindow failed" << std::endl;
        return false;
    }

    return true;
}

#endif