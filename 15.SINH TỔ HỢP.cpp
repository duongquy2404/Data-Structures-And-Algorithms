#include <iostream>

using namespace std;

void out(int arr[], int k) {
	for (int i = 1; i <= k; i++) { cout << arr[i]; }
	cout << " ";
}

void nextToHop(int arr[], int n, int k, bool &kt) {
	out(arr, k);
	int i = k;
	while (i > 0 && arr[i] == n - k + i) { i--; }
	if (i > 0) {
		arr[i] = arr[i] + 1;
		for (int j = i + 1; j <= k; j++) {
			arr[j] = arr[i] + j - i;
		}
	}
	else { kt = false; }
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, k;
		cin >> n >> k;
		bool kt = true;
		int arr[16];
		for (int i = 1; i <= k; i++) { arr[i] = i; }
		while (kt) {
			nextToHop(arr, n, k, kt);
		}
		cout << endl;
	}
}