#ifndef JOB
#define JOB
#include "../../enums/Classifier.hpp"
#include "../../enums/JobType.hpp"
#include "../../enums/DetectionArch.hpp"
#include "../../enums/Task.hpp"

namespace entities
{
    class Job
    {
        public:
            Job(long jobId, 
                const std::string& dataPath, 
                const std::string& modelPath, 
                enums::JobType jobType,
                enums::Task task,
                enums::Classifier classifier,
                enums::DetectionArch detectionArch);
            ~Job();
            long GetJobId() const;
            std::string GetDataPath() const;
            std::string GetModelPath() const;
            enums::JobType GetJobType() const;
            enums::Task GetTask() const;
            enums::Classifier GetClassifier() const;
            enums::DetectionArch GetDetectionArch() const;
         

        private:
            long _jobId;
            std::string _dataPath;
            std::string _modelPath;
            enums::JobType _jobType;
            enums::Task _task;
            enums::Classifier _classifier;
            enums::DetectionArch _detectionArch;
    };
}



#endif