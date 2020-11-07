#include <iostream>
#include "../../Include/Implementations/InitializationService.hpp"

namespace init
{
    std::unique_ptr<Job> InitializationService::configureJob()
    {
        long jobId = this->configureJobId();
        std::unique_ptr<std::string> dataPath = this->configureDataPath();
        std::unique_ptr<std::string> modelPath = std::make_unique<std::string>();
        enums::JobType jobType = this->configureJobType();  
        if(jobType == enums::JobType::inference)
        {
            modelPath = this->configureModelPath();
        }
        enums::Task task = this->configureTask();
        enums::Classifier classifier = this->configureClassifier();
        enums::DetectionArch detectionArch = enums::DetectionArch::none;
        if(task == enums::Task::detection)
        {
            detectionArch = this->configureDetectionArch();
        }

        std::unique_ptr<Job> job = std::make_unique<Job>(jobId,
                                                         *dataPath,
                                                         *modelPath,
                                                         jobType,
                                                         task,
                                                         classifier,
                                                         detectionArch);
        return job;
    }
}