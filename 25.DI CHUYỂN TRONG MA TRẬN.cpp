#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

void in(int arr[][101], int m, int n) {
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[m][n];
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int m, n; cin >> m >> n;
		int arr[101][101];
		int brr[101][101];
		for (int i = 0; i <= m; i++) {
			for (int j = 0; j <= n; j++) {
				arr[i][j] = brr[i][j] = 0;
			}
		}
		brr[1][1] = 1;
		in(arr, m, n);
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				if (i != 1 || j != 1) { brr[i][j] = brr[i - 1][j] + brr[i][j - 1]; }
				
			}
		}
		cout << brr[m][n] << endl;
	}
	return 0;
}