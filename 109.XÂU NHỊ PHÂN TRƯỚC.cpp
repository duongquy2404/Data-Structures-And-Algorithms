#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		string str; cin >> str;
		for (int i = str.length() - 1; i >= 0; i--) {
			if (str[i] == '0') {
				str[i] = '1';
			}
			else { str[i] = '0'; break; }
		}
		cout << str << endl;
	}
	return 0;
}