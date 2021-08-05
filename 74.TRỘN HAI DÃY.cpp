#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, m, p;
		cin >> n >> m;
		vector<int> vtr;
		for (int i = 0; i < n; i++) {
			cin >> p;
			vtr.push_back(p);
		}
		for (int i = 0; i < m; i++) {
			cin >> p;
			vtr.push_back(p);
		}
		sort(vtr.begin(), vtr.end());
		for (int i = 0; i < m + n; i++) {
			cout << vtr[i] << " ";
		}
		cout << endl;
	}
}