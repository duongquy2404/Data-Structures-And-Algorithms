#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> vtr;
int arr[11][11];

void in(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
		}
	}
}

void nextGoTo(int i, int j, string s, bool &check, int n) {
	if (i == 1 && j == 1 && arr[i][j] == 0) {
		check = false;
		return;
	}
	if (i == n && j == n && arr[i][j] == 1) {
		vtr.push_back(s);
		check = true;
		return;
	}
	if (i < n && arr[i + 1][j] == 1) {
		nextGoTo(i + 1, j, s+"D", check, n);
	}
	if (j < n && arr[i][j + 1] == 1) {
		nextGoTo(i, j + 1, s+"R", check, n);
	}
	if ((i < n && j < n && !arr[i + 1][j] && !arr[i][j + 1]) || i > n || j > n) {
		return;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		bool check = false;
		in(n);
		nextGoTo(1, 1, "", check, n);
		if (!check) {
			cout << -1 << endl;
		}
		else {
			sort(vtr.begin(), vtr.end());
			for (int i = 0; i < vtr.size(); i++) {
				cout << vtr[i] << " ";
			}
			cout << endl;
		}
		vtr.clear();
	}
	return 0;
}