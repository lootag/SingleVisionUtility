#include <iostream>
#include <fstream>
#include "../../Include/Implementations/InitializationService.hpp"

namespace init
{
    std::unique_ptr<std::string> InitializationService::configureModelPath() const
    {
        std::unique_ptr<std::string> modelPath = std::make_unique<std::string>();
        std::cout << "Please insert your model's path" << std::endl;
        std::cin >> *modelPath;
        std::fstream fileStream;
        fileStream.open(*modelPath);
        if(fileStream.fail())
        {
            std::cout << "The path you have inserted is invalid. Try again." << std::endl;
            this->configureModelPath();
        }
        fileStream.close();
        return modelPath;
    }
}