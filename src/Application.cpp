#include "Application.hpp"
#include "Frame.hpp"

UNREMARKABLE_NAMESPACE_BEGIN

Application::Application(const sf::VideoMode &videoMode, const std::string &title) :
    _window(videoMode, title)
{
    
}

Application::~Application() {}

void Application::run()
{
    while (_window.isOpen())
    {
        input();
        update();
        draw();
    }
}

Frame * Application::addFrame(const sf::Vector2f &position, const sf::Vector2f &size)
{
    Frame *frame = new Frame(position, size);
    _widgets.push_back(frame);
    return frame;
}

void Application::input()
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

void Application::update()
{

}

void Application::draw()
{
    _window.clear();
    for (Widget *widget : _widgets)
    {
        widget->draw(_window, sf::RenderStates::Default);
    }
    _window.display();
}

UNREMARKABLE_NAMESPACE_END