cmake_minimum_required(VERSION 2.8.9)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(svu)

add_subdirectory(lib/init)
add_subdirectory(lib/vendor/Hypodermic)


add_executable(
    svu 
    ../src/main.cpp
    ../src/Application.hpp
    ../src/Application.cpp
)

target_link_libraries(svu PRIVATE init)


