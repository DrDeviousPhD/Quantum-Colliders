#ifndef PRIMITIVES_H
#define PRIMITIVES_H

#include <SFML\Graphics.hpp>

#include "Graphics.h"
#include "Object.h"

class Box : public Object
{
public:

	sf::Vector2i position;


	sf::Vector2i getPos() { return position;  }
	

	Box();

};

#endif