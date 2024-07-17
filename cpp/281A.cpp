/*
Problem: 281A - Word Capitalization
Link: https://codeforces.com/problemset/problem/281/A
Rating: 800
Tags: implementation, strings
*/

#include <bits/stdc++.h>
using namespace std;

const int x = 32;

int main()
{
	string word;
	cin >> word;
	
	word[0] = word[0] & ~x;
	
	cout << word << endl;
}