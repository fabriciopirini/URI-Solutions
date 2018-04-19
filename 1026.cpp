#include <iostream>

using namespace std;

int main() {
	unsigned long long entrada1, entrada2;

	while(cin >> entrada1 >> entrada2){
		cout << (entrada1 ^ entrada2) << endl;
	}

	return 0;
}
