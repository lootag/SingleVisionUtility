#include "../Include/Implementations/InitializationService.hpp"
namespace init
{
    InitializationService::InitializationService()
    {

    }
    
    void InitializationService::Initialize()
    {
        std::cout << "Initialzing job." << std::endl; 
        Job* job = this->ConfigureJob();
        this->WriteJob(*job);
        
        delete(job);

    }

    Job* InitializationService::ConfigureJob()
    {
        Job* job = new Job();
        long jobId = this->ConfigureJobId();
        enums::JobType jobType = this->ConfigureJobType();
        if(jobType == enums::JobType::inference)
        {
            this->ConfigureModelPath();
        }
        enums::Task task = this->ConfigureTask();
        enums::Classifier classifier = this->ConfigureClassifier();
        enums::DetectionArch detectionArch = enums::DetectionArch::none;
        if(task == enums::Task::detection)
        {
            detectionArch = this->ConfigureDetectionArch();
        }
        job->SetJobId(jobId);
        job->SetJobType(jobType);
        job->SetTask(task);
        job->SetClassifier(classifier);
        job->SetDetectionArch(detectionArch);

    }

    long InitializationService::ConfigureJobId()
    {
       
        long jobId;
        std::cout << "Assign a numeric id to the job" << std::endl;
        std::cin >> jobId;
        return jobId;
        
    }

    enums::JobType InitializationService::ConfigureJobType()
    {
        
        int jobTypeMinValue = 0;
        int jobTypeMaxValue = 1;
        enums::JobType jobType;
        int jobTypeInt;
        std::cout << "Select the type of job you want to run:" << std::endl;
        std::cout << "0: training" << std::endl;
        std::cout << "1: inference" << std::endl;
        std::cin >> jobTypeInt;
        if(jobTypeInt < jobTypeMinValue || jobTypeInt > jobTypeMaxValue)
        {
            std::cout << "You have inserted an invalid value. Try again." << std::endl;
            this->ConfigureJobType();
        }
        jobType = static_cast<enums::JobType>(jobTypeInt);
        return jobType;
       
        
    }

    enums::Task InitializationService::ConfigureTask()
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
            this->ConfigureTask();
        }
        task = static_cast<enums::Task>(taskInt);
        return task;
        
    }

    enums::Classifier InitializationService::ConfigureClassifier()
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
            this->ConfigureClassifier();
        }
        classifier = static_cast<enums::Classifier>(classifierInt);
        return classifier;
        
        
    }

    enums::DetectionArch InitializationService::ConfigureDetectionArch()
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
            this->ConfigureDetectionArch();
        }
        detectionArch = static_cast<enums::DetectionArch>(detectionArchInt);
        return detectionArch;
        
    }

    std::string InitializationService::ConfigureModelPath()
    {
        std::string modelPath;
        std::cout << "Please insert your model's path" << std::endl;
        std::cin >> modelPath;
        std::fstream fileStream;
        fileStream.open(modelPath);
        if(fileStream.fail())
        {
            std::cout << "The path you have inserted is invalid. Try again." << std::endl;
            this->ConfigureModelPath();
        }
        return modelPath;
    }

    void InitializationService::WriteJob(const Job& job) 
    {
        std::cout << job.GetJobId() << std::endl;
        std::cout << job.GetJobType() << std::endl;
        std::cout << job.GetTask() << std::endl;
        std::cout << job.GetClassifier() << std::endl;
        std::cout << job.GetDetectionArch() << std::endl;
        nlohmann::json json;
            
    }

    
}
