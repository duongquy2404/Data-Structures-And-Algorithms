#include <iostream>
#include <algorithm>

using namespace std;

int mod = 1e9 + 7;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, k;
		cin >> n >> k;
		long long arr[100001] = { 0 };
		arr[0] = 1; arr[1] = 1;
		for (int i = 2; i <= n; i++) {
			for (int j = 1; j <= min(i, k); j++) {
				arr[i] += arr[i - j];
				arr[i] %= mod;
			}
		}
		cout << arr[n] << endl;
	}
	return 0;
}