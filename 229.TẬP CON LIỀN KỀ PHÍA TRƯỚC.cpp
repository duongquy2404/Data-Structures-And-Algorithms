#include <iostream>

using namespace std;

void in(int arr[], int k) {
	for (int i = 1; i <= k; i++) { cin >> arr[i]; }
}

void nextBack(int arr[], int n, int k, bool &kt) {
	int i = k;
	while (i > 0 && arr[i] == arr[i - 1] + 1) { i--; }
	if (i > 0) {
		arr[i]--;
		if (arr[i] == 0) { kt = false; }
		for (int j = k; j > i; j--) {
			arr[j] = n--;
		}
	}
	else {
		kt = false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, k; cin >> n >> k;
		int arr[1001]; in(arr, k);
		bool kt = true;
		nextBack(arr, n, k, kt);
		if (kt) {
			for (int i = 1; i <= k; i++) {
				cout << arr[i] << " ";
			}
		}
		else {
			for (int i = 1; i <= k; i++) {
				cout << n - k +i << " ";
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}