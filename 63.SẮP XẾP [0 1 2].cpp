#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000000];

void in(int arr[], int n) {
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
}

void out(int arr[], int n) {
	for (int i = 0; i < n; i++) { cout << arr[i] << " "; }
	cout << endl;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		in(arr, n);
		sort(arr, arr + n);
		out(arr, n);
	}
}