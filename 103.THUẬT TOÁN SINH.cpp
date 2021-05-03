#include <iostream>
#include <cmath>

using namespace std;

bool testDX(int arr[], int n) {
	for (int i = 1; i <= n / 2; i++) {
		if (arr[i] != arr[n - i + 1]) { return false; }
	}
	return true;
}

void nextBinary(int arr[], int n) {
	for (int i = n; i > 0; i--) {
		if (arr[i] == 1) {
			arr[i] = 0;
		}
		else {
			arr[i] = 1;
			break;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int arr[1000];
	for (int i = 1; i <= n; i++) { arr[i] = 0; }
	int m = pow(2, n);
	while (m--) {
		if (testDX(arr, n)) {
			for (int i = 1; i <= n; i++) {
				cout << arr[i] << " ";
			}
			cout << endl;
		}
		nextBinary(arr, n);
	}
}