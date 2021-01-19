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

	double Magnitude();

	Vector2 Min(Vector2 _vector);
	Vector2 Max(Vector2 _vector);

	Vector2 Down(int _nb);
	Vector2 Left(int _nb);
	Vector2 Right(int _nb);
	Vector2 Up(int _nb);

	void Zero();
	void One();
	void Normalize();

	Vector2 Dot(Vector2 _vector);

	bool Equal(Vector2 _vector);
	double SqrMagnitude();

	Vector2 Normalized();
	//ToString();

	float NegativeInfiny();
	float PositiveInfinity();
	
	float Set();
	float Angle();
	float ClampMagnitude();
	float Distance();
	float Lerp();
	float LerpUnclamped();
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

