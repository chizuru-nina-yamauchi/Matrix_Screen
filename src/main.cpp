#include <SDL2/SDL.h>       // Include the SDL library for graphics rendering
#include <SDL2/SDL_ttf.h>   // Include the SDL_ttf library for TrueType font rendering
#include <cstdlib>          // Include the C standard library for general utilities
#include <ctime>            // Include the C time library for time functions
#include "MatrixColumn.h"   // Include the MatrixColumn header file for column struct and functions

// Constants for the screen width, height, and font size
const int SCREEN_WIDTH = 1950;
const int FONT_SIZE = 16;

// Function to render the matrix on the screen
void renderMatrix(SDL_Renderer* renderer, TTF_Font* font, std::vector<MatrixColumn>& columns) {
    SDL_Color color = {0, 255, 0, 255}; // Set color to green

    // Iterate through each column in the vector
    for (auto& column : columns) {
        // Generate a random character to represent the falling character
        char ch = '0' + rand() % 10;

        // Render the character to a surface using the specified font and color
        SDL_Surface* surface = TTF_RenderGlyph_Solid(font, ch, color);

        // Create a texture from the rendered surface
        SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);

        // Define the destination rectangle where the texture will be rendered
        SDL_Rect destRect = {column.x, column.y, FONT_SIZE, FONT_SIZE};

        // Render the texture to the renderer at the specified destination rectangle
        SDL_RenderCopy(renderer, texture, nullptr, &destRect);

        // Free the surface and texture memory to prevent memory leaks
        SDL_FreeSurface(surface);
        SDL_DestroyTexture(texture);

        // Update the column's y position to simulate falling
        column.y += column.speed;

        // If the column falls below the screen height, reset its position to the top
        if (column.y > SCREEN_HEIGHT) {
            column.y = 0;
        }
    }
}

// Main function where the program starts execution
int main(int argc, char* argv[]) {
    // Initialize SDL video subsystem for graphics
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        return 1; // Return error code if initialization fails
    }

    // Initialize SDL_ttf library for TrueType font rendering
    if (TTF_Init() != 0) {
        SDL_Quit(); // Quit SDL if initialization fails
        return 1;   // Return error code
    }

    // Create a window for the application with specified title, position, and size
    SDL_Window* window = SDL_CreateWindow("Matrix Screen", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

    // Create a renderer for the window to render graphics
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    // Load a TrueType font for rendering text
    TTF_Font* font = TTF_OpenFont("fonts/NotoSerifJP-Regular.ttf", FONT_SIZE);

    // Check if window, renderer, and font were created successfully
    if (!window || !renderer || !font) {
        TTF_Quit();     // Quit SDL_ttf library
        SDL_Quit();     // Quit SDL library
        return 1;       // Return error code
    }

    // Seed the random number generator with current time for randomization
    std::srand(std::time(0));

    // Create a vector to hold the matrix columns
    std::vector<MatrixColumn> columns;

    // Initialize the matrix columns with initial positions and speeds
    initMatrixColumns(columns, SCREEN_WIDTH, FONT_SIZE);

    // Variable to control the main loop
    bool running = true;

    // Event handler for processing SDL events
    SDL_Event event;

    // Main loop of the program
    while (running) {
        // Handle SDL events
        while (SDL_PollEvent(&event)) {
            // Check if the event is a quit event (e.g., window close)
            if (event.type == SDL_QUIT) {
                running = false; // Set running to false to exit the loop
            }
        }

        // Set the render draw color to black
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

        // Clear the renderer with the render draw color
        SDL_RenderClear(renderer);

        // Render the matrix columns on the screen
        renderMatrix(renderer, font, columns);

        // Present the renderer's contents to the window
        SDL_RenderPresent(renderer);

        // Delay to control the frame rate
        SDL_Delay(40);
    }

    // Cleanup resources: close the font, renderer, window, and quit SDL and SDL_ttf
    TTF_CloseFont(font);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    TTF_Quit();
    SDL_Quit();

    return 0; // Return success code
}
