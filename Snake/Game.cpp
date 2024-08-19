#include "Game.hpp"

Game::Game() : window(sf::VideoMode(800, 600), "Snake")
{
	backgroundImage.create(800, 600, sf::Color::Black);
	backgroundTexture.loadFromImage(backgroundImage);
	backgroundSprite.setTexture(backgroundTexture);
	frameCount = 0;
}

void Game::Run()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	sf::Time TimePerFrame = sf::seconds(1.f / 60.f);

	while (window.isOpen())
	{
		sf::Time deltaTime = clock.restart();
		timeSinceLastUpdate += deltaTime;

		while (timeSinceLastUpdate > TimePerFrame)
		{
			timeSinceLastUpdate -= TimePerFrame;
			Events();
			Update(TimePerFrame);
			Render(window);
			frameCount++;
			if (fpsClock.getElapsedTime().asSeconds() >= 1.0f)
			{
				std::cout << "FPS: " << frameCount << std::endl;
				frameCount = 0;
				fpsClock.restart();
			}
		}
	}
}

void Game::Events()
{
}

void Game::Render(sf::RenderWindow& window)
{
	window.clear();
	window.draw(backgroundSprite);
	grid.Render(window);
	window.display();
}

void Game::Update(sf::Time time)
{
}
