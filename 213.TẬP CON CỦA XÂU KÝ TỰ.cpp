#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void binaryString(int arr[], int n) {
	for (int i = n-1; i >= 0; i--) {
		if (arr[i] == 0) {
			arr[i] = 1;
			break;
		}
		else { arr[i] = 0; }
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		string str; cin >> str;
		int arr[17];
		vector<string> vtr;
		for (int i = 0; i < n; i++) { arr[i] = 0; }
		int x = pow(2, n) - 1;
		while (x--) {
			binaryString(arr, n);
			string tmp = "";
			for (int i = 0; i < n; i++) {
				if (arr[i] == 1) {
					tmp += str[i];
				}
			}
			vtr.push_back(tmp);
		}
		sort(vtr.begin(), vtr.end());
		for (int i = 0; i < vtr.size(); i++) {
			cout << vtr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}