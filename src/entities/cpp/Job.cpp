#include<iostream>
#include "../Include/Job.hpp"

namespace entities
{
    Job::Job(long jobId,
             const std::string& dataPath,
             const std::string& modelPath,
             enums::JobType jobType,
             enums::Task task,
             enums::Classifier classifier,
             enums::DetectionArch detectionArch)
    {
    
        this->_jobId = jobId;
        this->_dataPath = dataPath;
        this->_modelPath = modelPath;
        this->_jobType = jobType;
        this->_task = task;
        this->_classifier = classifier;
        this->_detectionArch = detectionArch;

    }

    Job::~Job()
    {
    }

    long Job::GetJobId() const
    {
        return this->_jobId;
    }

    std::string Job::GetDataPath() const
    {
        return this->_dataPath;
    }


    std::string Job::GetModelPath() const
    {
        return this->_modelPath;
    }

    enums::JobType Job::GetJobType() const
    {
        return this->_jobType;
    }

    enums::Task Job::GetTask() const 
    {
        return this->_task;
    }


    enums::Classifier Job::GetClassifier() const 
    {
        return this->_classifier;
    }

    enums::DetectionArch Job::GetDetectionArch() const
    {
        return this->_detectionArch;
    }


}
