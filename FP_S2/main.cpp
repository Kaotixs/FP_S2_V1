#include <SFML/Graphics.hpp>
#include"Enemies.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(720, 1280), "Enemies");
	
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
		window.display();
	}

	return 0;
}