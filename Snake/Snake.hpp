#pragma once
#include <SFML/Graphics.hpp>
#include "SnakePart.hpp"
#include <deque>
#include <iostream>

class Snake
{
	public:
		Snake();
		void Events(sf::RenderWindow& window);
		void Render(sf::RenderWindow& window);
		void Update(sf::Time deltaTime);

	private:
		std::deque<SnakePart> snakeParts;
		sf::Vector2f newPosition;
		float moveTimer;
		sf::Vector2f direction;
};

