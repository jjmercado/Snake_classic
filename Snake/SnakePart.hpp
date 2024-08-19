#pragma once
#include <SFML/Graphics.hpp>

class SnakePart
{
	public:
		SnakePart();
		void Render(sf::RenderWindow& window);
		sf::Vector2f GetPosition();
		void SetPosition(sf::Vector2f position);
		float GetSpeed();

	private:
		sf::Image image;
		sf::Texture texture;
		sf::Sprite sprite;
		float speed;
};

