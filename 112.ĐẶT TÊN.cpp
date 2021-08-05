#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void binaryString(int arr[], int n) {
	for (int i = n - 1; i >= 0; i--) {
		if (arr[i] == 1) {
			arr[i] = 0;
		}
		else {
			arr[i] = 1;
			break;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, k; cin >> n >> k;
		int arr[16];
		vector<string> vtr;
		string str = "";
		for (int i = 0; i < n; i++) {
			str += 'A' + i;
		}
		int c = pow(2, n);
		while (c--) {
			string tmp = "";
			for (int i = 0; i < n; i++) {
				if (arr[i] == 1) {
					tmp += str[i];
				}
			}
			if (tmp.length() == k) { vtr.push_back(tmp); }
			binaryString(arr, n);
		}
		sort(vtr.begin(), vtr.end());
		for (int i = 0; i < vtr.size(); i++) {
			cout << vtr[i] << endl;
		}
	}
	return 0;
}