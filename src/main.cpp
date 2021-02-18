/*
 * Project Explore
 * File:         main.cpp
 * Date Started: Feb 9th 2021
 */

#include <iostream>
#include "Screen.h"
#include "InputManager.h"
#include "World.h"

#define VERSION "0.01a"
#define WINDOW_WIDTH 1920
#define WINDOW_HEIGHT 1080
#define FPS 60
#define TILESIZE 32

/* Declare Functions */
void initialize();
void shutdown();
void render();

/* Globals */
Screen * screen;
InputManager* inputManager;
World* world;

char* program_title = "Project Explore";

int main(int argc, char const *argv[])
{
    initialize();

    /* Game Loop */
    bool isRunning = true;
    

    while(isRunning)
    {
        isRunning = inputManager->eventHandler();
        screen->clear();
        render();
        screen->refresh();
    }

    shutdown();
    return 0;
}

void initialize()
{
    std::cout << "Initializing " << program_title << " Ver. " << VERSION << std::endl;
    screen = new Screen(WINDOW_WIDTH, WINDOW_HEIGHT, program_title);
    inputManager = new InputManager();
    world = new World();
}

void shutdown()
{
    std::cout << "Starting Shutdown..." << std::endl;
    delete screen;
    delete inputManager;
    delete world;
    std::cout << "Shutdown Completed" << std::endl;
}

void render()
{
    Chunk* c = world->GetChunkAt(0,0);
    for (int y = 0; y < c->CHUNKSIZE; y++)
    {
        for (int x = 0; x < c->CHUNKSIZE; x++)
        {   
            Tile* t = c->getTileAt(x, y);
            screen->drawTile(t->x*TILESIZE,t->y*TILESIZE,TILESIZE);
        }
        
    }
    
}
