#include "SnakePart.hpp"

SnakePart::SnakePart()
{
	image.create(40, 40, sf::Color::White);
	texture.loadFromImage(image);
	sprite.setTexture(texture);
	sprite.setPosition(400, 300);
}

void SnakePart::Render(sf::RenderWindow& window)
{
	window.draw(sprite);
}
