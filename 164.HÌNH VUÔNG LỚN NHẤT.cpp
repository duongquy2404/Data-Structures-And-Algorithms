#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>

using namespace std;

int arr[501][501];
int brr[501][501];

void in(int n, int m) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
			brr[i][j] = arr[i][j];
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, m; cin >> n >> m;
		int result = 0;
		in(n, m);
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (arr[i][j] == 1 && arr[i][j-1] == 1 && arr[i-1][j] == 1 && arr[i-1][j-1] == 1) {
					brr[i][j] = min(brr[i - 1][j - 1], min(brr[i - 1][j], brr[i][j - 1])) + 1;
				}
				result = max(result, brr[i][j]);
			}
		}
		cout << result << endl;
	}
	return 0;
}