#include <iostream>
#include <algorithm>

using namespace std;

int arr[10000000];

void in(int arr[], int n) {
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
}

void out(int arr[], int n) {
	int x = arr[0];
	int y = 0;
	for (int i = 1; i < n; i++) {
		if (x > arr[i]) { x = arr[i]; }
		if (y < arr[i]) { y = arr[i]; }
	}
	for (int i = 0; i < n; i++) {
		if (y > arr[i] && arr[i] > x) { y = arr[i]; }
	}
	if (x != y) {
		cout << x << " " << y << endl;
	}
	else { cout << -1 << endl; }
}

int main() {
	int test;
	cin >> test;
	while(test--) {
		int n;
		cin >> n;
		in(arr, n);
		out(arr, n);
	}
}