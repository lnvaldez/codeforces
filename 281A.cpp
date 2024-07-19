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