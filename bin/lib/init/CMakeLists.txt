cmake_minimum_required(VERSION 2.8.9)

project(svu)

add_library(
    init SHARED
    ../../../src/init/Include/Implementations/InitializationService.hpp
    ../../../src/init/cpp/InitializationService/InitializationService.cpp
    ../../../src/init/cpp/InitializationService/Initialize.cpp
    ../../../src/init/cpp/InitializationService/configureJob.cpp
    ../../../src/init/cpp/InitializationService/configureJobId.cpp
    ../../../src/init/cpp/InitializationService/configureJobType.cpp
    ../../../src/init/cpp/InitializationService/configureTask.cpp
    ../../../src/init/cpp/InitializationService/configureClassifier.cpp
    ../../../src/init/cpp/InitializationService/configureDetectionArch.cpp
    ../../../src/init/cpp/InitializationService/configureDataPath.cpp
    ../../../src/init/cpp/InitializationService/configureModelPath.cpp
    ../../../src/init/cpp/InitializationService/writeJob.cpp
    ../../../src/init/cpp/InitializationService/createDirectoryIfItDoesNotExist.cpp
    ../../../src/init/cpp/InitializationService/transferData.cpp
    )