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