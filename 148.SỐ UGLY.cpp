#include <iostream>
#include <cmath>

using namespace std;

long long Ugly(int n) {
	long long arr[1001];
	int a = 0, b = 0, c = 0;
	arr[0] = 1;
	for (int i = 1; i <= n; i++) {
		arr[i] = min(arr[a] * 2, min(arr[b] * 3, arr[c] * 5));
		if (arr[i] == arr[a] * 2) {
			a++;
		}
		if (arr[i] == arr[b] * 3) {
			b++;
		}
		if (arr[i] == arr[c] * 5) {
			c++;
		}
	}
	return arr[n - 1];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		cout << Ugly(n) << endl;
	}
	return 0;
}