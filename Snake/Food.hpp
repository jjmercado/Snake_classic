#pragma once
#include <SFML/Graphics.hpp>

class Food
{
	public:
		Food();
		void Render(sf::RenderWindow& window);
		sf::Vector2f GetPosition();
		void SetPosition(sf::Vector2f position);
		sf::IntRect GetRect();
		void SetRndPos();

	private:
		sf::Vector2f position;
		sf::Image image;
		sf::Texture texture;
		sf::Sprite sprite;
		sf::Vector2f rndPos();
		sf::IntRect collisionRect;
};

