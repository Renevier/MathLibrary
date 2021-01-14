#include "pch.h"
#include "MathLibrary.h"

float PI()
{
	return 3.141592653589793238462643383279502884;
}

float InvPI()
{
	return 1/PI();
}

double DegToRad(double _a)
{
	return _a * (PI() / 180);
}

double RadToDeg(double _a)
{
	return _a *(180/PI());
}

double Pow(double _nbre, int _pow)
{
	double res = 0;

	if (_nbre == 0)
		return 0;

	if (_pow == 0)
		return 1;
	
	for (int i = 0; i <= _pow; i++)
		res *= _nbre;

		return res;
}

double Sqrt(double _nbre)
{
	double x1 = (_nbre * 1.0) / 2;
	double x2 = (x1 + (_nbre / x1)) / 2;

	while (x1 - x2 >= 0.0000001) 
	{
		x1 = x2;
		x2 = (x1 + (_nbre / x1)) / 2;
	}

	return x2;
}