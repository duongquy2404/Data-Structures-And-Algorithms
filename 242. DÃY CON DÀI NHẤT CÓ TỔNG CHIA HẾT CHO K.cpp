#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, k, x; cin >> n >> k;
		int arr[1001];
		int brr[1001][51] = { 0 };
		for (int i = 1; i < k; i++) {
			brr[0][i] = -1005;
		}
		for (int i = 1; i <= n; i++) {
			cin >> x;
			x %= k;
			for (int j = 0; j < k; j++) {
				brr[i][j] = max(brr[i - 1][j], brr[i - 1][(j + k - x) % k] + 1);
			}
		}
		cout << brr[n][0] << endl;
	}
	return 0;
}