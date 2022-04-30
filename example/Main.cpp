#include "Application.hpp"

Unremarkable::Application *application {};

bool initialize()
{
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