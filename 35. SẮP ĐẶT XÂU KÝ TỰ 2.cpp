#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int d; cin >> d;
		string str; cin >> str;
		int n = str.length();
		vector<int> vtr(256, 0);
		int m = 0;
		for (int i = 0; i < str.length(); i++) {
			vtr[str[i]]++;
			if (m < vtr[str[i]]) { m = vtr[str[i]]; }
		}
		if (n - m >= (m-1)*(d-1)) {
			cout << 1 << endl;
		}
		else { cout << -1 << endl; }
	}
	return 0;
}