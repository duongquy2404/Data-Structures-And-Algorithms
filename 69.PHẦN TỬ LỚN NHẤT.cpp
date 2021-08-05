#include <iostream>
#include <algorithm>

using namespace std;

void in(int arr[], int n) {
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
}

void out(int arr[], int n, int k) {
	for (int i = n - 1; i >= n - k; i--) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int test;
	cin >> test;
	while(test--) {
		int n, k;
		int arr[1000];
		cin >> n >> k;
		in(arr, n);
		sort(arr, arr + n);
		out(arr, n, k);
	}
}