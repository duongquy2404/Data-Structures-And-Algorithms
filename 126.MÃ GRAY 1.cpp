#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		string str[1100];
		str[1] = '0'; str[2] = '1';
		if (n > 1) {
			int t = 2;
			for (int i = 2; i <= n; i++) {
				int l = pow(2, i);
				for (int j = 1; j <= t; j++) {
					str[l - j + 1] = '1' + str[j];
					str[j] = '0' + str[j];
				}
				t = l;
			}
		}
		for (int i = 1; i <= pow(2, n); i++) {
			cout << str[i] << " ";
		}
		cout << endl;
	}
}