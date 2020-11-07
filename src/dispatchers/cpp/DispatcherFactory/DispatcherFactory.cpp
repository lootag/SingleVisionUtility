#include "../../Include/Implementations/DispatcherFactory.hpp"
#include "../../Include/Implementations/InitializationDispatcher.hpp"
#include "../../../enums/Action.hpp"

namespace dispatchers
{
    DispatcherFactory::DispatcherFactory(std::shared_ptr<init::IInitializationService> initializer)
    {
        this->_initializer = initializer;
    }
}