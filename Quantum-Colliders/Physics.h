#ifndef PHYSICS_H
#define PHYSICS_H

#include "Object.h"

class BoundingBox : public BaseComponent<BoundingBox>
{
public:
	sf::FloatRect box;

	BoundingBox(float x, float y);
};

class Physics
{
public:

	Physics();

};

#endif