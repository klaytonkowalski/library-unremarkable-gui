///////////////////////////////////////////////////////////////////////////////
// LICENSE
///////////////////////////////////////////////////////////////////////////////

// MIT License

// Copyright (c) 2022 Klayton Kowalski

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

// https://github.com/klaytonkowalski/library-unremarkable-gui

///////////////////////////////////////////////////////////////////////////////
// DEPENDENCIES
///////////////////////////////////////////////////////////////////////////////

#include "application.hpp"

///////////////////////////////////////////////////////////////////////////////
// FUNCTIONS
///////////////////////////////////////////////////////////////////////////////

UNREMARKABLE_NAMESPACE_BEGIN

Application::Application(unsigned int width, unsigned int height, const std::string &title) :
    window(sf::VideoMode(width, height), title)
{
    
}

Application::~Application() {}

void Application::Run()
{
    while (window.isOpen())
    {
        Input();
        Update();
        Draw();
    }
}

void Application::Input()
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            window.close();
        }
    }
}

void Application::Update()
{

}

void Application::Draw()
{
    window.clear();
    window.display();
}

UNREMARKABLE_NAMESPACE_END