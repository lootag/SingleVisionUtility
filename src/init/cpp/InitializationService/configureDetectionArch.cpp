#include <iostream>
#include "../../Include/Implementations/InitializationService.hpp"
#include "../../../enums/DetectionArch.hpp"

namespace init
{
    enums::DetectionArch InitializationService::configureDetectionArch()
    {
        int detectionArchMin = 1;
        int detectionArchMax = 5;
        enums::DetectionArch detectionArch;
        int detectionArchInt;
        std::cout << "Select the detection architecture you wish to employ:" << std::endl;
        std::cout << "1: retinanet" << std::endl;
        std::cout << "2: yolo3" << std::endl; 
        std::cout << "3: efficientdet" << std::endl;
        std::cout << "4: ssd" << std::endl;
        std::cout << "5: fastrcnn" << std::endl;
        std::cin >> detectionArchInt;
        if(detectionArchInt < detectionArchMin || detectionArchInt > detectionArchMax)
        {
            std::cout << "You have inserted an invalid value" << std::endl;
            this->configureDetectionArch();
        }
        detectionArch = static_cast<enums::DetectionArch>(detectionArchInt);
        return detectionArch;
        
    }
}