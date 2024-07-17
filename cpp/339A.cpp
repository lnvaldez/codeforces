/*
Problem: 339A - Helpful Maths
Link: https://codeforces.com/problemset/problem/339/A
Rating: 800
Tags: greedy, implementation, sortings, strings
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	
	s.erase(remove(s.begin(), s.end(), '+'), s.end());
	sort(s.begin(), s.end());
	
	int size = s.length();
	
	for (int i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			cout << s[i];
		}
		else
		{
		cout << s[i] << '+';
		}
	}
}