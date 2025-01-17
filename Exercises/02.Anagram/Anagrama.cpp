#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
using namespace System;

bool isAnagram(string x, string y)
{
    if (x.length() != y.length())
    {
        return false;
    }
    for (char c1 : x)
    {
        bool found = false;
        for (char c2 : y )
        {
            if (c1 == c2)
            {
                found = true;
            }
        }
        if (!found)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string wordA, wordB;
    cout << "enter your first word";
    cin >> wordA;
    cout << "enter your second word";
    cin >> wordB;
    isAnagram(wordA, wordB);
    if (isAnagram(wordA, wordB))
    {
        cout << "yes, both are anagram";
    }
    else
    {
        cout << "no, both are not anagram";
    }

    return 0;
}
