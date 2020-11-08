#ifndef JOB_DTO
#define JOB_DTO
#include "../../enums/Classifier.hpp"
#include "../../enums/DetectionArch.hpp"
#include "../../enums/JobType.hpp"
#include "../../enums/Task.hpp"
#include "../../vendor/Json/json.hpp"

namespace init
{
    namespace dtos
    {
        using namespace nlohmann;
        struct Job
        {
            long JobId;
            std::string DataPath;
            std::string ModelPath;
            enums::JobType JobType;
            enums::Task Task;
            enums::Classifier Classifier;
            enums::DetectionArch DetectionArch;
        };

        inline 
        void to_json(json& serializedJob, const Job& job)
        {
            serializedJob = json{{"id", job.JobId}, 
                                 {"dataPath", job.DataPath},
                                 {"modelPath", job.ModelPath},
                                 {"jobType", job.JobType},
                                 {"task", job.Task}, 
                                 {"classifier", job.Classifier}, 
                                 {"detectionArch", job.DetectionArch}};
        }

        inline
        void from_json(const json& serializedJob, Job& job)
        {
            serializedJob.at("id").get_to(job.JobId);
            serializedJob.at("dataPath").get_to(job.DataPath);
            serializedJob.at("modelPath").get_to(job.ModelPath);
            serializedJob.at("jobType").get_to(job.JobType);
            serializedJob.at("task").get_to(job.Task);
            serializedJob.at("classifier").get_to(job.Classifier);
            serializedJob.at("detectionArch").get_to(job.DetectionArch);
        }
        
    }
}

#endif
