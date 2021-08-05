#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int arr[1000];
		for (int i = 0; i < n; i++) { cin >> arr[i]; }
		int minZezo = arr[0] + arr[1];
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (abs(arr[i] + arr[j]) < abs(minZezo)) {
					minZezo = arr[i] + arr[j];
				}
			}
		}
		cout << minZezo << endl;
	}
}