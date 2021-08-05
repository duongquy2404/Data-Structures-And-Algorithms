#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		long long n; cin >> n;
		vector<int> vtr;
		while (n > 0) {
			vtr.push_back(n % 10);
			n /= 10;
		}
		vector<int> tmp;
		int m = vtr.size();
		for (int i = m - 1; i >= 0; i--) {
			tmp.push_back(vtr[i]);
		}
		long long arr[14];
		memset(arr, 0, sizeof(arr));
		arr[0] = tmp[0];
		long long sumString = arr[0];
		for (int i = 1; i < m; i++) {
			arr[i] = (i + 1) * tmp[i] + 10 * arr[i - 1];
			sumString += arr[i];
		}
		cout << sumString << endl;
	}
	return 0;
}