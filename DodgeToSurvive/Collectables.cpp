#include "pch.h"
#include "Collectables.h"
#include <iostream>
Collectables::Collectables() 
{

}

void Collectables::Draw() 
{
	utils::SetColor(Color4f(155, 255, 255, 1));
	utils::FillRect(xPos, yPos , 10.f, 10.f);
}

void Collectables::IsEaten() 
{
	if (!is_eaten) 
	{
		Collectables::Draw();
	}
	else 
	{
		xPos = (rand() % 84) * 10;
		yPos = (rand() % 24) * 10;
		is_eaten = false;
	}
}

Point2f Collectables::GetCoords() 
{
	return Point2f(xPos, yPos);
}
  
Collectables::~Collectables() 
{

}