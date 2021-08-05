#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, x; cin >> n;
	vector<int> vtr[1001];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> x;
			if (x == 1) { vtr[i].push_back(j + 1); }
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < vtr[i].size(); j++) {
			cout << vtr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}