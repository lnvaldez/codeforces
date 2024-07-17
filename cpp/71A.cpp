/*
Problem: 71A - Way Too Long Words
Link: https://codeforces.com/problemset/problem/71/A
Rating: 800
Tags: strings
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string input;
	vector<string> vec;
	
	cin >> n;
	
	for (int i = 0;  i < n;  i++)
	{
		cin >> input;
		vec.push_back(input);
	}
	
	for (auto s : vec)
	{
		int size = s.size();
		
		if (size> 10)
		{
			cout << s[0] << size - 2 << s[size - 1] << endl;
		}
		else
		{
			cout << s << endl;
		}
	}
	
}