#include <bits/stdc++.h>
using namespace std;
#define uc unsigned char

int unique(string str)
{
	unordered_set<char> s;
	
	for (int i = 0; i < str.size(); i++)
	{
		s.insert(str[i]);
	}
	
	return s.size();
}

int main() 
{
	string s;
	int answer;
	cin >> s;
	answer = unique(s);
	
	if (answer % 2 == 0)
	{
		cout << "CHAT WITH HER!";
	}
	else
	{
		cout << "IGNORE HIM!";
	}
}