#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int p, v, t;
	int answer;
	
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> p >> v >> t;
		
		if (p + v + t >= 2)
		{
			answer++;
		}
	}
	
	cout << answer;
}


