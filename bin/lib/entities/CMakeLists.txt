cmake_minimum_required(VERSION 2.8.9)

project(svu)

add_library(
    entities SHARED
    ../../../src/entities/Include/Job.hpp
    ../../../src/entities/Include/CommandLineOptions.hpp
    ../../../src/entities/cpp/Job.cpp
    ../../../src/entities/cpp/CommandLineOptions.cpp
    )