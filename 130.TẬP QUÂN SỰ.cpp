#include <iostream>
#include <cstring>

using namespace std;

void in(int arr[], int brr[], int k) {
	for (int i = 1; i <= k; i++) { cin >> arr[i]; brr[arr[i]] = arr[i]; }
}

void nextArmy(int arr[], int n, int k, bool &kt) {
	int i = k;
	while (i > 0 && arr[i] == n - k + i) { i--; }
	if (i > 0) {
		arr[i]++;
		for (int j = i + 1; j <= k; j++) {
			arr[j] = arr[i] + j - i;
		}
	}
	else { kt = false; }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, k; cin >> n >> k;
		int arr[41], brr[41];
		memset(brr, 0, sizeof(brr));
		in(arr, brr, k);
		bool kt = true;
		nextArmy(arr, n, k, kt);
		if (kt) {
			int count = 0;
			for (int i = 1; i <= k; i++) {
				if (brr[arr[i]] != arr[i]) { count++; }
			}
			cout << count << endl;
		}
		else { cout << k << endl; }
	}
	system("pause");
	return 0;
}