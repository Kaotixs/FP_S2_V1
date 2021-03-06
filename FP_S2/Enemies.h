#pragma once

#include <SFML/Graphics.hpp>

class Enemies : public sf::RectangleShape
{
public:
	Enemies(sf::Color const &newColor, sf::Vector2f const &size, sf::Vector2f const &pos)
	{
		this->setFillColor(newColor);
		this->setSize(size);
		this->setPosition(pos);
	}

	void setColor(sf::Color const &new_color) {
		setFillColor(new_color);
	}

	void setSize(string size) {
		setSize(size);
	}

	Enemies Spawn(sf::Color const enemy_color, double enemy_size_x, double enemy_size_y,
		double enemy_coord_x, double enemy_coord_y);
};