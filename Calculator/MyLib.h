#pragma once
#include<iostream>
using namespace std;
#ifndef MyDll_API
#define MyDll_API extern "C" __declspec(dllimport)
#endif

MyDll_API double Sum(double,double);
MyDll_API double Min(double, double);
MyDll_API double Mult(double, double);
MyDll_API double Div(double, double);