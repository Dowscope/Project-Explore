/*
 * Project Explore
 * File:         main.cpp
 * Date Started: Feb 9th 2021
 */

#include <iostream>
#include "Screen.h"

#define PROJECT_TITLE "Project Explore"
#define VERSION "0.01a"
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

/* Declare Functions */
void shutdown();

/* Globals */
Screen * screen;

int main(int argc, char const *argv[])
{
    std::cout << "Starting " << PROJECT_TITLE << " Ver. " << VERSION << std::endl;
    screen = new Screen(WINDOW_WIDTH, WINDOW_HEIGHT);
    shutdown();
    return 0;
}

void shutdown()
{
    delete screen;
}
