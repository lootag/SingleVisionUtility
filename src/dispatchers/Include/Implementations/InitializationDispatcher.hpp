#ifndef INITIALIZATION_DISPATCHER
#define INITIALIZATION_DISPATCHER

#include <iostream>
#include <memory>
#include "../Interfaces/IDispatcher.hpp"
#include "../../../init/Include/Interfaces/IInitializationService.hpp"

namespace dispatchers
{
    class InitializationDispatcher : public IDispatcher
    {
        public:
            InitializationDispatcher(std::shared_ptr<init::IInitializationService> initializer);
            ~InitializationDispatcher();
            void Dispatch();

        private:
            std::shared_ptr<init::IInitializationService> _initializer;
    };
    
}

#endif