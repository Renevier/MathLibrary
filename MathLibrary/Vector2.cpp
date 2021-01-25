#include "pch.h"
#include "Vector2.h"

Vector2::Vector2()
{
	this->x = 0.f;
	this->y = 0.f;
}

Vector2::Vector2(double _x, double _y)
{
	this->x = _x;
	this->y = _y;
}

Vector2::~Vector2()
{
}

double Vector2::Magnitude()
{
	return Sqrt(Pow(this->x, 2) + Pow(this->y, 2));
}

Vector2 Vector2::Min(Vector2 _vector)
{
	Vector2 myVector;

	if (this->x > _vector.x)
		myVector.x = _vector.x;
	else
		myVector.x = this->x;

	if (this->y > _vector.y)
		myVector.y = _vector.y;
	else
		myVector.y = this->y;

	return myVector;
}

Vector2 Vector2::Max(Vector2 _vector)
{
	Vector2 myVector;

	if (this->x < _vector.x)
		myVector.x = _vector.x;
	else
		myVector.x = this->x;

	if (this->y < _vector.y)
		myVector.y = _vector.y;
	else
		myVector.y = this->y;

	return myVector;
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

void Vector2::Zero()
{
	this->x = 0;
	this->y = 0;
}

void Vector2::One()
{
	this->x = 1;
	this->y = 1;
}

void Vector2::Normalize()
{
	this->x /= this->Magnitude();
	this->y /= this->Magnitude();
}

Vector2 Vector2::Dot(Vector2 _vector)
{
	return Vector2(this->x * _vector.x, this->y * _vector.y);
}

bool Vector2::Equal(Vector2 _vector)
{
	if(this->Magnitude() == _vector.Magnitude())
		return true;
	
	return false;
}

double Vector2::SqrMagnitude()
{
	return Sqrt(this->Magnitude());
}

Vector2 Vector2::Normalized()
{
	Vector2 myVector;

	myVector.Normalize();

	return myVector;
}

Vector2 Vector2::NegativeInfiny()
{
	return Vector2(negativeInfiny(), negativeInfiny());
}

Vector2 Vector2::PositiveInfinity()
{
	return Vector2(positiveInfinity(), positiveInfinity());
}

double Vector2::GetX()
{
	return this->x;
}

double Vector2::GetY()
{
	return this->y;
}

Vector2 Vector2::GetVector2()
{
	return Vector2(this->x, this->y);
}

void Vector2::Set(double _x, double _y)
{
	this->x = _x;
	this->y = _y;
}
