#include <iostream>
#include <memory>
#include <string>
#include "Application.hpp"
#include "init/Include/Interfaces/IInitializationService.hpp"
#include "init/Include/Implementations/InitializationService.hpp"
#include "vendor/Hypodermic/Hypodermic/Hypodermic.h"
#include "dispatchers/Include/Implementations/DispatcherFactory.hpp"
#include "enums/Action.hpp"
#include "entities/Include/CommandLineOptions.hpp"

std::shared_ptr<Application> resolveDependencies()
{
    std::shared_ptr<Hypodermic::Container> m_container;
    Hypodermic::ContainerBuilder builder;
    builder.registerType<init::InitializationService>().as<init::IInitializationService>();
    m_container = builder.build();
    auto initializer = m_container->resolve<init::IInitializationService>();
    std::shared_ptr<dispatchers::DispatcherFactory> dispatcherFactory = std::make_shared<dispatchers::DispatcherFactory>(initializer);
    std::shared_ptr<Application> app = std::make_shared<Application>(dispatcherFactory);
    return app;
}

bool commandLineArgumentsAreValid(int argc, char* argv[])
{
    int numberOfCommandLineArguments = 2;
    if (argc != numberOfCommandLineArguments)
    {
        std::cout << "svu takes extaly 1 argument." << std::endl;
        return false;
    }
    if(argv[1] != std::string("init"))
    {
        std::cout << "unknown argument" << std::endl;
        return false;
    }
    return true;

}

int main(int argc, char* argv[])
{
    enums::Action action;
    if(commandLineArgumentsAreValid(argc, argv))
    {
        action = enums::fromStringToAction(argv[1]);
        std::shared_ptr<Application> app = resolveDependencies();
        std::unique_ptr<entities::CommandLineOptions> commandLineOptions = std::make_unique<entities::CommandLineOptions>(action);
        app->run(*commandLineOptions);
    }
    else
    {
        exit(-1);
    }
    
}



