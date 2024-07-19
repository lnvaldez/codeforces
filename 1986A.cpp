#include <bits/stdc++.h>
using namespace std;

int distance(int x1, int x2, int x3)
{
	int a1, a2, a3;
	vector<int> vi;
	
	a1 = abs(x1 - x1) + abs(x2 - x1) + abs(x3 - x1);
	a2 = abs(x1 - x2) + abs(x2 - x2) + abs(x3 - x2);
	a3 = abs(x1 - x3) + abs(x2 - x3) + abs(x3 - x3);
	
	vi.push_back(a1);
	vi.push_back(a2);
	vi.push_back(a3);
	
	return *min_element(vi.begin(), vi.end());
}

int main()
{
	int t, x1, x2, x3;
	vector<int> ans;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> x1 >> x2 >> x3;
		int a = distance(x1, x2, x3);
		ans.push_back(a);
	}
	
	for (int j = 0; j < ans.size(); j++)
	{
		cout << ans[j] << '\n';
	}
}