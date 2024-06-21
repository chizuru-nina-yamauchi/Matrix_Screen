#include "MatrixColumn.h"   // Include the MatrixColumn header file for column struct and functions

/**
* Moving the function to the MatrixColumn.cpp to make the test run successfully
 * */

// Function to initialize the matrix columns
void initMatrixColumns(std::vector<MatrixColumn>& columns, int screenWidth, int fontSize) {
    // Calculate the number of columns based on screen width and font size
    int numColumns = screenWidth / fontSize;
    columns.resize(numColumns); // Resize the columns vector to hold numColumns

    // Initialize each column
    for (int i = 0; i < numColumns; ++i) {
        // Set x position of the column to evenly distribute across the screen
        // Set y position randomly within the screen height
        // Set speed randomly to create the effect of falling
        columns[i] = {i * fontSize, rand() % SCREEN_HEIGHT, rand() % 20 + 5};
    }
}