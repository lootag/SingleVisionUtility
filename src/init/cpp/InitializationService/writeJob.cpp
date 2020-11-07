#include <iostream>
#include <bits/stdc++.h>

#include "../../Include/Implementations/InitializationService.hpp"
#include "../../../../bin/lib/vendor/Json/json.hpp"
#include "../../dtos/Job.hpp"

namespace init
{
    void InitializationService::writeJob(const Job& job) 
    {
        std::string homeDirectory = getenv("HOME");
        std::string directoryToCheck = homeDirectory + "/.svu/" + std::string("job") + std::to_string(job.GetJobId());
        if(std::filesystem::exists(directoryToCheck))
        {
            std::filesystem::remove(directoryToCheck);
        }
        std::filesystem::create_directory(directoryToCheck);
        init::dtos::Job dto {job.GetJobId(), job.GetDataPath(), job.GetModelPath(), job.GetJobType(), job.GetTask(), job.GetClassifier(), job.GetDetectionArch()};
        nlohmann::json serializedDto = dto;
        std::string outputFileName = directoryToCheck +  "/job" + std::to_string(job.GetJobId()) + ".json";
        std::ofstream outputFile(outputFileName);
        outputFile << serializedDto;
        outputFile.close();
    }
}