#include "Snake.hpp"

Snake::Snake()
{
	snakeParts.push_back(SnakePart(sf::Vector2f(400, 280)));
    moveTimer = 0.0f;
	direction = sf::Vector2f(-1.0f, 0.0f);
}

void Snake::Events(sf::RenderWindow& window)
{
	if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::W)) && direction != sf::Vector2f(0, 1))
    {
        direction = sf::Vector2f(0, -1);
    }
	else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::S)) && direction != sf::Vector2f(0, -1))
    {
        direction = sf::Vector2f(0, 1);
    }
	else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::A)) && direction != sf::Vector2f(1, 0))
    {
        direction = sf::Vector2f(-1, 0);
    }
	else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::D)) && direction != sf::Vector2f(-1, 0))
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
	if (!IsOutOfBounds() && !IsCollidingWithSelf())
	{
        for (auto& bodyPart : snakeParts)
        {
            bodyPart.Update(deltaTime);
        }

	    for (auto it = std::next(snakeParts.begin()); it != snakeParts.end(); ++it)
	    {
			prevPosition = std::prev(it)->GetLastPosition();
			it->SetPosition(prevPosition);
	    }

        moveTimer += deltaTime.asSeconds();

	    if (snakeParts.front().GetRect().intersects(food.GetRect()))
	    {
		    AddPart();
		    food.SetRndPos();
	    }

        // Bewege die Schlange nur, wenn der Timer einen Schritt erreicht hat
        if (moveTimer >= 0.2f)
        {
            moveTimer = 0.0f;

            // Berechne die neue Position basierend auf der Richtung
            sf::Vector2f newPosition = snakeParts.front().GetPosition() + direction * snakeParts.front().GetSpeed();

            // Setze die neue Position
            snakeParts.front().SetPosition(newPosition);
        }
	}
	else
	{
		Reset();
	}
}

void Snake::AddPart()
{
	auto itr = snakeParts.end();
    sf::Vector2f pos;
    if (snakeParts.size() <= 1)
    {
        pos = std::prev(itr)->GetLastPosition();
    }
    else
    {
	    pos = std::prev(itr, 2)->GetLastPosition();
    }
	snakeParts.push_back(SnakePart(pos));
}

bool Snake::IsOutOfBounds()
{
	if (snakeParts.front().GetPosition().x < 0 || snakeParts.front().GetPosition().x >= 800 || snakeParts.front().GetPosition().y < 0 || snakeParts.front().GetPosition().y >= 600)
	{
		return true;
	}
    return false;
}

bool Snake::IsCollidingWithSelf()
{
	for (auto it = std::next(snakeParts.begin()); it != snakeParts.end(); ++it)
	{
		if (snakeParts.front().GetRect().intersects(it->GetRect()))
		{
			return true;
		}
	}
    return false;
}

void Snake::Reset()
{
	snakeParts.clear();
	snakeParts.push_back(SnakePart(sf::Vector2f(400, 280)));
	moveTimer = 0.0f;
	direction = sf::Vector2f(-1.0f, 0.0f);
}
