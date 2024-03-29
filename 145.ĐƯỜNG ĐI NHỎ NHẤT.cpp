﻿#include <iostream>
#include <cmath>

using namespace std;

int arr[1000][1000];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, m; cin >> n >> m;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cin >> arr[i][j];
			}
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (i == 1 && j != 1) {
					arr[i][j] += arr[i][j - 1];
				}
				else if (i != 1 && j == 1) {
					arr[i][j] += arr[i - 1][j];
				}
				else if (i != 1 && j != 1) {
					arr[i][j] += min(arr[i - 1][j - 1], min(arr[i][j - 1], arr[i - 1][j]));
				}
			}
		}
		cout << arr[n][m] << endl;
	}
	return 0;
}