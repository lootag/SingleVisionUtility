#include <iostream>
#include "../../Include/Implementations/InitializationService.hpp"
#include "../../../enums/JobType.hpp"

namespace init
{
    enums::JobType InitializationService::configureJobType()
    {
        
        int jobTypeMinValue = 0;
        int jobTypeMaxValue = 1;
        enums::JobType jobType;
        int jobTypeInt;
        std::cout << "Select the type of job you want to run:" << std::endl;
        std::cout << "0: training" << std::endl;
        std::cout << "1: inference" << std::endl;
        std::cin >> jobTypeInt;
        if(jobTypeInt < jobTypeMinValue || jobTypeInt > jobTypeMaxValue)
        {
            std::cout << "You have inserted an invalid value. Try again." << std::endl;
            this->configureJobType();
        }
        jobType = static_cast<enums::JobType>(jobTypeInt);
        return jobType;
       
        
    }
}