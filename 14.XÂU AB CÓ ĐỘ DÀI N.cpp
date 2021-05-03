#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void in(int arr[], int n) {
	for (int i = 0; i < n; i++) { arr[i] = 0; }
}

void out(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			cout << 'A';
		}
		else { cout << 'B'; }
	}
	cout << " ";
}

void nextXau(int arr[], int n, bool &kt) {
	out(arr, n);
	int i;
	for (i = n - 1; i >= 0; i--) {
		if (arr[i] == 1) {
			arr[i] = 0;
		}
		else {
			arr[i] = 1;
			break;
		}
	}
	if (i < 0) {
		kt = false;
	}
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int arr[11];
		in(arr, n);
		bool kt = true;
		while (kt) {
			nextXau(arr, n , kt);
		}
		cout << endl;
	}
}