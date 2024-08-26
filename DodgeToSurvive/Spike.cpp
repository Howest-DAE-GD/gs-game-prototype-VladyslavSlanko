#include "pch.h"
#include "Spike.h"
#include "utils.h"#

Spike::Spike() 
{
	xPos = (rand() % 84) * 10;
	yPos = 500;

}

void Spike::Draw() 
{
	utils::DrawTriangle(Point2f(xPos, yPos), Point2f(xPos + 2.5, yPos - 5), Point2f(xPos + 5, yPos));
}

void Spike::Fall() 
{
	chance = rand() % 1000 + 1;

	if (chance > 995)
	{
		fall = true;
	}

	if (fall == true) 
	{
		yPos -= fall_speed;
	}
		

		if (yPos <= 0)
		{
			yPos = 550;
			xPos = (rand() % 84) * 10;
			fall = false;
		}
		if (fall_speed < 10)
		{
			fall_speed += 0.001;
		}
	
}
bool Spike::Hit(Point2f player, float size) 
{
	std::vector<Point2f> hitbox{
	Point2f(player.x,player.y),
	Point2f(player.x+size,player.y),
	Point2f(player.x + size,player.y+1),
	Point2f(player.x,player.y + 1),
	Point2f(player.x,player.y)
	};
	if (utils::Raycast(hitbox, Point2f(xPos, yPos), Point2f(xPos, yPos - 10), hit_info)) 
	{
		return true;
	}
	else 
	{
		return false;
	}

}
Spike::~Spike() 
{

}