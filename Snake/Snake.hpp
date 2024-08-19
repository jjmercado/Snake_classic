#pragma once
#include <SFML/Graphics.hpp>
#include "SnakePart.hpp"

class Snake
{
	public:
		Snake();
		void Events(sf::RenderWindow& window);
		void Render(sf::RenderWindow& window);
		void Update();
};

