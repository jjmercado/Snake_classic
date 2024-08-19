#pragma once
#include <SFML/Graphics.hpp>

class SnakePart
{
	public:
		SnakePart();
		void Render(sf::RenderWindow& window);

	private:
		sf::Image image;
		sf::Texture texture;
		sf::Sprite sprite;
};

