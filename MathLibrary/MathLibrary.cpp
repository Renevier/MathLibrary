#include "pch.h"
#include "MathLibrary.h"

float PI()
{
	return 3.141592653589793238462643383279502884;
}

float InvPI()
{
	return 0.0f;
}

double DegToRad(double _a)
{
	return _a * (PI() / 180);
}

double RadToDeg(double _a)
{
	return _a *(180/PI());
}

double Sin(double _x)
{
	double sign = 1;

	if (_x < 0) {
		sign = -1.0;
		_x = -_x;
	}

	if (_x > 360) _x -= int(_x / 360) * 360;
		_x *= PI() / 180.0;

	double res = 0;
	double term = _x;
	int k = 1;

	while (res + term != res)
	{
		res += term;
		k += 2;
		term *= -_x * _x / k / (k - 1);
	}

	return sign * res;
}

double Cos(double _x)
{
	if (_x < 0) 
		_x = -_x;

	if (_x > 360)
		_x -= int(_x / 360) * 360;

	_x *= PI() / 180.0;

	double res = 0;
	double term = 1;
	int k = 0;

	while (res + term != res) 
	{
		res += term;
		k += 2;
		term *= -_x * _x / k / (k - 1);
	}

	return res;
}

double Tan(double _x)
{
	return;
}

double ASin(unsigned _a)
{
	return;
}

double ACos(unsigned _a)
{
	return;
}

double ATan(unsigned _a)
{
	return;
}

double ATan2(unsigned _a)
{
	return;
}
