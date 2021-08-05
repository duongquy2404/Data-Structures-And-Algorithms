#include <iostream>
#include <cmath>

using namespace std;

void in(int arr[], int crr[], int n) {
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
	for (int i = 0; i < n; i++) { cin >> crr[i]; }
}

void binaryBorn(int brr[], int n, bool& check) {
	int i = n - 1;
	while (i >= 0) {
		if (brr[i] == 1) {
			brr[i] = 0;
		}
		else { brr[i] = 1; break; }
		i--;
	}
	if (i < 0) { check = false; }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, w; cin >> n >> w;
	int arr[101], crr[101]; in(arr, crr, n);
	int brr[101] = { 0 };
	bool check = true;
	int optimalValue = 0;
	int drr[101] = { 0 };
	while (check) {
		binaryBorn(brr, n, check);
		int kt = 0;
		int value = 0;
		for (int i = 0; i < n; i++) {
			value += arr[i] * brr[i];
			kt += crr[i] * brr[i];
			if (kt > w) { break; }
		}
		if (kt <= w && value > optimalValue) {
			optimalValue = value;
			for (int i = 0; i < n; i++) {
				drr[i] = brr[i];
			}
		}
	}
	cout << optimalValue << endl;
	for (int i = 0; i < n; i++) { cout << drr[i] << " "; }
	return 0;
}