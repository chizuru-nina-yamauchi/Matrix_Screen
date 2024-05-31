# Defines project structure, dependencies, and build configurations

# Minimum version of CMake required to build the project
cmake_minimum_required(VERSION 3.10)

# Name of the project
project(MatrixScreen)


# Set the C++ standard to C++17 (Dependency)
set(CMAKE_CXX_STANDARD 17)

# Require the C++ standard to build the project (Dependency)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Specify the SDL2 and SDL2_ttf paths (Dependency)
set(SDL2_INCLUDE_DIR /usr/include/SDL2)
set(SDL2_LIBRARY /usr/lib/x86_64-linux-gnu/libSDL2.so)
set(SDL2_TTF_INCLUDE_DIR /usr/include/SDL2)
set(SDL2_TTF_LIBRARY /usr/lib/x86_64-linux-gnu/libSDL2_ttf.so)

# Manually add the SDL2 and SDL2_ttf include directories (Dependency)
include_directories(${SDL2_INCLUDE_DIR} ${SDL2_TTF_INCLUDE_DIR})




# Add the executable (Build Configuration)
add_executable(MatrixScreen src/main.cpp)

# Link the SDL2 and SDL2_ttf libraries (Build Configuration)
target_link_libraries(MatrixScreen ${SDL2_LIBRARY} ${SDL2_TTF_LIBRARY})
