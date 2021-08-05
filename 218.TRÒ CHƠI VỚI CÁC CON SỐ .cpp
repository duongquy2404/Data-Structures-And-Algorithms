#include <iostream>

using namespace std;

void in(int arr[], int n) {
	for (int i = 1; i <= n; i++) { arr[i] = i; }
}

bool sideBySide(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		if (arr[i] == arr[i + 1] + 1 || arr[i] == arr[i + 1] - 1) { return false; }
	}
	return true;
}

void permutationBorn(int arr[], int n, bool& check) {
	int i = n - 1;
	while (i > 0 && arr[i] > arr[i + 1]) { i--; }
	if (i > 0) {
		int j = n;
		while (arr[i] > arr[j]) { j--; }
		swap(arr[i], arr[j]);
		int c = i + 1, d = n;
		while (c < d) {
			swap(arr[c], arr[d]);
			c++; d--;
		}
	}
	else { check = false; }
}

void out(int arr[], int n) {
	for (int i = 1; i <= n; i++) { cout << arr[i]; }
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		int arr[10]; in(arr, n);
		bool check = true;
		while (check) {
			permutationBorn(arr, n, check);
			if (sideBySide(arr, n)) {
				out(arr, n);
			}
		}
	}
	return 0;
}