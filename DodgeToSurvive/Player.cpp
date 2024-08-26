#include "pch.h"
#include "Player.h"
#include <iostream>
Player::Player() 
{

}

void Player::MoveRight() 
{
	xPos += m_speed;
}
void Player::MoveLeft() 
{
	xPos -= m_speed;
}
void Player::MoveDown() 
{
	yPos -= m_speed;
}
void Player::MoveUp() 
{
	yPos += m_speed;
}
Point2f Player::GetCoords() 
{
	return Point2f(xPos, yPos);
}
void Player::Grow()
{
	size += 5;
}
int Player::GetSize() {
	return size;
}

void Player::IsHit(bool hit) 
{
	if (hit) 
	{
		size -= 2.5;
	}
}

void Player::Draw() 
{
	utils::SetColor(Color4f(255, 255, 0, 1));
	utils::FillRect(xPos, yPos, size, size);
}


Player::~Player() 
{

}