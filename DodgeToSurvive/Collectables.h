#pragma once
#include"utils.h"
#include <stdlib.h>
class Collectables
{
public:
	Collectables();
	~Collectables();
	void Draw();
	void IsHit();
	Point2f GetCoords();
	void IsEaten();
	bool is_eaten;
private:

	float xPos = (rand() % 84) * 10;
	float yPos = (rand() % 24) * 10;
	
};

