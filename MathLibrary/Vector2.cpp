#include "pch.h"
#include "Vector2.h"

Vector2::Vector2()
{
	this->x = 0.f;
	this->y = 0.f;
}

Vector2::Vector2(float _x, float _y)
{
	this->x = _x;
	this->y = _y;
}

Vector2::~Vector2()
{
}

Vector2 Vector2::Down(int _nb)
{
	return Vector2(this->x, this->y - _nb);
}

Vector2 Vector2::Left(int _nb)
{
	return Vector2(this->x - _nb, this->y);
}

Vector2 Vector2::Right(int _nb)
{
	return Vector2(this->x + _nb, this->y);
}

Vector2 Vector2::Up(int _nb)
{
	return Vector2(this->x, this->y + _nb);
}

Vector2 Vector2::Zero()
{
	return Vector2(0, 0);
}
