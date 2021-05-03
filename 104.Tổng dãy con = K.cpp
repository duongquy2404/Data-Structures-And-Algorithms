#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> vtr;
int arr[1000], brr[1000];

void binarySum(int i, int n, int k) {
	for (int j = 0; j <= 1; j++) {
		brr[i] = j;
		if (i == n) {
			int sum = 0;
			for (int m = 1; m <= n; m++) {
				if (brr[m]) { sum += arr[m]; }
			}
			if (sum == k) {
				vector<int> x;
				for (int m = 1; m <= n; m++) {
					if(brr[m]){ x.push_back(arr[m]); }
				}
				vtr.push_back(x);
			}
		}
		else {
			binarySum(i + 1, n, k);
		}
	}
}

void out() {
	sort(vtr.begin(), vtr.end());
	for (int i = vtr.size() - 1; i >= 0; i--) {
		for (int j = 0; j < vtr[i].size(); j++) {
			cout << vtr[i][j] << " ";
		}
		cout << endl;
	}
	cout << vtr.size();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) { cin >> arr[i]; }
	sort(arr + 1, arr + n + 1);
	binarySum(1, n, k);
	out();
	return 0;
}