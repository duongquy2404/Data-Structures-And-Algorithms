#include <iostream>

using namespace std;

const int mod = 123456789;

long long loading(long long n) {
	if (n == 0) { return 1; }
	if (n == 1) { return 2; }
	long long p = loading(n / 2);
	if (n % 2 == 0) {
		return ((p % mod) * (p % mod)) % mod;
	}
	else {
		return (2 * ((p % mod) * (p % mod)) % mod) % mod;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		long long n; cin >> n;
		n -= 1;
		cout << loading(n) << endl;
	}
	return 0;
}