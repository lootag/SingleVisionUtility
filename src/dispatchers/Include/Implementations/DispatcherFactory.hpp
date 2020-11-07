#ifndef DISPATCHER_FACTORY
#define DISPATCHER_FACTORY
#include <iostream>
#include <memory>

#include "../Interfaces/IDispatcher.hpp"
#include "../../../enums/Action.hpp"
#include "../../../init/Include/Interfaces/IInitializationService.hpp"

namespace dispatchers
{
    class DispatcherFactory
    {
        public:
            DispatcherFactory(std::shared_ptr<init::IInitializationService> initializer);
            ~DispatcherFactory();
            std::shared_ptr<IDispatcher> Create(enums::Action action);
        private:
            std::shared_ptr<init::IInitializationService> _initializer;

    };
    
}

#endif