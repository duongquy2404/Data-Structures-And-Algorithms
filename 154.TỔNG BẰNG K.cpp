#include <iostream>
#include <cstring>

using namespace std;

const int mod = 1e9 + 7;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		long long n, k; cin >> n >> k;
		long long sum = 0;
		long long arr[1001], brr[1001];
		for (int i = 0; i < n; i++) { cin >> arr[i]; }
		memset(brr, 0, sizeof(brr));
		brr[0] = 1;
		for (int i = 1; i <= k; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[j] <= i) {
					brr[i] += brr[i - arr[j]];
					brr[i] %= mod;
				}
			}
		}
		cout << brr[k] << endl;
	}
	return 0;
}