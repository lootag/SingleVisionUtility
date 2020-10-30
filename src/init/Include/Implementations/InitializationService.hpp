#ifndef INITIALIZATION_SERVICE
#define INITIALIZATION_SERVICE
#include <iostream>
#include <fstream>
#include <experimental/filesystem>
#include <bits/stdc++.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "../../../../bin/lib/vendor/Json/json.hpp"

#include "../Job.hpp"
#include "../IInitializationService.hpp"
namespace init
{
    class InitializationService : public IInitializationService
    {
        public:
            InitializationService();
            void Initialize();
        private: 
            Job* ConfigureJob();
            long ConfigureJobId();
            enums::JobType ConfigureJobType();
            enums::Classifier ConfigureClassifier();
            enums::Task ConfigureTask(); 
            enums::DetectionArch ConfigureDetectionArch();
            std::string ConfigureModelPath();
            void WriteJob(const Job& job);
            void TransferData();
            void TranserModel();
        
    };
}
#endif 