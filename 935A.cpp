#include <bits/stdc++.h>
using namespace std; 

int main() {
    int n;
	int c = 0;
    cin >> n;
    
	for (int i = 1; i < n; ++i){
		int x = n - i;
		
		if (x % i == 0) {
			c++;
		}
	}
	
	cout << c;
	
	return 0;
}