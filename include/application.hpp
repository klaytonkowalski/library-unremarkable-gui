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

#ifndef UNREMARKABLE_MAIN_HPP
#define UNREMARKABLE_MAIN_HPP

#include "unremarkable_export.h"
#include "utility.hpp"

#include <SFML/Graphics.hpp>

#include <string>

///////////////////////////////////////////////////////////////////////////////
// CONTAINERS
///////////////////////////////////////////////////////////////////////////////

UNREMARKABLE_NAMESPACE_BEGIN

class UNREMARKABLE_EXPORT Application
{

    UNREMARKABLE_PUBLIC_FUNCTIONS
    
    Application(unsigned int width, unsigned int height, const std::string &title);
    virtual ~Application();

    void Run();

    UNREMARKABLE_PRIVATE_FUNCTIONS

    void Input();
    void Update();
    void Draw();

    UNREMARKABLE_PRIVATE_VARIABLES

    sf::RenderWindow window;

};

UNREMARKABLE_NAMESPACE_END

#endif