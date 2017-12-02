#include "Enemies.h"

Enemies Enemies::Spawn(sf::Color enemy_color, double enemy_size_x, double enemy_size_y,
	double enemy_coord_x, double enemy_coord_y)
{
	Enemies enemy_object(enemy_color, sf::Vector2f(enemy_size_x, enemy_size_y), 
					sf::Vector2f(enemy_coord_x, enemy_coord_y));
	
	return enemy_object;
}

