#pragma once
#include <SFML/Graphics.hpp>
#include <deque>
#include <iostream>

class SnakePart
{
	public:
		SnakePart(sf::Vector2f prevPos);
		void Render(sf::RenderWindow& window);
		void Update(sf::Time deltaTime);
		sf::Vector2f GetPosition();
		void SetPosition(sf::Vector2f position);
		float GetSpeed();
		sf::IntRect GetRect();
		sf::Vector2f GetLastPosition();

	private:
		float speed;
		sf::Image image;
		sf::Texture texture;
		sf::Sprite sprite;
		sf::IntRect collisionRect;
		std::deque<sf::Vector2f> positions;
		sf::Vector2f prevPosition;
};

