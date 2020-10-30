#include "../Include/Job.hpp"

namespace init
{
    Job::Job(/* args */)
    {
    }

    Job::~Job()
    {
    }

    long Job::GetJobId() const
    {
        return this->jobId;
    }

    void Job::SetJobId(long jobId)
    {
        this->jobId = jobId;
    }

    enums::JobType Job::GetJobType() const
    {
        return this->jobType;
    }

    void Job::SetJobType(enums::JobType jobType)
    {
        this->jobType = jobType;
    }

    enums::Task Job::GetTask() const 
    {
        return this->task;
    }

    void Job::SetTask(enums::Task task)
    {
        this->task = task;
    }

    enums::Classifier Job::GetClassifier() const 
    {
        return this->classifier;
    }

    void Job::SetClassifier(enums::Classifier classifier)
    {
        this->classifier = classifier;
    }

    enums::DetectionArch Job::GetDetectionArch() const 
    {
        return this->detectionArch;
    }

    void Job::SetDetectionArch(enums::DetectionArch detectionArch)
    {
        this->detectionArch = detectionArch;
    }

    std::string Job::GetModelPath() const
    {
        return this->modelPath;
    }

    void Job::SetModelPath(std::string modelPath) 
    {
        this->modelPath = modelPath;
    }
}
