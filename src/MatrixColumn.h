#pragma once // Include this header file only once. pragma is a preprocessor directive: It means that the compiler will include the header file only once in the compilation process.

#include <vector> // Include the C++ vector library for dynamic arrays
#include <cstdlib> // Include the C standard library for general utilities

const int SCREEN_HEIGHT = 1050; // Define the screen height constant

struct MatrixColumn { // Define a struct to represent a column in the matrix
    int x; // X coordinate of the column
    int y; // Y coordinate of the column
    int speed; // Speed of the column's movement
};

void initMatrixColumns(std::vector<MatrixColumn>& columns, int screenWidth, int fontSize); // Function to initialize the matrix columns
