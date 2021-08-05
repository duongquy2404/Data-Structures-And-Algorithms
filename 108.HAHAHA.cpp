#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void binaryHaHa(string& s, int n, bool& kt) {
	int i = n - 1;
	for (i = n - 1; i >= 0; i--) {
		if (s[i] == 'A') {
			s[i] = 'H';
		}
		else {
			s[i] = 'A';
			break;
		}
	}
	if (i < 0) { kt = false; }
}

bool checkString(string s, int n) {
	if (s[0] != 'H' || s[n - 1] != 'A') { return false; }
	for (int i = 1; i < n; i++) {
		if (s[i - 1] == 'H' && s[i] == 'H') {
			return false;
		}
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		string s = "";
		bool kt = true;
		vector<string> haha;
		for (int i = 0; i < n; i++) {
			s += 'H';
		}
		while (kt) {
			if (checkString(s, n)) {
				haha.push_back(s);
			}
			binaryHaHa(s, n, kt);
		}
		sort(haha.begin(), haha.end());
		for (int i = 0; i < haha.size(); i++) {
			cout << haha[i] << endl;
		}
	}
	return 0;
}