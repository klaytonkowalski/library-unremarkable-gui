#ifndef UNREMARKABLE_WIDGET_HPP
#define UNREMARKABLE_WIDGET_HPP

#include "Utility.hpp"

UNREMARKABLE_NAMESPACE_BEGIN

class Widget : public sf::Drawable
{

    UNREMARKABLE_PUBLIC_FUNCTIONS

    virtual ~Widget();

    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const = 0;

};

UNREMARKABLE_NAMESPACE_END

#endif