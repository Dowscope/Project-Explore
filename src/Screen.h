/**
 * Project Explore
 * Screen Class
 * File:            Screen.h
 * Date:            Feb 9 2021
 */

#ifndef SCREEN_H
#define SCREEN_H

#include "includes.h"

class Screen
{
private:
    int _width, _height;
    char* _gameTitle;
    SDL_Window * _mainWindow;
    SDL_Renderer * _mainRenderer;
public:
    bool fullyInitialized = true;
private:
    bool _initialize();
public:
    Screen(int aWidth, int aHeight, char* title);
    ~Screen();
    void clear();
    void refresh();
    void drawTile(int x, int y, int tileSize, TileColor tileColor);
    void drawPlayer(int x, int y, int size);
};

#endif