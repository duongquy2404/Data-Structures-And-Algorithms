#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		int arr[10001];
		for (int i = 0; i <= n; i++) {
			arr[i] = i;
		}
		for (int i = 4; i <= n; i++) {
			for (int j = 1; j <= sqrt(i); j++) {
				arr[i] = min(arr[i], arr[i - j * j] + 1);
			}
		}
		cout << arr[n] << endl;
	}
	return 0;
}