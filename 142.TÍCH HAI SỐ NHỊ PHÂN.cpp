#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		string str1, str2;
		cin >> str1 >> str2;
		long long a = 0, b = 0, p = 0, q = 0;
		for (int i = str1.length() - 1; i >= 0; i--) {
			if (str1[i] == '1') {
				a += pow(2, p);
			}
			p++;
		}
		for (int i = str2.length() - 1; i >= 0; i--) {
			if (str2[i] == '1') {
				b += pow(2, q);
			}
			q++;
		}
		cout << a*b << endl;
	}
	return 0;
}