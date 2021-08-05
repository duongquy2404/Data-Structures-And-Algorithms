#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> vtr;

void specialAB(string& str, int n, bool& born) {
	int i;
	for (i = n - 1; i >= 0; i--) {
		if (str[i] == 'B') {
			str[i] = 'A';
		}
		else {
			str[i] = 'B';
			break;
		}
	}
	if (i < 0) {
		born = false;
	}
}

bool check(string str, int k) {
	int count = 0;
	int i = 0;
	int lim = 0;
	int len = str.length();
	while (i < len) {
		while (str[i] == 'B' && i<len) {
			count = 0; i++;
		}
		while (str[i] == 'A' && i<len) {
			count++; i++;
		}
		if (count == k) { lim++; }
	}
	if (lim == 1) {
		return true;
	}
	else { return false; }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, k; cin >> n >> k;
	string str = "";
	bool born = true;
	for (int i = 0; i < n; i++) { str += 'A'; }
	while (born) {
		if (check(str,k)) {
			vtr.push_back(str);
		}
		specialAB(str, n, born);
	}
	sort(vtr.begin(), vtr.end());
	cout << vtr.size() << endl;
	for (int i = 0; i < vtr.size(); i++) {
		cout << vtr[i] << endl;
	}
	return 0;
}