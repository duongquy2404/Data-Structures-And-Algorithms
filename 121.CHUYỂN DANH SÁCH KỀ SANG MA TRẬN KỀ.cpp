#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int arr[1001][1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	memset(arr, 0, sizeof(arr));
	cin.ignore();
	string str;
	for (int i = 1; i <= n; i++) {
		getline(cin, str);
		for (int j = 0; j < str.length(); j++) {
			int value = 0;
			while (str[j] != ' ') {
				value = value * 10 + int(str[j] - '0');
				j++;
			}
			if (value != 0) { arr[i][value] = 1; }
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}