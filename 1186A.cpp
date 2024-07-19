#include <iostream>
using namespace std;

int main(){
	int n, m, k;
	cin >> n >> m >> k;
	
	if (m < n or k < n){
		cout << "No";
	} else {
		cout << "Yes";
	}
	
	
	return 0;
}