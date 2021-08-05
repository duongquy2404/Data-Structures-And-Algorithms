#include <iostream>
#include <algorithm>

using namespace std;

const int mod = 1e9 + 7;

int arr[10000000];

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) { cin >> arr[i]; }
		sort(arr, arr + n);
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			sum = (sum + (i * arr[i]) % mod) % mod;
		}
		cout << sum << endl;
	}
}