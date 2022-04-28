#include "application.hpp"

UNREMARKABLE_NAMESPACE_BEGIN

Application::Application(unsigned int width, unsigned int height, const std::string &title) :
    _window(sf::VideoMode(width, height), title)
{
    
}

Application::~Application() {}

void Application::Run()
{
    while (_window.isOpen())
    {
        Input();
        Update();
        Draw();
    }
}

void Application::Input()
{
    sf::Event event;
    while (_window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            _window.close();
        }
    }
}

void Application::Update()
{

}

void Application::Draw()
{
    _window.clear();
    sf::RectangleShape shape({ 20.0, 20.0 });
    _window.draw(shape);
    _window.display();
}

UNREMARKABLE_NAMESPACE_END