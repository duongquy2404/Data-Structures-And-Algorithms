#include <iostream>

using namespace std;

int arr[1000000];
int brr[1000000];

void in(int arr[], int m) {
	for (int i = 0; i < m; i++) {
		cin >> arr[i];
	}
}

void out(int arr[], int brr[], int m, int n) {
	long long maxA = arr[0];
	long long minB = brr[0];
	for (int i = 1; i < m; i++) {
		if (arr[i] > maxA) { maxA = arr[i]; }
	}
	for (int i = 1; i < n; i++) {
		if (brr[i] < minB) { minB = brr[i]; }
	}
	cout << maxA * minB << endl;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int m, n;
		cin >> m >> n;
		in(arr, m);
		in(brr, n);
		out(arr, brr, m, n);
	}
}