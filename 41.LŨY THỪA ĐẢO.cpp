#include <iostream>

using namespace std;

const int mod = 1e9 + 7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

long long daoSo(long long n) {
	long long m = 0;
	while (n > 0) {
		m = m * 10 + n % 10;
		n /= 10;
	}
	return m;
}

long long pow(long long n, long long m) {
	if (m == 0) { return 1; }
	if (m == 1) { return n; }
	long long p = pow(n, m / 2);
	if (m % 2 == 0) {
		return ((p % mod) * (p % mod)) % mod;
	}
	else {
		return ((((p % mod) * (p % mod)) % mod) * n) % mod;
	}
}

int main() {
	fastIO();
	int test;
	cin >> test;
	while (test--) {
		long long n;
		cin >> n;
		long long m = daoSo(n);
		long long p = pow(n, m);
		cout << p << endl;
	}
}