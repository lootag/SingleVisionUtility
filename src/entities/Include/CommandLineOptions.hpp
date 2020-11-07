#ifndef COMMAND_LINE_OPTIONS
#define COMMAND_LINE_OPTIONS
#include "../../enums/Action.hpp"

namespace entities
{
    class CommandLineOptions
    {
        
        public:
            CommandLineOptions(enums::Action action);
            ~CommandLineOptions();
            enums::Action GetAction() const;
            bool Validate() const;
            
        private:
            enums::Action action;
    };
}


#endif