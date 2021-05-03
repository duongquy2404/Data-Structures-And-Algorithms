#include <iostream>

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
		int n, k;
		cin >> n >> k;
		int arr[100];
		int count = 0;
		for (int i = 0; i < n; i++) { cin >> arr[i]; }
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (arr[i] + arr[j] == k) { count++; }
			}
		}
		cout << count << endl;
	}
}