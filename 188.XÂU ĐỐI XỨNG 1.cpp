#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

string reverseStrings(string str) {
	string tmp = "";
	for (int i = str.length() - 1; i >= 0; i--) {
		tmp += str[i];
	}
	return tmp;
}

int symmetrialStrings(string str, string tmp) {
	int arr[41][41];
	memset(arr, 0, sizeof(arr));
	for (int i = 1; i <= str.length(); i++) {
		for (int j = 1; j <= tmp.length(); j++) {
			if (str[i - 1] != tmp[j - 1]) {
				arr[i][j] = max(arr[i][j - 1], arr[i - 1][j]);
			}
			else {
				arr[i][j] = arr[i - 1][j - 1] + 1;
			}
		}
	}
	return arr[str.length()][tmp.length()];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		string str; cin >> str;
		cout << str.length() - symmetrialStrings(str, reverseStrings(str)) << endl;
	}
	return 0;
}