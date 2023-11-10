

#include "include/Penguin.hpp"
#include <SFML/Graphics.hpp>


// void drawVertex(sf::RenderWindow window)
// {
// }


int main()
{
    auto window = sf::RenderWindow{ { 1920u, 1080u }, "Potential penguin game" };
    window.setFramerateLimit(144);
	extraPenguin();
    while (window.isOpen())
    {
        window.clear();
		sf::Vertex vertex(sf::Vector2f(10.f, 50.f), sf::Color::Red, sf::Vector2f(100.f, 100.f));

		sf::VertexArray triangle(sf::Triangles, 3);

		// define the position of the triangle's points
		triangle[0].position = sf::Vector2f(500.f, 100.f);
		triangle[1].position = sf::Vector2f(100.f, 200.f);
		triangle[2].position = sf::Vector2f(100.f, 600.f);

		// define the color of the triangle's points
		triangle[0].color = sf::Color::Red;
		triangle[1].color = sf::Color::Blue;
		triangle[2].color = sf::Color::Green;
		window.draw(triangle);

		//drawVertex(window);
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        window.display();
    }
}