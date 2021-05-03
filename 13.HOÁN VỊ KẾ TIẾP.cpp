#include <iostream>

using namespace std;

void in(int arr[], int n) {
	for (int i = 1; i <= n; i++) { cin >> arr[i]; }
}

void nextHoanVi(int arr[], int n) {
	int i = n - 1;
	while (i > 0 && arr[i] > arr[i+1]) { i--; }
	if (i > 0) {
		int j = n;
		while (arr[j] < arr[i]) { j--; }
		swap(arr[i], arr[j]);
		int d = j + 1, c = n;
		while (d < c) {
			swap(arr[d], arr[c]);
			d++; c--;
		}
	}
	else {
		for (int i = 1; i <= n; i++) { arr[i] = i; }
	}
}

void out(int arr[], int n) {
	for (int i = 1; i <= n; i++) { cout << arr[i] << " "; }
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int arr[1000];
		in(arr, n);
		nextHoanVi(arr, n);
		out(arr, n);
		cout << endl;
	}
}