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
#include "Tile.h"

class Screen
{
private:
    int _width, _height;
    char* _gameTitle;
    SDL_Window * _mainWindow;
    SDL_Renderer * _mainRenderer;
    bool _initialize();
public:
    Screen(int aWidth, int aHeight, char* title);
    ~Screen();
    void clear();
    void refresh();
    void drawTile(int x, int y, int tileSize, TileColor tileColor);
    bool fullyInitialized = true;
};

#endif