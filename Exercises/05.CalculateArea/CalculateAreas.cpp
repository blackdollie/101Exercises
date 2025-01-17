#include "pch.h"
#include <iostream>
using namespace std;
using namespace System;

void calculateArea(int type, double x, double y)
{
	double area;
	switch (type)
	{
	case 1:
		area = (x * y) / 2;
		cout << "The area of the triangle is " << area;
		break;
	case 2:
		area = x * y;
		cout << "The area of the square is " << area;
		break;
	case 3:
		area = x * y;
		cout << "The area of the rectangle is: " << area;
		break;
	}
}


int main()
{
	int type, a, b;
	cout << "1: Triangle, 2: Square, 3: Rectangle\n";
	cout << "Enter the polygon to calculate their area: ";
	cin >> type;
	cout << "Enter the dimensions of the polygon: ";
	cin >> a >> b;
	calculateArea(type, a, b);
    return 0;
}
