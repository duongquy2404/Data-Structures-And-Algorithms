#include <iostream>
#include <vector>

using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int v, e, m, n;
		cin >> v >> e;
		vector<vector<int>> vtr(1000);
		for (int i = 0; i < e; i++) {
			cin >> m >> n;
			vtr[m - 1].push_back(n);
			vtr[n - 1].push_back(m);
		}
		for (int i = 0; i < v; i++) {
			cout << i + 1 << ": ";
			for (int j = 0; j < vtr[i].size(); j++) {
				cout << vtr[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}