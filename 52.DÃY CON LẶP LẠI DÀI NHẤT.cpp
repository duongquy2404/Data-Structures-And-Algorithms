#include <iostream>
#include <cstring>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n;
		string s;
		cin >> n >> s;
		int arr[101][101];
		memset(arr, 0, sizeof(arr));
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (s[i - 1] == s[j - 1] && i!=j) {
					arr[i][j] = arr[i - 1][j - 1] + 1;
				}
				else {
					arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
				}
			}
		}
		cout << arr[n][n] << endl;
	}
}