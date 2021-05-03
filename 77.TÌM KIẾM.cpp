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
		bool kt = false;
		for (int i = 0; i < n; i++) {
			if (arr[i] == x) {
				kt = true;
				break;
			}
		}
		if (kt == true) {
			cout << 1 << endl;
		}
		else { cout << -1 << endl; }
	}
}