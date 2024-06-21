
// The header guards: used to prevent the header file from being included more than once in the compilation process.
#ifndef MATRIXSCREEN_MATRIXSCREENTEST_H
#define MATRIXSCREEN_MATRIXSCREENTEST_H

//Include the Google Test framework's main header file
#include "gtest/gtest.h"

// MatrixScreenTest class for testing the MatrixScreen class that inherits from the ::testing::Test fixture
class MatrixScreenTest : public ::testing::Test{  //::testing::Test is a base class for test fixtures
protected:
    // Default constructor for the test class
    MatrixScreenTest(){}

    // Destructor for the test class
    ~MatrixScreenTest() override{} // override keyword is used to explicitly specify that the function is overriding a virtual function from the base class

    // Before each test case, set up the test environment
    void SetUp() override{}

    // After each test case, tear down the test environment
    void TearDown() override{}

};

// End of the header guard
#endif //MATRIXSCREEN_MATRIXSCREENTEST_H
