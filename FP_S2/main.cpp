#include <SFML/Graphics.hpp>
#include"Enemies.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(720, 1280), "Space Andies");
	
	Enemies enemy1(sf::Color::Red, sf::Vector2f(30, 20), sf::Vector2f(0, 0));
	Enemies enemy2(sf::Color::Cyan, sf::Vector2f(30, 20), sf::Vector2f(200, 0));
	Enemies enemy3(sf::Color::Green, sf::Vector2f(30, 20), sf::Vector2f(500, 0));
	//sf::CircleShape shape(10.f);
	//shape.setFillColor(sf::Color::Cyan);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		//window.draw(shape);
		window.draw(enemy1);
		window.draw(enemy2);
		window.draw(enemy3);
		window.display();
	}

	return 0;
}