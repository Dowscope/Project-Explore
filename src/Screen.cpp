/**
 * Project Explore
 * Screen Class
 * File:            Screen.cpp
 * Date:            Feb 9 2021
 */

#include "Screen.h"

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

    _mainRenderer = SDL_CreateRenderer(_mainWindow, -1, SDL_RENDERER_ACCELERATED);

    if(!_mainRenderer)
    {
        std::cout << "SCREEN_H|_initialize: SDL_CreateRenderer failed" << std::endl;
        return false;
    }

    return true;
}

void Screen::clear()
{
    SDL_SetRenderDrawColor(_mainRenderer, 0, 0, 0, 0);
    SDL_RenderClear(_mainRenderer);
}

void Screen::refresh()
{
    SDL_RenderPresent(_mainRenderer);
}

void Screen::drawTile(int x, int y, int tileSize, TileColor tileColor)
{
    SDL_Rect r = {x, y, tileSize, tileSize};
    SDL_SetRenderDrawColor(_mainRenderer, tileColor.r, tileColor.g, tileColor.b, tileColor.a);
    SDL_RenderFillRect(_mainRenderer, &r);
}

void Screen::drawPlayer(int x, int y, int size)
{
    SDL_Rect r = {x, y, size, size};
    SDL_SetRenderDrawColor(_mainRenderer, 0, 0, 0, 255);
    SDL_RenderFillRect(_mainRenderer, &r);
}