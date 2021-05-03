#include <iostream>

using namespace std;

long long arr[94];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	arr[1] = 1; arr[2] = 1;
	for (int i = 3; i <= 93; i++) {
		arr[i] = arr[i - 2] + arr[i - 1];
	}
	while (test--) {
		long long n, i;
		cin >> n >> i;
		while (n > 2) {
			if (i <= arr[n - 2]) {
				n -= 2;
			}
			else {
				i -= arr[n - 2];
				n -= 1;
			}
		}
		if (n == 1) {
			cout << "A" << endl;
		}
		else { cout << "B" << endl; }
	}
	return 0;
}