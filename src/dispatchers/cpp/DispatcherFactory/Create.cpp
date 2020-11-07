#include "../../Include/Implementations/DispatcherFactory.hpp"
#include "../../Include/Implementations/InitializationDispatcher.hpp"
#include "../../../enums/Action.hpp"

namespace dispatchers
{
    std::shared_ptr<IDispatcher> DispatcherFactory::Create(enums::Action action)
    {
        if(action == enums::Action::initialize)
        {
            std::shared_ptr<InitializationDispatcher> initializationDispatcher = std::make_shared<InitializationDispatcher>(this->_initializer);
            return initializationDispatcher;
        }
        else
        {
            throw("The action you're requesting is not supported.");
        }
        
    }
}