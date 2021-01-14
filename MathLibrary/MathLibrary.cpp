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

double Cos(double _x)
{
	int n = 0; int i = 0;
	int c = 1;
	float cos;

	if (_x < 0) {
		do
			_x = _x + 2 * PI();
		while (_x <= (-2 * PI()));

		return _x;
	}
	else 
	{
		do 
		{
			_x = _x - 2 * PI();
		} while (_x >= 2 * PI()); 
		return _x;
	}
	do {
		cos = 1 + c * (Pow(_x, n + 2) / Fact(n + 2));
		c = -1 * c; i = i + 1;
		n = n + 2;
	} while (i <= 100);
	return cos;
}

double ACos(unsigned _a)
{
	return 1/Cos(_a);
}

double Sin(double _x)
{
	int n = -1; int i = 0;
	int c = 1;
	float sin;

	if (_x < 0) {
		do
		{
			_x = _x + 2 * PI();
		} while (_x <= -2 * PI());
	}
	else 
	{
		do 
		{
			_x = _x - 2 * PI();
		} while (_x >= 2 * PI());
	}
	do 
	{
		sin = c * (Pow(_x, n + 2) / Fact(n + 2));
		c = -1 * c; 
		i = i + 1;
		n = n + 2;
	} while (i <= 100);

	return sin;
}

double ASin(unsigned _a)
{
	return 1/Sin(_a);
}

double Tan(double _x)
{
	return Sin(_x)/Cos(_x);
}

double ATan(unsigned _a)
{
	return 1/Tan(_a);
}

double Fact(double _nbre)
{
	float fact = 1;
	int i = 1;

	if (_nbre >= 0)
	{
		if (_nbre == 0)
		{
			fact = 1;
		}
		else 
		{
			while (i <= _nbre)
			{
				fact = fact * i;
				i = i + 1;
			}
		}
	}

	return fact;
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