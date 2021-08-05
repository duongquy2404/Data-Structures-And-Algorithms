#include <iostream>

using namespace std;

void out(int arr[], int n) {
	for (int i = 1; i <= n; i++) { cout << arr[i]; }
	cout << " ";
}

void nextHoaiVi(int arr[], int n, bool &kt) {
	out(arr, n);
	int i = n - 1;
	while (i > 0 && arr[i] < arr[i + 1]) { i--; }
	if (i > 0) {
		int j = n;
		while (arr[j] > arr[i]) { j--; }
		swap(arr[i], arr[j]);
		int d = i + 1, c = n;
		while (d <= c) {
			swap(arr[d], arr[c]);
			d++; c--;
		}
	}
	else { kt = false; }
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int arr[11];
		bool kt = true;
		for (int i = 1; i <= n; i++) { arr[i] = n - i + 1; }
		while (kt) {
			nextHoaiVi(arr, n, kt);
		}
		cout << endl;
	}
}