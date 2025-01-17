#include "pch.h"
#include <iostream>
using namespace std;
using namespace System;

bool isPrime(int x)
{
	if (x < 2)
	{
		return false;
	}
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}



int main()
{
	int x;
	cout << "Enter a number to check if its a prime: ";
	cin >> x;
	isPrime(x);
	cout << (isPrime(x) ? "Yes" : "No") ;
	cout << "\n";
	for (int i = 0; i < 100; i++)
	{
		if (isPrime(i))
		{
			cout << i << "\n";
		}
	}
    return 0;
}
