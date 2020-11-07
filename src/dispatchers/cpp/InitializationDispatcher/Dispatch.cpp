#include "../../Include/Implementations/InitializationDispatcher.hpp"

namespace dispatchers
{
    void InitializationDispatcher::Dispatch()
    {
        this->_initializer->Initialize();
    }
}