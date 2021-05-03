#include <iostream>

using namespace std;

void nextCombination(int brr[], int n, int k, bool &check) {
	int i = k;
	while (i > 0 && brr[i] == n - k + i) { i--; }
	if (i > 0) {
		brr[i] += 1;
		for (int j = i + 1; j <= n; j++) {
			brr[j] = brr[i] - i + j;
		}
	}
	else {
		check = false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, s; cin >> n >> s;
		long long arr[31];
		int brr[31];
		bool count = false;
		for (int i = 1; i <= n; i++) { cin >> arr[i]; }
		for (int i = 1; i <= n; i++) {
			bool check = true;
			for (int j = 1; j <= i; j++) { brr[j] = j; }
			while (check) {
				int sum = 0;
				for (int k = 1; k <= i; k++) {
					sum += arr[brr[k]];
				}
				if (sum == s) {
					cout << i << endl;
					count = true;
					break;
				}
				nextCombination(brr,n,i,check);
			}
			if (count) { break; }
		}
		if (count==false) { cout << -1 << endl; }
	}
	return 0;
}