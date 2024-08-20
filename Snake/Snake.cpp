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
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        direction = sf::Vector2f(0, -1);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        direction = sf::Vector2f(0, 1);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        direction = sf::Vector2f(-1, 0);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::D))
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

void Snake::Update(sf::Time deltaTime, Food& food)
{
	snakeParts.front().Update(deltaTime);
    moveTimer += deltaTime.asSeconds();

	if (snakeParts.front().GetRect().intersects(food.GetRect()))
	{
		//snakeParts.push_back(SnakePart());
		food.SetRndPos();
	}

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
