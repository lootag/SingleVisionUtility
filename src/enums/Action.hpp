#ifndef ACTION
#define ACTION

#include <memory>
namespace enums
{
    enum Action
    {
        initialize = 0,
        run = 1, 
        list = 2
    };

    inline
    Action fromStringToAction(const std::string& actionString)
    {
        if (actionString == "init")
        {
            return Action::initialize;
        }
        else
        {
            throw("The action you've requested is not supported.");
        }
    }
}

#endif