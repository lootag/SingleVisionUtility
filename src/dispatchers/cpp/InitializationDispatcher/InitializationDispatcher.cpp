#include "../../Include/Implementations/InitializationDispatcher.hpp"

namespace dispatchers
{
    InitializationDispatcher::InitializationDispatcher(std::shared_ptr<init::IInitializationService> initializer)
    {
        this->_initializer = initializer;
    }
}