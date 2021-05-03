#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, m, p; cin >> n >> m;
		int arr[100000], crr[1001] = { 0 };
		long long count = 0;
		for (int i = 0; i < n; i++) { cin >> arr[i]; }
		for (int i = 0; i < m; i++) { cin >> p; crr[p]++; }
		for (int i = 999; i >= 3; i--) {
			crr[i] += crr[i + 1];
		}
		for (int i = 0; i < n; i++) {
			if (arr[i] == 0) {
				continue;
			}
			else if (arr[i] == 1) {
				count += crr[0];
				continue;
			}
			else if (arr[i] == 2) {
				count += crr[5];
			}
			else if (arr[i] == 3) {
				count += crr[2] + crr[4];
			}
			else { count += crr[arr[i] + 1]; }
			count += crr[0] + crr[1];
		}
		cout << count << endl;
	}
	return 0;
}