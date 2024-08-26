#pragma once
#include "utils.h"
class Spike
{ 
public:
	Spike();
	
	void Fall();
	void Draw();
	bool Hit(Point2f, float);
	~Spike();


private:

	float xPos = (rand() % 84) * 10, yPos{ 500 }; 
	float fall_speed = 3;

	utils::HitInfo hit_info;


};

