#pragma comment( lib, "MyLib" )
#pragma once
#include<iostream>
using namespace std;

#include"../Calculator/MyLib.h"

int main()
{
	int a = 10, b = 0;
	cout<<"Sum: "<<Sum(a, b)<<endl;
	cout << "Min: " << Min(a, b) << endl;
	cout << "Mult: " << Mult(a, b) << endl;
	cout << "Div: " << Div(a, b) << endl;
}