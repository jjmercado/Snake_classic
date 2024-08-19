#include "Snake.hpp"

Snake::Snake()
{
	snakeParts.push_back(SnakePart());
    moveTimer = 0.0f;
	direction = sf::Vector2f(-1.0f, 0.0f);
}

void Snake::Events(sf::RenderWindow& window)
{
    // Hier können Sie die Richtung basierend auf Benutzereingaben ändern
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        direction = sf::Vector2f(0, -1);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        direction = sf::Vector2f(0, 1);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        direction = sf::Vector2f(-1, 0);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        direction = sf::Vector2f(1, 0);
    }
}

void Snake::Render(sf::RenderWindow& window)
{
	for (auto& part : snakeParts)
	{
		part.Render(window);
	}
}

void Snake::Update(sf::Time deltaTime)
{
    moveTimer += deltaTime.asSeconds();

    // Bewege die Schlange nur, wenn der Timer einen Schritt erreicht hat
    if (moveTimer >= 0.5f)
    {
        moveTimer = 0.0f;

        // Berechne die neue Position basierend auf der Richtung
        sf::Vector2f newPosition = snakeParts.front().GetPosition() + direction * snakeParts.front().GetSpeed();

        // Setze die neue Position
        snakeParts.front().SetPosition(newPosition);
    }
}
