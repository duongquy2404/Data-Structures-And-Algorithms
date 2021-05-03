#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		string s;
		cin >> s;
		int n = s.length();
		for (int i = n - 1; i >= 0; i--) {
			if (s[i] == '1') {
				s[i] = '0';
			}
			else {
				s[i] = '1';
				break;
			}
		}
		for (int i = 0; i < n; i++) {
			cout << s[i];
		}
		cout << endl;
	}
}