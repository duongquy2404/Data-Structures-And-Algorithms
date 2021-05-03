#include <iostream>
#include <cmath>

using namespace std;

void out(int arr[], int n) {
	for (int i = 0; i < n; i++) { cout << arr[i]; }
	cout << endl;
}

void next(int arr[], int n, int k) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == 1) { k--; }
	}
	if (k == 0) { out(arr, n); }
	for (int i = n - 1; i >= 0; i--) {
		if (arr[i] == 1) {
			arr[i] = 0;
		}
		else {
			arr[i] = 1;
			break;
		}
	}
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, k;
		cin >> n >> k;
		int arr[16];
		for (int i = 0; i < n; i++) { arr[i] = 0; }
		int x = pow(2, n);
		while (x--) {
			next(arr, n, k);
		}
	}
}