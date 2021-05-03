#include <iostream>
#include <cstring>

using namespace std;

int brr[101][25101];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int c, n; cin >> c >> n;
	int arr[101];
	for (int i = 1; i <= n; i++) { cin >> arr[i]; }
	memset(brr, 0, sizeof(brr));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= c; j++) {
			if (j >= arr[i]) {
				brr[i][j] = max(brr[i - 1][j], brr[i - 1][j - arr[i]] + arr[i]);
			}
			else { brr[i][j] = brr[i - 1][j]; }
		}
	}
	cout << brr[n][c] << endl;
	return 0;
}