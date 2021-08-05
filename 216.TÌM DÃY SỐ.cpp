#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	int arr[1001], brr[1001];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		brr[i] = 1;
	}
	while (1) {
		for (int i = 0; i < n; i++) {
			if (i != n - 1) {
				while (arr[i] / brr[i] > arr[i + 1] / brr[i + 1]) {
					brr[i]++;
				}
			}
			else {
				while (arr[i] / brr[i] > arr[0] / brr[0]) {
					brr[i]++;
				}
			}
		}
		bool check = true;
		for (int i = 0; i < n - 1; i++) {
			if (arr[i] / brr[i] != arr[i + 1] / brr[i + 1]) {
				check = false;
				break;
			}
		}
		if (check) { break; }
	}
	for (int i = 0; i < n; i++) { sum += brr[i]; }
	cout << sum;
	return 0;
}