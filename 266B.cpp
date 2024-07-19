#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, t;
	string s;
	cin >> n >> t;
	cin >> s;
	
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == 'B' && s[j + 1] == 'G')
			{
				swap(s[j + 1], s[j]);
				j++;
			}
		}
	}
	
	cout << s;
}