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

# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
    message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
    message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif()

# Prevent overriding the parent project's compiler/linker settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This defines the gtest and gtest_main targets.
add_subdirectory(${CMAKE_CURRENT_BINARY_DIR}/googletest-src
        ${CMAKE_CURRENT_BINARY_DIR}/googletest-build
        EXCLUDE_FROM_ALL)

# Add the main application executable (Build Configuration)
add_executable(MatrixScreenApp src/main.cpp
                            src/MatrixColumn.h)

# Link the SDL2 and SDL2_ttf libraries (Build Configuration)
target_link_libraries(MatrixScreenApp ${SDL2_LIBRARY} ${SDL2_TTF_LIBRARY})

# Add the test executable
add_executable(MatrixScreenTestApp test/MatrixScreenTest.cpp
                                test/MatrixScreenTest.h
                                src/MatrixColumn.cpp
                                src/MatrixColumn.h)

# Link the Google Test and SDL2 libraries to the test executable
target_link_libraries(MatrixScreenTestApp ${SDL2_LIBRARY} ${SDL2_TTF_LIBRARY} gtest_main)

# Add the main application executable (Build Configuration)
add_executable(MatrixScreen src/main.cpp
                            src/MatrixColumn.h)

# Link the SDL2 and SDL2_ttf libraries (Build Configuration)
target_link_libraries(MatrixScreen ${SDL2_LIBRARY} ${SDL2_TTF_LIBRARY})


#add the test executable
add_executable(MatrixScreenTest test/MatrixScreenTest.cpp
                                test/MatrixScreenTest.h
                                src/MatrixColumn.cpp
                                src/MatrixColumn.h)

#Link the Google Test and SDL2 libraries to the test executable
target_link_libraries(MatrixScreenTest ${SDL2_LIBRARY} ${SDL2_TTF_LIBRARY} gtest_main)
