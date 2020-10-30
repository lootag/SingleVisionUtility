#ifndef IINITIALIZATION_SERVICE
#define IINITIALIZATION_SERVICE
namespace init
{
    class IInitializationService
    {
        public:
            virtual void Initialize() = 0;
            virtual ~IInitializationService() = default;    
        private:    
        
    };

}


#endif