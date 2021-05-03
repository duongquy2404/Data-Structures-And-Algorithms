#include <iostream>

using namespace std;

void in(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

void occurrences(int arr[], int n, int x) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == x) { count++; }
	}
	if (count != 0) {
		cout << count << endl;
	}
	else { cout << -1 << endl; }
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, x;
		int arr[1000];
		cin >> n >> x;
		in(arr, n);
		occurrences(arr, n, x);
	}
}