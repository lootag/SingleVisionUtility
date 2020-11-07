#include <iostream>
#include "../../Include/Implementations/InitializationService.hpp"
#include "../../../enums/Classifier.hpp"

namespace init
{
    enums::Classifier InitializationService::configureClassifier()
    {
        int classifierMinValue = 0;
        int classifierMaxValue = 4;
        enums::Classifier classifier;
        int classifierInt;
        std::cout << "Select the classifier you wish to employ:" << std::endl;
        std::cout << "0: resnet" << std::endl;
        std::cout << "1: densenet" << std::endl;
        std::cout << "2: vgg" << std::endl;
        std::cout << "3: googlenet" << std::endl;
        std::cout << "4: efficientnet" << std::endl;
        std::cin >> classifierInt;
        if(classifierInt < classifierMinValue || classifierInt > classifierMaxValue)
        {
            std::cout << "You have inserted an invalid value. Try Again." << std::endl;
            this->configureClassifier();
        }
        classifier = static_cast<enums::Classifier>(classifierInt);
        return classifier;
         
    }
}