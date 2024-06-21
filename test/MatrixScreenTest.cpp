// Test by using Google Test framework
#include <vector>
#include "gtest/gtest.h"
#include "MatrixScreenTest.h"
#include "../src/MatrixColumn.h"

// Test case for initMatrixColumns function
TEST_F(MatrixScreenTest, TestInitMatrixColumns) {
    const int screenWidth = 100;
    const int fontSize = 16;
    std::vector<MatrixColumn> columns;

    initMatrixColumns(columns, screenWidth, fontSize);

    // Assertions to verify the column initialization
    EXPECT_EQ(columns.size(), screenWidth / fontSize); // Check number of columns
    for (const auto& col : columns) {
        EXPECT_GE(col.x, 0);  // Check X coordinate is within screen bounds
        EXPECT_LT(col.x, screenWidth);
        EXPECT_GE(col.y, 0);  // Check Y coordinate is within screen bounds
        EXPECT_LT(col.y, SCREEN_HEIGHT); // Assuming SCREEN_HEIGHT is defined
        EXPECT_GE(col.speed, 5);  // Check speed is within the specified range
        EXPECT_LT(col.speed, 25);  // Assuming speed range is 5 to 20
    }
}
