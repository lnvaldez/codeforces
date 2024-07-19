#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, h, k;
    vector<tuple<int, int>> answers;
    string line;

    cin >> t;
    
    while (t--)
    {
	cin >> n >> m;
	cin.ignore();
    
	vector<string> grid(n);
        vector<tuple<int, int>> positions; 
	
	for (int i = 0; i < n; ++i)
	{
	    getline(cin, grid[i]);
	}
	
	for (int i = 0; i < n; ++i)
	{
	    for (int j = 0; j < m; ++j)  
	    {
		if (grid[i][j] == '#')
		{
		    positions.push_back(make_tuple(i, j));
		}
	    }
	}
	
	if (!positions.empty())
	{
	    auto first = positions.front();
	    auto last = positions.back();
	    
	    h = ((get<0>(first) + get<0>(last)) / 2) + 1;
	    k = ((get<1>(first) + get<1>(last)) / 2) + 1;
	    
	    answers.push_back(make_tuple(h, k));
	}
    }
    
    for (const auto& a : answers)
    {
	cout << get<0>(a) << ' ' << get<1>(a) << endl;
    }
    
}
