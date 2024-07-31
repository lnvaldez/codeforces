#include <iostream>
#include <map>
using namespace std; 

int main() {
	int n; 
	string gem;
	cin >> n;

	map<string, string> gems = {
		{"purple" , "Power"},
		{"green" , "Time"},
		{"blue" , "Space"},
		{"orange" , "Soul"}, 
		{"red" , "Reality"}, 
		{"yellow" , "Mind"}
	};

	for (int i = 0; i < n; ++i) {
		cin >> gem; 

		auto it = gems.find(gem);
		gems.erase(it);
	}

	cout << gems.size() << endl;

	for (const auto &gem : gems) {
		cout << gem.second << endl;
	}

	return 0;
}