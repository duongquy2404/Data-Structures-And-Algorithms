#include <iostream>

using namespace std;

int mod = 1e9 + 7;

long long arr[101][50101];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		long long arr[51];
		arr[0] = 1; arr[1] = 1; arr[2] = 2;
		for (int i = 3; i <= n; i++) {
			arr[i] = arr[i - 1] + arr[i-2] + arr[i-3];
		}
		cout << arr[n] << endl;
	}
	return 0;
}