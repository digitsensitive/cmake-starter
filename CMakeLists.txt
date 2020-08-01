# Set the minimum required version of cmake for this project
cmake_minimum_required(VERSION 3.18.1)

# Define the C++ standard whose features we request to build this project
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set the project version
set(VERSION_MAJOR 0)
set(VERSION_MINOR 1)
set(VERSION_REVISION 0)

# Set the project name with the corresponding version
project(boilerplate VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_REVISION})

# Add the include directories (= our header files) to our build
include_directories(include)

# Add an executable to our project
add_executable(${PROJECT_NAME} 
    src/main.cpp 
    src/boilerplate.cpp)