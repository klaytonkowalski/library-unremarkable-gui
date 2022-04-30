#ifndef UNREMARKABLE_WIDGET_HPP
#define UNREMARKABLE_WIDGET_HPP

#include "Utility.hpp"

UNREMARKABLE_NAMESPACE_BEGIN

class Widget : public sf::Drawable
{

    UNREMARKABLE_PUBLIC_FUNCTIONS

    Widget(const sf::Vector2f &position, const sf::Vector2f &size);

    virtual ~Widget();

    virtual void input(const sf::Event &event) = 0;

    virtual void update(sf::Time deltaTime) = 0;

    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const = 0;

    UNREMARKABLE_PRIVATE_VARIABLES

    sf::Vector2f _position;

    sf::Vector2f _size;

};

UNREMARKABLE_NAMESPACE_END

#endif