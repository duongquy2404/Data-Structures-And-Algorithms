#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[11], brr[11];
vector<vector<int>> vtr;

void in(int n) {
	for (int i = 1; i <= n; i++) { cin >> arr[i]; }
	sort(arr + 1, arr + n + 1);
}

void searchSum(int i, int n, int k) {
	for (int j = 0; j <= 1; j++) {
		brr[i] = j;
		if(i==n){
			int sum = 0;
			for (int m = 1; m <= n; m++) {
				if (brr[m]) { sum += arr[m]; }
			}
			if (sum == k) {
				vector<int> tmp;
				for (int m = 1; m <= n; m++) {
					if(brr[m]){ tmp.push_back(arr[m]); }
				}
				vtr.push_back(tmp);
			}
		}
		else {
			searchSum(i + 1, n, k);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, k;
		cin >> n >> k;
		in(n);
		searchSum(1, n, k);
		if (vtr.size() == 0) {
			cout << -1 << endl;
		}
		else {
			sort(vtr.begin(), vtr.end());
			for (int i = 0; i < vtr.size(); i++) {
				cout << "[";
				for (int j = 0; j < vtr[i].size(); j++) {
					cout << vtr[i][j];
					if (j != vtr[i].size() - 1) {
						cout << " ";
					}
				}
				cout << "] ";
			}
			cout << endl;
		}
		vtr.clear();
	}
	return 0;
}