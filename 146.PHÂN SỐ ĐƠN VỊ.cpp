#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		long long p, q;
		cin >> p >> q;
		long long k;
		while (true) {
			if (q % p == 0) {
				cout << 1 << "/" << q / p << endl;
				break;
			}
			else {
				k = q / p + 1;
				cout << "1/" << k << " + ";
				p = p * k - q;
				q = q * k;
			}
		}
	}
	return 0;
}