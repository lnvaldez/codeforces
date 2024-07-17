/*
Problem: 791A - Bear and Big Brother
Link: https://codeforces.com/problemset/problem/791/A
Rating: 800
Tags: implementation
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	int answer = 0;
	cin >> a >> b;
	
	while(a <= b)
	{
		a = a*3;
		b = b * 2;
		answer++;
	}
	
	cout << answer;
}