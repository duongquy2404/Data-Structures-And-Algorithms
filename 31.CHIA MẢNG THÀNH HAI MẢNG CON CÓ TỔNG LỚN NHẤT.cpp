#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, k;
		cin >> n >> k;
		int arr[1000];
		long long arr1 = 0, arr2 = 0;
		for (int i = 0; i < n; i++) { cin >> arr[i]; }
		sort(arr, arr + n);
		int min;
		if (k < n - k) {
			min = k;
		}
		else { min = n - k; }
		for (int i = 0; i < n; i++) {
			if (i < min) {
				arr1 += arr[i];
			}
			else {
				arr2 += arr[i];
			}
		}
		cout << arr2 - arr1 << endl;
	}
}