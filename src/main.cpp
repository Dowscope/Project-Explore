/*
 * Project Explore
 * File:         main.cpp
 * Date Started: Feb 9th 2021
 */

#include <iostream>
#include "Screen.h"

#define VERSION "0.01a"
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

/* Declare Functions */
void initialize();
void shutdown();

/* Globals */
Screen * screen;

char* program_title = "Project Explore";

int main(int argc, char const *argv[])
{
    initialize();
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
    screen = new Screen(WINDOW_WIDTH, WINDOW_HEIGHT, program_title);
    delete screen;

    std::cout << "Shutdown Completed" << std::endl;
}
