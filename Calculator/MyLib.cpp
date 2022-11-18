#define MyDll_API extern "C" __declspec(dllexport)

#include "MyLib.h"

MyDll_API double Sum(double a, double b)
{
	return a+b;
}

MyDll_API double Min(double a, double b)
{
	return a-b;
}

MyDll_API double Mult(double a, double b)
{
	return a*b;
}

MyDll_API double Div(double a, double b)
{
	return a/b;
}
