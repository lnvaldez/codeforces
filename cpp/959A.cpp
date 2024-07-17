/*
Problem: 959A – Mahmoud and Ehab and the Even-Odd Game
Link: https://codeforces.com/problemset/problem/959/A
Rating: 800
Tags: games, math
*/

#include <bits/stdc++.h>
using namespace std; 

int main(){
	int n;
	cin >> n;
	
	if (n % 2 == 0){
		cout << "Mahmoud";
	} else {
		cout << "Ehab";
	}
	
	
	return 0;
}