#include <iostream>

using namespace std;

void nextConbination(int brr[], int k, int n, bool& check) {
	int i = k;
	while (i > 0 && brr[i] == n - k + i) { i--; }
	if (i > 0) {
		brr[i] += 1;
		for (int j = i + 1; j <= k; j++) { brr[j] = brr[i] - i + j; }
	}
	else { check = false; }
}

bool arrAscending(int arr[], int brr[], int k) {
	int tmp = 0;
	for (int i = 1; i <= k; i++) {
		if (tmp < arr[brr[i]]) {
			tmp = arr[brr[i]];
		}
		else { return false; }
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, k; cin >> n >> k;
	bool check = true;
	int count = 0;
	int arr[101], brr[101];
	for (int i = 1; i <= n; i++) { cin >> arr[i]; }
	for (int i = 1; i <= k; i++) { brr[i] = i; }
	while (check) {
		if (arrAscending(arr, brr, k)) { count++; }
		nextConbination(brr, k, n, check);
	}
	cout << count << endl;
	return 0;
}