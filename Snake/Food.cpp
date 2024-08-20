#include "Food.hpp"

Food::Food()
{
	srand(time(NULL));
	image.create(40, 40, sf::Color::White);
	texture.loadFromImage(image);
	sprite.setTexture(texture);
	sprite.setPosition(rndPos());
	collisionRect = sf::IntRect(sprite.getPosition().x, sprite.getPosition().y, 40, 40);
}

void Food::Render(sf::RenderWindow& window)
{
	window.draw(sprite);
}

void Food::Update()
{
	collisionRect = sf::IntRect(sprite.getPosition().x, sprite.getPosition().y, 40, 40);
}

sf::Vector2f Food::GetPosition()
{
    return sf::Vector2f();
}

void Food::SetPosition(sf::Vector2f position)
{
}

sf::IntRect Food::GetRect()
{
	return collisionRect;
}

void Food::SetRndPos()
{
	sprite.setPosition(rndPos());
}

sf::Vector2f Food::rndPos()
{
	return sf::Vector2f(rand() % (800 / 40) * 40, rand() % (600 / 40) * 40);
}
