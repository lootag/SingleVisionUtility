#include <iostream>
#include <fstream>
#include "../../Include/Implementations/InitializationService.hpp"

namespace init
{
    std::unique_ptr<std::string> InitializationService::configureDataPath() const
    {
        std::unique_ptr<std::string> dataPath = std::make_unique<std::string>();
        std::cout << "Please insert your data's path" << std::endl;
        std::cin >> *dataPath;
        std::fstream fileStream;
        fileStream.open(*dataPath);
        if(fileStream.fail())
        {
            std::cout << "The path you have inserted is invalid. Try again." << std::endl;
            this->configureDataPath();
        }
        fileStream.close();
        return dataPath;
    }
}