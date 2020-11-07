#include <iostream>

#include "Application.hpp"
#include "dispatchers/Include/Implementations/DispatcherFactory.hpp"
#include "entities/Include/CommandLineOptions.hpp"


Application::Application(std::shared_ptr<dispatchers::DispatcherFactory> dispatcherFactory)
{
    this->_dispatcherFactory = dispatcherFactory;
}

Application::~Application()
{
    
}

void Application::run(const entities::CommandLineOptions& commandLineOptions)
{
    auto dispatcher = this->_dispatcherFactory->Create(commandLineOptions.GetAction());
    dispatcher->Dispatch();
}