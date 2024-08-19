#include "Grid.hpp"

Grid::Grid()
{
	image.create(1, 1, sf::Color::White);
	texture.loadFromImage(image);
	sprite.setTexture(texture);
}

void Grid::Render(sf::RenderWindow& window)
{
    sf::VertexArray lines(sf::Lines);

    // Vertikale Linien
    for (int x = 0; x < window.getSize().x; x += gridWidth)
    {
        lines.append(sf::Vertex(sf::Vector2f(x, 0), sf::Color::White));
        lines.append(sf::Vertex(sf::Vector2f(x, window.getSize().y), sf::Color::White));
    }

    // Horizontale Linien
    for (int y = 40; y < window.getSize().y; y += gridHeight)
    {
        lines.append(sf::Vertex(sf::Vector2f(0, y), sf::Color::White));
        lines.append(sf::Vertex(sf::Vector2f(window.getSize().x, y), sf::Color::White));
    }

    window.draw(lines);
}
