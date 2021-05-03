#include <iostream>
#include <string>

using namespace std;

void nextString(string &str, bool &kt) {
	int i = str.length() - 2;
	while (i >= 0 && str[i] > str[i + 1]) { i--; }
	if (i >= 0) {
		int j = str.length() - 1;
		while (str[i] > str[j]) { j--; }
		swap(str[i], str[j]);
		int d = i + 1, c = str.length() - 1;
		while (d <= c) { swap(str[d], str[c]); d++; c--; }
	}
	else { kt = false; }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		string str; cin >> str;
		bool kt = true;
		while (kt) {
			cout << str << " ";
			nextString(str, kt);
		}
		cout << endl;
	}
}