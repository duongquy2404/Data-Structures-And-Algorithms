#include <iostream>

using namespace std;

void in(int arr[], int k) {
	for (int i = 1; i <= k; i++) { cin >> arr[i]; }
}

void next(int arr[], int n, int k) {
	int i = k;
	while (i > 0 && arr[i] == n - k + i) {
		i--;
	}
	if (i > 0) {
		arr[i]++;
		for (int j = i + 1; j <= k; j++) {
			arr[j] = arr[i] + j - i;
		}
	}
	else {
		for (int i = 1; i <= k; i++) { arr[i] = i; }
	}
}

void out(int arr[], int k) {
	for (int i = 1; i <= k; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, k;
		cin >> n >> k;
		int arr[1000];
		in(arr, k);
		next(arr, n, k);
		out(arr, k);
	}
}