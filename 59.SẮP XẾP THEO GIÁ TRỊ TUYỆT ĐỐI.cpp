#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, x; cin >> n >> x;
		int arr[100000];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int i = 1; i < n; i++) {
			int m = abs(arr[i] - x);
			int j = i - 1;
			if (abs(arr[j] - x) > m) {
				int tmp = arr[i];
				while (abs(arr[j] - x) > abs(arr[j+1]-x) && j >= 0) {
					swap(arr[j], arr[j + 1]);
					j--;
				}
				arr[j + 1] = tmp;
			}
		}
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}