#include <iostream>
#include <bits/stdc++.h>

#include "../../Include/Implementations/InitializationService.hpp"

namespace init
{
    void InitializationService::createDirectoryIfItDoesNotExist()
    {
        try
        {
            std::string homeDirectory = getenv("HOME");
            std::string svuDirectory = homeDirectory + "/.svu";
            if(!std::filesystem::exists(svuDirectory))
            {
                bool directoryCreated = std::filesystem::create_directory(homeDirectory + "/.svu");
            }
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
            exit(-1);
        }
        
    }
}