#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, k, x;
		cin >> n >> k;
		int arr[40001] = { 0 };
		arr[0] = 1;
		for (int i = 1; i <= n; i++) {
			cin >> x;
			arr[x] = 1;
			for (int j = k; j >= x; j--) {
				if (arr[j - x] == 1) { arr[j] = 1; }
			}
		}
		if (arr[k]) {
			cout << "YES" << endl;
		}
		else { cout << "NO" << endl; }
	}
	return 0;
}