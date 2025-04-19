cmake_minimum_required(VERSION 3.10)
project(WindowsProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Force Google Test to use the same runtime library as the project
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add Google Test subdirectory
add_subdirectory(googletest)

# Add source files
add_library(Prog_lib src/Prog.cpp)
target_include_directories(Prog_lib PUBLIC include)

# Add test executable
add_executable(test_Prog test/test_Prog.cpp)
target_include_directories(test_Prog PRIVATE include googletest/googletest/include)
target_link_libraries(test_Prog calculator_lib gtest gtest_main)

# Enable testing and add test
enable_testing()
add_test(NAME ProgTests COMMAND test_Prog)