#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			cout << 0 << " ";
		}
		else {
			cout << 1 << " ";
		}
	}
	cout << endl;
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			cout << 1 << " ";
		}
		else {
			cout << 0 << " ";
		}
	}
	return 0;
}