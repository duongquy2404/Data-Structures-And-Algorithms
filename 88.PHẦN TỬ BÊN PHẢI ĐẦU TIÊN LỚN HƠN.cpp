#include <iostream>

using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		int arr[100000];
		for (int i = 0; i < n; i++) { cin >> arr[i]; }
		for (int i = 0; i < n - 1; i++) {
			bool kt = false;
			for (int j = i + 1; j < n; j++) {
				if (arr[j] > arr[i]) {
					cout << arr[j] << " ";
					kt = true;
					break;
				}
			}
			if (kt == false) {
				cout << -1 << " ";
			}
		}
		cout << -1 << endl;
	}
}