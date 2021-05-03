#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int mod = 1e9 + 7;

long long arr[101][50101];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	for (int i = 0; i < 101; i++) {
		arr[i][0] = 0;
	}
	for (int j = 0; j < 50101; j++) {
		arr[0][j] = 0;
	}
	for (int i = 1; i <= 9; i++) {
		arr[1][i] = 1;
	}
	for (int i = 1; i < 101; i++) {
		for (int k = 0; k <= 9; k++) {
			for (int j = k; j < 50101; j++) {
				arr[i][j] = (arr[i][j] + arr[i - 1][j - k]) % mod;
			}
		}
	}
	int test; cin >> test;
	while (test--) {
		int n, k;
		cin >> n >> k;
		cout << arr[n][k] << endl;
	}
	return 0;
}