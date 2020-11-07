#include <iostream>
#include "../../Include/Implementations/InitializationService.hpp"

namespace init
{
    long InitializationService::configureJobId()
    {
       
        long jobId;
        std::cout << "Assign a numeric id to the job" << std::endl;
        std::cin >> jobId;
        return jobId;
        
    }
}