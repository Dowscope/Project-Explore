/*
 * Project Explore
 * File:         main.cpp
 * Date Started: Feb 9th 2021
 */

#include <stdlib.h>
#include <time.h>
#include "includes.h"
#include "Screen.h"
#include "World.h"
#include "Player.h"
#include "InputManager.h"

#define VERSION "0.01a"
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
#define FPS 60
#define TILESIZE 32

/* Declare Functions */
void initialize();
void shutdown();
void render();
void renderGround();

/* Globals */
Screen * screen;
InputManager* inputManager;
World* world;
Player* player;

char* program_title = "Project Explore";

int main(int argc, char const *argv[])
{
    srand(0);
    initialize();

    /* Game Loop */
    bool isRunning = true;
    

    while(isRunning)
    {
        int event = inputManager->eventHandler(player);
        if (event == -1) isRunning = false;
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
    world = new World();
    player = new Player(0,0);
    inputManager = new InputManager();
}

void shutdown()
{
    std::cout << "Starting Shutdown..." << std::endl;
    delete inputManager;
    delete player;
    delete world;
    delete screen;
    std::cout << "Shutdown Completed" << std::endl;
}

void render()
{
    renderGround();
    screen->drawPlayer(player->x, player->y, 16);
}

void renderGround()
{
    Chunk* c = world->GetChunkAt(0,0);
    for (int y = 0; y < c->CHUNKSIZE; y++)
    {
        for (int x = 0; x < c->CHUNKSIZE; x++)
        {   
            Tile* t = c->getTileAt(x, y);
            screen->drawTile(t->x*TILESIZE,t->y*TILESIZE,TILESIZE, t->tileColor);
        }
        
    }
    
}
