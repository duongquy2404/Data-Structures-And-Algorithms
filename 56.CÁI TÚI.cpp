#include <iostream>
#include <cstring>

using namespace std;

int crr[1005][1005];

void in(int arr[], int n) {
	for (int i = 1; i <= n; i++) { cin >> arr[i]; }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, v;
		cin >> n >> v;
		int arr[1001], brr[1001];
		in(arr, n); in(brr, n);
		memset(crr, 0, sizeof(crr));
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= v; j++) {
				if (j >= arr[i]) {
					crr[i][j] = max(crr[i - 1][j], crr[i - 1][j - arr[i]] + brr[i]);
				}
				else {
					crr[i][j] = crr[i - 1][j];
				}
			}
		}
		cout << crr[n][v] << endl;
	}
	return 0;
}