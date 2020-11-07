#ifndef APPLICATION
#define APPLICATION
#include <memory>
#include "init/Include/Interfaces/IInitializationService.hpp"
#include "entities/Include/CommandLineOptions.hpp"
#include "dispatchers/Include/Implementations/DispatcherFactory.hpp"

class Application
{
    public:
        Application(std::shared_ptr<dispatchers::DispatcherFactory> dispatcherFactory);
        ~Application();
        void run(const entities::CommandLineOptions& commandLineOptions);
    private:
        std::shared_ptr<dispatchers::DispatcherFactory> _dispatcherFactory;

};


//TODO:I should change Hypodermic's include paths in order for the executable to refer to the local copy of the library.
#endif