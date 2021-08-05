#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int arr[1000];
		for (int i = 0; i < n; i++) { cin >> arr[i]; }
		sort(arr, arr + n);
		for (int i = 0; i < n / 2; i++) {
			cout << arr[n - i - 1] << " " << arr[i] << " ";
		}
		if (n % 2 != 0) {
			cout << arr[n / 2];
		}
		cout << endl;
	}
}