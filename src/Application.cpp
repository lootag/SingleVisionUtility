#include <iostream>

#include "Application.hpp"


Application::Application()
{
    Hypodermic::ContainerBuilder builder;
    builder.registerType< init::InitializationService >()
        .as < init::IInitializationService >();
    
    this->m_container = builder.build();
}

Application::~Application()
{

}

void Application::run()
{
    auto initializer = this->m_container->resolve < init::IInitializationService >();
    initializer->Initialize();
}