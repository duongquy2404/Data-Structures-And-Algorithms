#include <iostream>
#include <vector>
#include <string>

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
		string s;
		cin >> s;
		vector<int> vtr(256, 0);
		int value = 0;
		for (int i = 0; i < s.length(); i++) {
			vtr[s[i]]++;
		}
		for (int i = 0; i < 256; i++) {
			if (vtr[i] > value) {
				value = vtr[i];
			}
		}
		if (s.length() - value >= value - 1) {
			cout << 1;
		}
		else { cout << -1; }
		cout << endl;
	}
	return 0;
}