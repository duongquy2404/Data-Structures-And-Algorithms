#include <iostream>
#include <algorithm>

using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	fastIO();
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int arr[1000];
		int count = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		for (int i = 0; i < n - 1; i++) {
			if (arr[i] != arr[i + 1]) {
				count = count + arr[i + 1] - arr[i] - 1;
			}
		}
		cout << count << endl;
	}
}