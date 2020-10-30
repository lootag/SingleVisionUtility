#ifndef APPLICATION
#define APPLICATION
#include "../bin/lib/vendor/Hypodermic/Hypodermic/Hypodermic.h"
#include "init/Include/IInitializationService.hpp"
#include "init/Include/Implementations/InitializationService.hpp"

class Application
{
    public:
        Application(/* args */);
        ~Application();
        void run();
    private:
        std::shared_ptr< Hypodermic::Container > m_container;
    
};


//TODO:I should change Hypodermic's include paths in order for the executable to refer to the local copy of the library.

#endif