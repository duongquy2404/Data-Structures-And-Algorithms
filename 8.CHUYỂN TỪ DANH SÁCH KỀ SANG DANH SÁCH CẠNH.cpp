#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	vector<int> vtr[100];
	string str;
	cin.ignore();
	for (int i = 1; i <= n; i++) {
		getline(cin, str);
		str += " ";
		int value = 0;
		int j = 0;
		while (j < str.size()) {
			if (str[j] >= '0' && str[j] <= '9') {
				value = value * 10 + (int)(str[j] - '0');
			}
			else if (value > 0) {
				vtr[i].push_back(value);
				value = 0;
			}
			j++;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < vtr[i].size(); j++) {
			if (vtr[i][j] > i) {
				cout << i << " " << vtr[i][j] << endl;
			}
		}
	}
	return 0;
}