#include "pch.h"
#include <iostream>
using namespace std;
using namespace System;

int main()
{
	long long a = 0, b = 1;
	for (int i = 0; i < 50; i++)
	{
		cout << a << "\n";
		long long next = a + b;
		a = b;
		b = next;
	}
	return 0;
}
