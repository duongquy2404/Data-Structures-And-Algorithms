#include <iostream>

using namespace std;

long long arr[94];

long long loading(long long i, long long &k) {
	if (i == 2) { return 1; }
	if (i == 1) { return 0; }
	if (k > arr[i - 2]) {
		k -= arr[i - 2];
		return loading(i - 1, k);
	}
	else {
		return loading(i - 2, k);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	arr[1] = 1; arr[2] = 1;
	for (int i = 3; i < 94; i++) { arr[i] = arr[i - 2] + arr[i - 1]; }
	while (test--) {
		long long n, k;
		cin >> n >> k;
		cout << loading(n, k) << endl;
	}
	return 0;
}