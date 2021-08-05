#include <iostream>

using namespace std;

const int mod = 1e9 + 7;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, k; cin >> n >> k;
		if (n < k) {
			cout << 0 << endl;
		}
		else {
			long long p = 1;
			for (int i = n; i >= n - k + 1; i--) {
				p = (p * i) % mod;
			}
			cout << p << endl;
		}
	}
	return 0;
}