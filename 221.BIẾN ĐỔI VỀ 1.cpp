#include <iostream>
#include <cmath>

using namespace std;

int arr[100001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	arr[1] = 0; arr[2] = 1; arr[3] = 1;
	for (int i = 4; i <= 100000; i++) {
		arr[i] = arr[i - 1] + 1;
		if (i % 3 == 0) {
			arr[i] = min(arr[i], arr[i / 3] + 1);
		}
		if (i % 2 == 0) {
			arr[i] = min(arr[i], arr[i / 2] + 1);
		}
	}
	while (test--) {
		int n; cin >> n;
		cout << arr[n] << endl;
	}
	return 0;
}