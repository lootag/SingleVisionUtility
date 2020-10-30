#ifndef JOB
#define JOB
#include "../../enums/Classifier.hpp"
#include "../../enums/JobType.hpp"
#include "../../enums/DetectionArch.hpp"
#include "../../enums/Task.hpp"
#include<iostream>

namespace init
{
    class Job
    {
        public:
            Job(/* args */);
            ~Job();
            long GetJobId() const;
            void SetJobId(long jobId);
            enums::JobType GetJobType() const;
            void SetJobType(enums::JobType jobType);
            enums::Task GetTask() const;
            void SetTask(enums::Task task);
            enums::Classifier GetClassifier() const;
            void SetClassifier(enums::Classifier classifier);
            enums::DetectionArch GetDetectionArch() const;
            void SetDetectionArch(enums::DetectionArch detectionArch);
            std::string GetModelPath() const;
            void SetModelPath(std::string modelPath);

        private:
            long jobId;
            enums::JobType jobType;
            enums::Task task;
            enums::Classifier classifier;
            enums::DetectionArch detectionArch;
            std::string modelPath;
    };
}



#endif