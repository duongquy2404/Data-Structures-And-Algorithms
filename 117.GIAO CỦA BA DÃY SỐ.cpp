#include <iostream>

using namespace std;

int arr[100000], brr[100000], crr[10000];

void in(int xrr[], int x) {
	for (int i = 0; i < x; i++) { cin >> xrr[i]; }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, m, k; cin >> n >> m >> k;
		
		in(arr, n); in(brr, m); in(crr, k);
		int i = 0, j = 0, p = 0;
		bool check = false;
		while (i < n && j < m && p < k) {
			if (arr[i] < brr[j] || arr[i] < crr[p]) { i++; }
			if (brr[j] < arr[i] || brr[j] < crr[p]) { j++; }
			if (crr[p] < arr[i] || crr[p] < brr[j]) { p++; }
			if (arr[i] == brr[j] && brr[j] == crr[p]) {
				cout << arr[i] << " ";
				check = true;
				i++; j++; p++;
			}
		}
		if (!check) {
			cout << -1 << endl;
		}
		else { cout << endl; }
	}
	return 0;
}