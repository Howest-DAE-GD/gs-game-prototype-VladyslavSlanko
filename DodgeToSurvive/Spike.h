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

	float xPos, yPos; 
	float fall_speed = 3;
	int chance{};
	bool fall = false;
	utils::HitInfo hit_info;
	

};

