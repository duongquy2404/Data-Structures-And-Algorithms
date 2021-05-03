#include <iostream>

using namespace std;

void nextCombination(int arr[], int n, int k, bool& born) {
	int i = k;
	while (i > 0 && arr[i] == n - k + i) { i--; }
	if (i > 0) {
		arr[i] = arr[i] + 1;
		for (int j = i + 1; j <= k; j++) {
			arr[j] = arr[i] + j - i;
		}
	}
	else {
		born = false;
	}
}

bool check(int arr[], int k, int s) {
	for (int i = 1; i <= k; i++) { s -= arr[i]; }
	if (s == 0) {
		return true;
	}
	else { return false; }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, k, s;
	int arr[11];
	while (cin >> n >> k >> s) {
		if (n == k && k == s && s == 0) { break; }
		int count = 0;
		bool born = true;
		int sMin = 0;
		for (int i = 1; i <= k; i++) { arr[i] = i; sMin += arr[i]; }
		if (n<k || sMin>s) {
			cout << count << endl;
		}
		else {
			while (born) {
				if (check(arr, k, s)) { count++; }
				nextCombination(arr, n, k, born);
			}
			cout << count << endl;
		}
	}
	return 0;
}