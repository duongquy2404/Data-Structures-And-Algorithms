#include <iostream>
#include <cstring>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, m; cin >> n >> m;
		long long arr[26][26];
		memset(arr, 0, sizeof(arr));
		for (int i = n; i >= 0; i--) {
			for (int j = m; j >= 0; j--) {
				if (i == n || j == m) {
					arr[i][j] = 1;
				}
				else {
					arr[i][j] = arr[i + 1][j] + arr[i][j + 1];
				}
			}
		}
		cout << arr[0][0] << endl;
	}
	return 0;
}