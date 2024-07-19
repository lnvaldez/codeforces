#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string s;
	vector<int> a;

	cin >> n >> s;
	
	for (char c : s){
		if (c == 'n'){
			a.push_back(1);
		}
	}
	
	for (char c : s){
		if (c == 'z'){
			a.push_back(0);
		}
	}
	
	for (int num : a){
		cout << num << ' ';
	}
	
	
	return 0;
}