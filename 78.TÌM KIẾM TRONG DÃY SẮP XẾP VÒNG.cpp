#include <iostream>

using namespace std;

int arr[10000000];

void in(int arr[], int n) {
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, x;
		cin >> n >> x;
		in(arr, n);
		for (int i = 0; i < n; i++) {
			if (arr[i] == x) {
				cout << i + 1 << endl;
			}
		}
	}
}