#ifndef UNREMARKABLE_MAIN_HPP
#define UNREMARKABLE_MAIN_HPP

#include "Utility.hpp"

UNREMARKABLE_NAMESPACE_BEGIN

class UNREMARKABLE_EXPORT Application
{

    UNREMARKABLE_PUBLIC_FUNCTIONS

    Application(const sf::VideoMode &videoMode, const std::string &title);
    virtual ~Application();

    void run();

    sf::RenderWindow & getRenderWindow();

    UNREMARKABLE_PRIVATE_FUNCTIONS

    void input();
    void update();
    void draw();

    UNREMARKABLE_PRIVATE_VARIABLES

    sf::RenderWindow _renderWindow;
    sf::Clock _clock;

};

UNREMARKABLE_NAMESPACE_END

#endif