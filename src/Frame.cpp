#include "Frame.hpp"

UNREMARKABLE_NAMESPACE_BEGIN

Frame::Frame(const sf::Vector2f &position, const sf::Vector2f &size) :
    _outline(size)
{
    _outline.setPosition(position);
    _outline.setFillColor(sf::Color::Black);
    _outline.setOutlineColor(sf::Color::Green);
    _outline.setOutlineThickness(1);
}

Frame::~Frame() {}

void Frame::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(_outline);
}

UNREMARKABLE_NAMESPACE_END