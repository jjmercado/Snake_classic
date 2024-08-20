#include "SnakePart.hpp"

SnakePart::SnakePart()
{
	image.create(40, 40, sf::Color::White);
	texture.loadFromImage(image);
	sprite.setTexture(texture);
	sprite.setPosition(400, 280);
	speed = 40;
	collisionRect = sf::IntRect(sprite.getPosition().x, sprite.getPosition().y, 40, 40);
}

void SnakePart::Render(sf::RenderWindow& window)
{
	window.draw(sprite);
}

void SnakePart::Update(sf::Time deltaTime)
{
	collisionRect = sf::IntRect(sprite.getPosition().x, sprite.getPosition().y, 40, 40);
}

sf::Vector2f SnakePart::GetPosition()
{
	return sprite.getPosition();
}

void SnakePart::SetPosition(sf::Vector2f position)
{
	sprite.setPosition(position);
}

float SnakePart::GetSpeed()
{
	return speed;
}

sf::IntRect SnakePart::GetRect()
{
	return collisionRect;
}
