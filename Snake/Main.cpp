#include <SFML/Graphics.hpp>
#include "SnakePart.hpp"
#include "Grid.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Snake");
	sf::Image backgroundImage;
	sf::Texture backgroundTexture;
	sf::Sprite backgroundSprite;
	SnakePart snakePart;
	Grid grid;

	backgroundImage.create(800, 600, sf::Color::Black);
	backgroundTexture.loadFromImage(backgroundImage);
	backgroundSprite.setTexture(backgroundTexture);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(backgroundSprite);
		grid.Render(window);
		window.display();
	}

	return 0;
}