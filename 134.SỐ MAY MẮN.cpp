#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		int a = 0, b = 0;
		while (n > 0) {
			if (n % 7 == 0) {
				b++;
				n -= 7;
			}
			else if (n % 4 == 0) {
				a++;
				n -= 4;
			}
			else {
				b++;
				n -= 7;
			}
		}
		if (n == 0) {
			for (int i = 1; i <= a; i++) { cout << 4; }
			for (int j = 1; j <= b; j++) { cout << 7; }
		}
		else { cout << -1; }
		cout << endl;
	}
	return 0;
}