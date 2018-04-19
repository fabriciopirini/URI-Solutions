#include <iostream>

using namespace std;

int josephus(int n, int interval) {
	return (n > 1 ? (josephus(n - 1, interval) + interval - 1) % n + 1 : 1);
}

int main() {
	int NC, n, k;
	cin >> NC;

	for(int i = NC; NC > 0; --NC) {
		cin >> n >> k;
		cout << "Case " << i - (NC - 1) << ": " << josephus(n, k) << endl;
	}

	return 0;
}
