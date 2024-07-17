/*
Problem: 266A - Stones on the Table
Link: https://codeforces.com/problemset/problem/266/A
Rating: 800
Tags: implementation
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, a(0);
	string s;
	
	cin >> n;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == s[i + 1])
		{
			a++;
		}
	}
	cout << a << '\n';
}