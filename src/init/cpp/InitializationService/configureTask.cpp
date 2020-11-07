#include <iostream>
#include "../../Include/Implementations/InitializationService.hpp"
#include "../../../enums/Task.hpp"

namespace init
{
    enums::Task InitializationService::configureTask()
    {
        int taskMinimumValue = 0;
        int taskMaximumValue = 1;
        enums::Task task;
        int taskInt;
        std::cout << "Select the task you want the job to perform" << std::endl;
        std::cout << "0: classification" << std::endl;
        std::cout << "1: detection" << std::endl;
        std::cin >> taskInt;
        if(taskInt < taskMinimumValue || taskInt > taskMaximumValue)
        {
            std::cout << "You have inserted an invalid value. Try again." << std::endl;
            this->configureTask();
        }
        task = static_cast<enums::Task>(taskInt);
        return task;
        
    }
}