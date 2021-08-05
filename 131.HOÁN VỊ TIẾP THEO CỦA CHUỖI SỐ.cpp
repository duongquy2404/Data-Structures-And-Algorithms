#include <iostream>

using namespace std;

void hoanViString(string &s, bool &kt) {
	int i = s.length() - 2;
	while (i >= 0 && s[i] >= s[i + 1]) { i--; }
	if (i >= 0) {
		int j = s.length() - 1;
		while (s[j] <= s[i]) { j--; }
		swap(s[i], s[j]);
		int d = i + 1, c = s.length() - 1;
		while (d < c) {
			swap(s[d], s[c]);
			d++; c--;
		}
	}
	else {
		kt = false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n;
		string s;
		cin >> n >> s;
		bool kt = true;
		hoanViString(s, kt);
		if (kt == true) {
			cout << n << " " << s << endl;
		}
		else { cout << n << " " << "BIGGEST" << endl; }
	}
	return 0;
}