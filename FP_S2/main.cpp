#include "standard_dependency.h"
#include"Enemies.h"



int main()
{
	time_t realtime;
	long int last_time = 0;
	float speed = 0.25;
	sf::RenderWindow window(sf::VideoMode(720, 900), "Space Andies");
	
	Enemies enemy1(sf::Color::Red, sf::Vector2f(30,20), sf::Vector2f(0, 0));
	Enemies enemy2(sf::Color::Cyan, sf::Vector2f(30, 20), sf::Vector2f(200, 0));
	Enemies enemy3(sf::Color::Green, sf::Vector2f(30, 20), sf::Vector2f(100, 0));
	Enemies enemy4(sf::Color::White, sf::Vector2f(30, 20), sf::Vector2f(400, 0));
	Enemies enemy5(sf::Color::Yellow, sf::Vector2f(30, 20), sf::Vector2f(500, 0));
	//sf::CircleShape shape(10.f);
	//shape.setFillColor(sf::Color::Cyan);

	Enemies g;
	
	
	while (window.isOpen())
	{
		//cout << "Event is running!" << endl;
		int i = 0;


		realtime = std::time(nullptr);
		//cout << realtime << endl;
		//cout << last_time << endl;

		//if (realtime != last_time) {
			cout << realtime << endl;

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
			window.draw(enemy4);
			window.draw(enemy5);

			//window.draw(enemy1);
			window.display();


			enemy1.move(sf::Vector2f(0, speed));
			enemy2.move(sf::Vector2f(0, speed));
			enemy3.move(sf::Vector2f(0, speed));
			enemy4.move(sf::Vector2f(0, speed));
			enemy5.move(sf::Vector2f(0, speed));
		//}
		//last_time = realtime;
	}
	

	


	return 0;
}