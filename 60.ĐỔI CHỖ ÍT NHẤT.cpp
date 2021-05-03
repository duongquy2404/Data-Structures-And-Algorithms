#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		int count = 0;
		int arr[1001];
		for (int i = 0; i < n; i++) { cin >> arr[i]; }
		for (int i = 0; i < n - 1; i++) {
			int value = arr[i];
			int key = i;
			for (int j = i + 1; j < n; j++) {
				if (value > arr[j]) {
					value = arr[j];
					key = j;
				}
			}
			if (value != arr[i]) {
				count++;
				swap(arr[i], arr[key]);
			}
		}
		cout << count << endl;
	}
	return 0;
}