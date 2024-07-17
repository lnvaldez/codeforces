/*
Problem: 282A - Bit++
Link: https://codeforces.com/problemset/problem/282/A
Rating: 800
Tags: implementation
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x = 0;
	int n; 
	string str;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		
		if (str == "++X" || str == "X++")
		{
			x++;
		}
		else
		{
			x--;
		}
	}
	
	cout << x;
}