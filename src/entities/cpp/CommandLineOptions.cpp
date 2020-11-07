#include <iostream>
#include "../Include/CommandLineOptions.hpp"
#include "../../enums/Action.hpp"

namespace entities
{
    CommandLineOptions::CommandLineOptions(enums::Action action)
    {
        this->action = action;
    }

    enums::Action CommandLineOptions::GetAction() const
    {
        return this->action;
    }

    CommandLineOptions::~CommandLineOptions()
    {
        
    }
}