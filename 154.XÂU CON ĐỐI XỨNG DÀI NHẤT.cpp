#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		string str; cin >> str;
		int lenMax = 0;
		for (int i = 0; i < str.length(); i++) {
			int a = i, b = i;
			while (a >= 0 && b <= str.length() - 1) {
				if (str[a] == str[b]) {
					lenMax = max(lenMax, b - a + 1);
				}
				else {
					break;
				}
				a--; b++;
			}
		}
		for (int i = 0; i < str.length(); i++) {
			int a = i, b = i + 1;
			while (a >= 0 && b <= str.length() - 1) {
				if (str[a] == str[b]) {
					lenMax = max(lenMax, b - a + 1);
				}
				else {
					break;
				}
				a--; b++;
			}
		}
		cout << lenMax << endl;
	}
	return 0;
}