#include <iostream>

using namespace std;

long long arr[94];

long long binaryZezoOrOne(long long i, long long k) {
	if (i == 1) { return 0; }
	if (i == 2) { return 1; }
	if (k <= arr[i - 2]) {
		return binaryZezoOrOne(i - 2, k); 
	}
	else {
		return binaryZezoOrOne(i - 1, k - arr[i - 2]);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	arr[1] = 1; arr[2] = 1;
	for (int i = 3; i <= 93; i++) { arr[i] = arr[i - 1] + arr[i - 2]; }
	while (test--) {
		long long n, k; cin >> n >> k;
		cout << binaryZezoOrOne(n, k) << endl;
	}
	return 0;
}