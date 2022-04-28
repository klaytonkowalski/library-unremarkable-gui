#ifndef UNREMARKABLE_MAIN_HPP
#define UNREMARKABLE_MAIN_HPP

#include "Utility.hpp"

UNREMARKABLE_NAMESPACE_BEGIN

class Widget;
class Frame;

class UNREMARKABLE_EXPORT Application
{

    UNREMARKABLE_PUBLIC_FUNCTIONS

    Application(const sf::VideoMode &videoMode, const std::string &title);
    virtual ~Application();

    void run();

    Frame * addFrame(const sf::Vector2f &position, const sf::Vector2f &size);

    UNREMARKABLE_PRIVATE_FUNCTIONS

    void input();
    void update();
    void draw();

    UNREMARKABLE_PRIVATE_VARIABLES

    sf::RenderWindow _window;
    std::vector<Widget *> _widgets;

};

UNREMARKABLE_NAMESPACE_END

#endif