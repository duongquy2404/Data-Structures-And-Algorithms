#include <iostream>
#include <algorithm>

using namespace std;

struct cv {
	int job, dead, pro;
};

bool cmp(cv a, cv b) {
	return a.pro < b.pro;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		cv arr[1001];
		for (int i = 0; i < n; i++) {
			cin >> arr[i].job >> arr[i].dead >> arr[i].pro;
		}
		sort(arr, arr + n, cmp);
		int count = 0;
		int sumMax = 0;
		int brr[1001] = { 0 };
		for (int i = n - 1; i >= 0; i--) {
			while (brr[arr[i].dead] && arr[i].dead) { arr[i].dead--; }
			if (!brr[arr[i].dead] && arr[i].dead) {
				brr[arr[i].dead] = 1;
				sumMax += arr[i].pro;
				count++;
			}
		}
		cout << count<< " " << sumMax << endl;
	}
	return 0;
}