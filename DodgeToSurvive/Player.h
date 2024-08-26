#pragma once
#include "utils.h"
class Player
{
public:
	Player();
	
	void MoveRight();
	void MoveLeft();
	void MoveUp();
	void MoveDown();
	~Player();
	void Draw();
	Point2f GetCoords();
	void Grow();
	int GetSize();
	void IsHit(bool);

private:
	float xPos{846 / 2}, yPos{500 / 2};
	float m_speed{ 3.f };
	float size = { 30 };
	
};

