/*
 * Project Explore
 * File:         main.cpp
 * Date Started: Feb 9th 2021
 */

#include <iostream>
#include "Screen.h"
#include "InputManager.h"

#define VERSION "0.01a"
#define WINDOW_WIDTH 1920
#define WINDOW_HEIGHT 1080

/* Declare Functions */
void initialize();
void shutdown();

/* Globals */
Screen * screen;
InputManager* inputManager;

char* program_title = "Project Explore";

int main(int argc, char const *argv[])
{
    initialize();

    /* Game Loop */
    bool isRunning = true;
    

    while(isRunning)
    {
        isRunning = inputManager->eventHandler();
    }

    shutdown();
    return 0;
}

void initialize()
{
    std::cout << "Initializing " << program_title << " Ver. " << VERSION << std::endl;
    screen = new Screen(WINDOW_WIDTH, WINDOW_HEIGHT, program_title);
}

void shutdown()
{
    std::cout << "Starting Shutdown..." << std::endl;
    delete screen;

    std::cout << "Shutdown Completed" << std::endl;
}
