#ifndef UNREMARKABLE_MAIN_HPP
#define UNREMARKABLE_MAIN_HPP

#include "unremarkable_export.h"
#include "utility.hpp"

#include <SFML/Graphics.hpp>
#include <string>

UNREMARKABLE_NAMESPACE_BEGIN

class UNREMARKABLE_EXPORT Application
{

    UNREMARKABLE_PUBLIC_FUNCTIONS

    Application(unsigned int width, unsigned int height, const std::string &title);
    Application(const Application &application) = delete;
    Application & operator=(const Application &application) = delete;
    virtual ~Application();

    void Run();

    UNREMARKABLE_PRIVATE_FUNCTIONS

    void Input();
    void Update();
    void Draw();

    UNREMARKABLE_PRIVATE_VARIABLES

    sf::RenderWindow _window;

};

UNREMARKABLE_NAMESPACE_END

#endif