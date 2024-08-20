#include "Grid.hpp"

Grid::Grid()
{
	gridHeight = 40;
	gridWidth = 40;
	color = sf::Color(50,50,50);
}

void Grid::Render(sf::RenderWindow& window)
{
    sf::VertexArray lines(sf::Lines);

    // Vertikale Linien
    for (int x = 0; x < window.getSize().x; x += gridWidth)
    {
        lines.append(sf::Vertex(sf::Vector2f(x, 0), color));
        lines.append(sf::Vertex(sf::Vector2f(x, window.getSize().y), color));
    }

    // Horizontale Linien
    for (int y = 40; y < window.getSize().y; y += gridHeight)
    {
        lines.append(sf::Vertex(sf::Vector2f(0, y), color));
        lines.append(sf::Vertex(sf::Vector2f(window.getSize().x, y), color));
    }

    window.draw(lines);
}
