#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n;
		long long k;
		cin >> n >> k;
		long long count = pow(2, n) / 2;
		while (1) {
			if (n == 1) {
				cout << 1 << endl;
				break;
			}
			if (count == k) {
				cout << n << endl;
				break;
			}
			if (k > count) {
				k = count - (k - count);
			}
			n--;
			count /= 2;
		}
	}
}