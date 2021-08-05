#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		int arr[1001];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int lenMax = 0;
		int brr[1001] = { 0 };
		brr[0] = 1;
		for (int i = 1; i < n; i++) {
			brr[i] = 1;
			for (int j = i - 1; j >= 0; j--) {
				if (arr[i] >= arr[j]) {
					brr[i] = max(brr[i], brr[j] + 1);
				}
			}
			lenMax = max(lenMax, brr[i]);
		}
		cout << n - lenMax << endl;
	}
	return 0;
}