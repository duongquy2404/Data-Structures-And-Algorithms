#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int s, n;
		cin >> s >> n;
		if (s > n * 9) {
			cout << -1 << endl;
		}
		else {
			string str = "";
			while (s > 0 || n > 0) {
				int t = s - (n - 1) * 9;
				if (t < 1) {
					if (str.empty()) {
						str = str + '1';
						s -= 1;
					}
					else { str = str + '0'; }
				}
				else { str = str + to_string(t); s -= t; }
				n--;
			}
			cout << str << endl;
		}
	}
	return 0;
}