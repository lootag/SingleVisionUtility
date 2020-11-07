#ifndef INITIALIZATION_SERVICE
#define INITIALIZATION_SERVICE

#include <memory>
#include <string>

#include "../../../entities/Include/Job.hpp"
#include "../Interfaces/IInitializationService.hpp"
namespace init
{
    using namespace entities;
    class InitializationService : public IInitializationService
    {
        public:
            InitializationService();
            void Initialize();
        private: 
            std::unique_ptr<Job> configureJob();
            long configureJobId();
            std::unique_ptr<std::string> configureModelPath() const; 
            std::unique_ptr<std::string> configureDataPath() const;
            enums::JobType configureJobType();
            enums::Classifier configureClassifier();
            enums::Task configureTask(); 
            enums::DetectionArch configureDetectionArch();
            void writeJob(const Job& job);
            void transferData(const std::string& path);
            void transerModel();
            void createDirectoryIfItDoesNotExist();
        
    };
}
#endif 