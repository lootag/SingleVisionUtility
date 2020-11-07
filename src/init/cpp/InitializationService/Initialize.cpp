#include <iostream>
#include "../../Include/Implementations/InitializationService.hpp"

namespace init
{
    void InitializationService::Initialize()
    {
        this->createDirectoryIfItDoesNotExist();
        std::cout << "Initialzing job." << std::endl; 
        std::unique_ptr<Job> job = this->configureJob();
        this->writeJob(*job);
    }
}