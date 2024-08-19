#pragma once
#include <SFML/Graphics.hpp>

class Grid
{
	public:
		Grid();
		void Render(sf::RenderWindow& window);

	private:
		sf::Image image;
		sf::Texture texture;
		sf::Sprite sprite;
		int gridHeight = 40;
		int gridWidth = 40;
};

