#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		string str, s = "";
		cin >> str;
		s += str[0];
		for (int i = 1; i < str.size(); i++) {
			if (str[i - 1] != str[i]) {
				s += '1';
			}
			else { s += '0'; }
		}
		cout << s << endl;
	}
}