#include "Application.hpp"
#include "Widget.hpp"

UNREMARKABLE_NAMESPACE_BEGIN

Application::Application(const sf::VideoMode &videoMode, const std::string &title) :
    _renderWindow(videoMode, title) {}

Application::~Application() {}

void Application::run()
{
    while (_renderWindow.isOpen())
    {
        input();
        update();
        draw();
    }
}

sf::RenderWindow & Application::getRenderWindow()
{
    return _renderWindow;
}

void Application::input()
{
    sf::Event event;
    while (_renderWindow.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            _renderWindow.close();
        }
    }
}

void Application::update()
{
    const sf::Time deltaTime { _clock.restart() };
}

void Application::draw()
{
    _renderWindow.clear();
    _renderWindow.display();
}

UNREMARKABLE_NAMESPACE_END