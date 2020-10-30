cmake_minimum_required(VERSION 2.8.9)

project(svu)

add_library(
    init SHARED
    ../../../src/init/Include/Implementations/InitializationService.hpp
    ../../../src/init/Implementations/InitializationService.cpp
    ../../../src/init/Include/Job.hpp
    ../../../src/init/Dtos/Job.cpp
    )