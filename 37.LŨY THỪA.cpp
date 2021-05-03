#include <iostream>

using namespace std;

const int mod = 1e9 + 7;

long long pow(int n, int k) {
	if (k == 0) { return 1; }
	if (k == 1) { return n; }
	long long p = pow(n, k / 2);
	if (k % 2 == 0) {
		return (p * p) % mod;
	}
	else {
		return (((p * p) % mod) * n) % mod;
	}
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, k;
		cin >> n >> k;
		long long lt = pow(n, k);
		cout << lt << endl;
	}
}