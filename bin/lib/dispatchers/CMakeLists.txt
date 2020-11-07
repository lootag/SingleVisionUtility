cmake_minimum_required(VERSION 2.8.9)

project(svu)

add_library(
    dispatchers SHARED
    ../../../src/dispatchers/Include/Implementations/DispatcherFactory.hpp
    ../../../src/dispatchers/Include/Implementations/InitializationDispatcher.hpp
    ../../../src/dispatchers/cpp/DispatcherFactory/DispatcherFactory.cpp
    ../../../src/dispatchers/cpp/DispatcherFactory/~DispatcherFactory.cpp
    ../../../src/dispatchers/cpp/DispatcherFactory/Create.cpp
    ../../../src/dispatchers/cpp/InitializationDispatcher/InitializationDispatcher.cpp
    ../../../src/dispatchers/cpp/InitializationDispatcher/~InitializationDispatcher.cpp
    ../../../src/dispatchers/cpp/InitializationDispatcher/Dispatch.cpp

    )