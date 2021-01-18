#pragma once

#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)
#endif

//trigonometrie

MATHLIBRARY_API double PI();
MATHLIBRARY_API double InvPI();
MATHLIBRARY_API double DegToRad(double _a);
MATHLIBRARY_API double RadToDeg(double _a);
MATHLIBRARY_API double Cos(double _x);
MATHLIBRARY_API double ACos(unsigned _a);
MATHLIBRARY_API double Sin(double _x);
MATHLIBRARY_API double ASin(unsigned _a);
MATHLIBRARY_API double Tan(double _x);
MATHLIBRARY_API double ATan(unsigned _a);
MATHLIBRARY_API double ATan2(unsigned _a);

//Math
MATHLIBRARY_API double Fact(double _nbre);
MATHLIBRARY_API double Pow(double _nbre, int _pow);
MATHLIBRARY_API double Sqrt(double _nbre);
MATHLIBRARY_API double Exp(double _nbre);
//MATHLIBRARY_API double Log(double _nbre);

//Interpolation
MATHLIBRARY_API double Clamp(double _min, double _max, double _nb);
MATHLIBRARY_API double Lerp(double _a, double _b, double _t);
//MATHLIBRARY_API double LerpAngle(double _a, double _b, double _t);
MATHLIBRARY_API double LerpUnclamped(double _a, double _b, double _t);
MATHLIBRARY_API double LerpUnclamped(double _a, double _b, double _t);