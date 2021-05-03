#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int m, n, k, tmp;
		cin >> m >> n >> k;
		vector<int> vtr;
		for (int i = 0; i < m; i++) {
			cin >> tmp;
			vtr.push_back(tmp);
		}
		for (int i = 0; i < n; i++) {
			cin >> tmp;
			vtr.push_back(tmp);
		}
		sort(vtr.begin(), vtr.end());
		cout << vtr[k - 1] << endl;
	}
}