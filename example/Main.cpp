#include "Application.hpp"

Unremarkable::Application *application {};

Unremarkable::Frame *mainMenuFrame {};

bool initialize()
{
    application = new Unremarkable::Application(sf::VideoMode(960, 540), "Unremarkable Example");
    mainMenuFrame = application->addFrame(sf::Vector2f(1.0f, 1.0f), sf::Vector2f(958.0f, 48.0f));
    return true;
}

void terminate()
{
    if (application)
    {
        delete application;
    }
}

int main(int argc, char *argv[])
{
    if (initialize())
    {
        application->run();
    }
    terminate();
    return 0;
}