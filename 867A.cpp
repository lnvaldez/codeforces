#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, s_n, s_f;
	s_n = 0;
	s_f = 0;
	string s;
	cin >> n >> s;
	
	for (int i = 0; i < n; ++i){
		if (s[i] == 'S' and s[i + 1] == 'F'){
			s_n++;
		} else if (s[i] == 'F' and s[i + 1] == 'S'){
			s_f++;
		}
	}
	
	if (s_n > s_f){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	
	
	return 0;
}