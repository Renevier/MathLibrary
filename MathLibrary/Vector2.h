#pragma once
#include "MathLibrary.h"

class MATHLIBRARY_API Vector2
{
private:
	float x;
	float y;

public:
	Vector2();
	Vector2(float _x, float _y);
	~Vector2();

	Vector2 Down(int _nb);
	Vector2 Left(int _nb);
	Vector2 Right(int _nb);
	Vector2 Up(int _nb);
	Vector2 Zero();
	float NegativeInfiny();
	float One();
	float PositiveInfinity();
	float Magnitude();
	float Normalized();
	float SqrMagnitude();
	float Equal();
	float Normalize();
	float Set();
	float ToString();
	float Angle();
	float ClampMagnitude();
	float Distance();
	float Dot();
	float Lerp();
	float LerpUnclamped();
	float Max();
	float Min();
	float MoveTowards();
	float Perpandicular();
	float Reflect();
	float Scale();
	float SignedAngle();
	float SmoothDamp();

	//Get
	float GetX();
	float GetY();
	float GetVector2();
};

