#pragma once

#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)
#endif

//trigonometrie

MATHLIBRARY_API float PI();
MATHLIBRARY_API float InvPI();
MATHLIBRARY_API double DegToRad(double _a);
MATHLIBRARY_API double RadToDeg(double _a);
MATHLIBRARY_API double Sin(double _x);
MATHLIBRARY_API double Cos(double _x);
MATHLIBRARY_API double Tan(double _x);
MATHLIBRARY_API double ASin(unsigned _a);
MATHLIBRARY_API double ACos(unsigned _a);
MATHLIBRARY_API double ATan(unsigned _a);
MATHLIBRARY_API double ATan2(unsigned _a);