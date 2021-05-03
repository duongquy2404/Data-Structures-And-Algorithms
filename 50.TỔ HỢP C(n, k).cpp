#include <iostream>

using namespace std;

int mod = 1e9 + 7;
long long arr[1001][1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	for (int i = 0; i < 1001; i++) {
		for (int j = 0; j <= i; j++) {
			if (i == j || j == 0) {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
				arr[i][j] %= mod;
			}
		}
	}
	while (test--) {
		int n, k;
		cin >> n >> k;
		cout << arr[n][k] << endl;
	}
	return 0;
}