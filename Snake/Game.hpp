#pragma once
#include <SFML/Graphics.hpp>
#include "Grid.hpp"
#include "Snake.hpp"
#include <iostream>

class Game
{
	public:
		Game();
		void Run();

	private:
		sf::RenderWindow window;
		sf::Image backgroundImage;
		sf::Texture backgroundTexture;
		sf::Sprite backgroundSprite;
		Snake snake;
		Grid grid;
		sf::Clock fpsClock;
		unsigned int frameCount;
		void Events();
		void Render(sf::RenderWindow& window);
		void Update(sf::Time deltaTime);
};

