#ifndef UNREMARKABLE_FRAME_HPP
#define UNREMARKABLE_FRAME_HPP

#include "Widget.hpp"

UNREMARKABLE_NAMESPACE_BEGIN

class UNREMARKABLE_EXPORT Frame : public Widget
{

    UNREMARKABLE_PUBLIC_FUNCTIONS

    Frame(const sf::Vector2f &position, const sf::Vector2f &size);
    virtual ~Frame();

    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

    UNREMARKABLE_PRIVATE_VARIABLES

    sf::RectangleShape _outline;

};

UNREMARKABLE_NAMESPACE_END

#endif